import csv
import glob
import json
import re

data = {}

for f in glob.glob("*.csv"):
    d = csv.DictReader(open(f))

    for l in d:
        t = f[:-4]
        l = {x[0].lower().replace(" ", "_"): x[1] for x in l.items()}
        l["retail_price"] = float(l["retail_price"])

        link = re.findall(r'<a href=\"(.*?)\">', l["link_code"])[0]
        image_url, pixel_url = re.findall(r'src=\"(.*?)\"', l["link_code"])

        l["link"] = link
        l["image_url"] = image_url
        l["pixel_url"] = pixel_url

        if t not in data:
            data[t] = []

        data[t].append(l)

encoded = json.dumps(data, sort_keys=True, indent=4)
print encoded
with open("../courses.json", "w") as e:
    e.write(encoded)

