f = open("test.txt")
dct={}
for i in f.read().split("\n"):
    i=i.split(",")
    print(i[-1])
f.close()



