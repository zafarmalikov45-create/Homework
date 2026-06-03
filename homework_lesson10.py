import json
f=open("homework", "r")
data=json.load(f)
f.close()


for i in data["branches"]:
    print(i["name"])



for b in data["branches"]:
    for t in b["teachers"]:
        if t["subject"]== "Python":
            print(t["name"], b["name"], t["experience"])


for s in data["branches"]:
    print(s["name"], len(s["students"]))


max_p=0
max_name=""
max_branch= ""


for q in data["branches"]:
    for w in  q["students"]:
        if w["payment"]>max_p:
            max_p=w["payment"]
            max_name=w["name"]
            max_branch=q["name"]
print(max_name, max_branch)



for z in data["branches"]:
    total = 0
    for s in z["students"]:
        total += s["payment"]
    print(b["name"], total)




for r in data["branches"]:
    for t in r["teachers"]:
        if t["experience"] > 5:
            print(t["name"], b["name"])



for l in data["branches"]:
    for s in l["students"]:
        if s["course"] == "Python":
            print(s["name"])
            break