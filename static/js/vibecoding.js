/* learnvibecoding.org — run a tiny language model (SmolLM2-360M) in the browser
 * via @huggingface/transformers + WebGPU. No server round-trips: the model loads
 * from the HuggingFace hub once and then runs fully offline on the device. */
import { pipeline } from "@huggingface/transformers";

const MODEL_ID = "onnx-community/SmolLM2-360M-Instruct";
const MAX_TOKENS = 240;
const SYSTEM_PROMPT =
  "You are a helpful coding assistant. Write clear, working code in plain text. " +
  "Keep answers short and to the point.\n\nUser: ";

const statusText = document.getElementById("status-text");
const statusBar = document.getElementById("status-progress");
const promptBox = document.getElementById("vibe-prompt");
const outputEl = document.getElementById("vibe-output");
const generateBtn = document.getElementById("vibe-generate");

let generator = null;
let modelStatus = "idle"; // idle | downloading | ready | error

async function setStatus(message, pct) {
  statusText.textContent = message;
  if (pct != null) {
    statusBar.style.width = pct + "%";
  }
}

async function loadModel() {
  if (modelStatus === "ready") {
    return;
  }
  if (modelStatus === "error") {
    return;
  }
  modelStatus = "downloading";
  setStatus("Downloading the model (~150 MB)…", 5);
  try {
    generator = await pipeline("text-generation", MODEL_ID, {
      device: "webgpu",
      dtype: "q4f16", // 4-bit quantized: keeps the model tiny and fast on WebGPU
      progress_callback: (progress) => {
        if (progress.status === "progress" && progress.total) {
          setStatus(
            "Downloading the model…",
            Math.round((progress.loaded / progress.total) * 100)
          );
        }
      },
    });
  } catch (err) {
    modelStatus = "error";
    setStatus(
      "WebGPU or the model could not be loaded. This site needs a WebGPU-capable " +
        "browser (Chrome/Edge/…). Please retry in a supported browser."
    );
    console.error("model load failed:", err);
    return;
  }
  modelStatus = "ready";
  setStatus("Model ready — prompt away!", 100);
}

async function vibeGenerate() {
  const prompt = promptBox.value.trim();
  if (!prompt) {
    outputEl.textContent = "Please type a prompt first.";
    return;
  }
  generateBtn.disabled = true;
  outputEl.textContent = "Loading model…";
  await loadModel();
  if (modelStatus !== "ready") {
    outputEl.textContent = "The model could not be started in this browser.";
    generateBtn.disabled = false;
    return;
  }

  outputEl.textContent = "";
  setStatus("Generating…", 100);
  const messages = [
    { role: "system", content: SYSTEM_PROMPT },
    { role: "user", content: prompt },
  ];
  try {
    const { generated_text } = await generator(messages, {
      max_new_tokens: MAX_TOKENS,
      return_full_text: false,
    });
    outputEl.textContent = (generated_text || "").trim();
  } catch (err) {
    outputEl.textContent = "Generation failed: " + err.message;
    console.error(err);
  } finally {
    generateBtn.disabled = false;
    setStatus("Model ready — prompt away!", 100);
  }
}

function vibeClear() {
  promptBox.value = "";
  outputEl.textContent = "";
}

window.vibeGenerate = vibeGenerate;
window.vibeClear = vibeClear;
