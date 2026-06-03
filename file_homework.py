f= open ("salom.txt")
dct ={}
for i in f.read().split("\n"):
    i=i.split(",")
    brend=i[4]
    if brend not in dct:
        dct[brend]=1
    else:
        dct[brend]+=1

max_brend = max(dct, key=dct.get)
print(max_brend, dct[max_brend])

f.close()



f=open("salom.txt")
country_dct= {}
for i in f.read().split("\n"):
    i=i.split(",")
    brend=i[4]
    country=i[-1]
    if brend==max_brend:
        if country in country_dct:
            country_dct[country]+=1
        else:
            country_dct[country]=1
max_country=max(country_dct, key=country_dct.get)
min_country=min(country_dct,key=country_dct.get)

print (f"{max_brend} moshinasi eng kopi {max_country} da" )
print(f"{max_brend} moshinadsi eng kami {min_country} da")








    