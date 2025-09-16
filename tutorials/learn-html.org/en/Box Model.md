# Box Model

In CSS, every HTML element is treated as a rectangular box. The **Box Model** describes how the size of a box is calculated, including:

1. **Content** – The area where text or images appear.
2. **Padding** – Space between the content and the border.
3. **Border** – A line surrounding the padding (or content if no padding is set).
4. **Margin** – Space outside the border, separating elements.

## Total Size Calculation

The **total width** of an element is calculated as:

```
Total Width = Content Width + Padding (Left + Right) + Border (Left + Right) + Margin (Left + Right)
```

The **total height** of an element is calculated similarly.

### Example Diagram

```
+---------------------------+
|        Margin             |  
|  +---------------------+  |  
|  |     Border          |  |  
|  |  +-------------+    |  |  
|  |  |  Padding    |    |  |  
|  |  | +-------+   |    |  |  
|  |  | |Content|   |    |  |  
|  |  | +-------+   |    |  |  
|  |  |             |    |  |  
|  |  +-------------+    |  |
|  +---------------------+  |
+---------------------------+
```

---

## Exercise

Modify the `div` element to have:
- A width of `300px`, height of `100px`
- `20px` of padding
- A `5px` solid border
- A `15px` margin

---

## Tutorial Code

```css
.box {
    width: 300px; /* Content width */
    height: 100px; /* Content height */
    padding: 20px; /* Space inside border */
    border: 5px solid #d3d3d3; /* Solid border */
    margin: 15px; /* Space outside the border */
    background-color: #2a2c2f; /* Dark background */
}
```

---

## Expected Output

When applied to an HTML `<div class="box">`, the element should have:
- A **visible border**
- **Spacing around the content**
- **Margin separating it from other elements**

---

## Solution

```css
.box {
    width: 300px;
    height: 100px;
    padding: 20px;
    border: 5px solid #d3d3d3;
    margin: 15px;
    background-color: #2a2c2f;
    color: #d3d3d3; /* Light text */
}
```

