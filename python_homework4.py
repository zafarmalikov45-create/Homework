# yil  = input ("TUGILGAN YILINGIZ KIRITING: ")
# oy = input ("TUGILGAN OYINGIZNI KIRITINH: ")
# print("BIRTHDAY is :" {yil} {oy})




# son= int (input("SONI  KIRITING:  "))
# print (sum := (son%10 + son//10%10 + son//100)**3)


# son1 = int (input(" IKI- XONALI SONNI KIRITING: "))
# print(sum := (son1%10 + son1//10)//2)


# ism =input ("ISMINGIZNI KIRITING:")
# second= input ("FAMILIYANGIZNI KIRITING: ")
# print(f"""
# FULL NAME: {ism} {second}""")


# son1 = int(input( " BIRINCHI SONNI KIRITING: "))
# son2 = int(input( " IKINCHI SONNI KIRITING: "))
# print(f"""
#       KOPAYTMA: {son1*son2}
#       BOLINMA {son1//son2}
#       YIGINDI: {son1+son2}
#       AYITMA: {son1 - son2}
#       """)


# soz = input ("BIRORTA SOZ KIRITING: ")
# son = int(ord(soz))
# print (son-96)


# soz= input ("SOZ KIRITING: ")
# uzunligi= len(soz)
# print (uzunligi**3)



# year = int(input ("TUGILGAN YILINGIZNI KIRITING: " ))
# print (2026- year)



# harf = input ("BITTA HARF KIRITING:")
# katta =harf+32
# print ()



# a, b = 96, 28
# print (c:=a+b)



# matn = "salom zafar nma gap"
# matn="S"+matn[1:]
# print (matn)


# matn= "BUGUN DARS BOLMAYDI"
# matn = matn[:6]+ "d"+ matn [7:]
# print (matn)

# fullname= input("ISMINGIZNI KIRITING: ")+ " " +  input ("FAMILIYANGIZNI KIRITING: ")
# print (fullname)


# a_kun= int(input("A USERNI TUGILGAN KUNI: "))
# a_oy= int (input("A USERNI TUGILGAN OYI: "))
# a_yil= int (input("A USERNI TIGILGAN YILI:" ))



# b_kun= int(input("B USERNI TUGILGAN KUNI: "))
# b_oy= int (input("B USERNI TUGILGAN OYI: "))
# b_yil= int (input("B USERNI TIGILGAN YILI: "))

# a_kun, b_kun= b_kun, a_kun
# a_yil, b_yil= b_yil, a_yil


# print (f"a = {a_kun}--{a_oy}--{a_yil}")
# print(f"b= {b_kun}-- {b_oy}--{b_yil} ")


# film= input ("FILM NOMINI KIRITING: ")
# yosh= int (input("YOSHINGIZNI KIRITING: "))

# if yosh<12:
#   print("SIZNING YOSHINGIZ UCHUN ANIMATSIY va OILA kanrinin tavsiya qilaman ")
# elif yosh>12 and yosh<18:
#  print ("SIZNING YOSHINGI UCHUN ACTION VA SARGUZASHT JANRNI TAVSIYA QLAMAN ")
# elif yosh>18 and yosh<60:
#  print("SIZNING YOSHINGIZGA DRAMA VA KOMEDIYA JANRNI TAVSIYA QLAMAN ")
# else:
#  print("SIZNING YOSHINGIZGA DOKUMENTAL VA KLASSIK JANRNI TAVSIYA QLAMAN")


# sum=0
# for i in range(3):
#     price = int (input ("NARXNI KIRITING: "))
#     sum+=price
# if sum>100:
#     print("SIZGA 10% CHEGIRMA AMAL QILINADI")
# elif sum>200:
#     print ("SIZGA 15% CHEGIRMA AMAL QILINADI")
# elif sum>500:
#  print("SIZGA 20 % CHEGIRMA AMAL QILADI")

# while (1)
# temp= int (input(HARORATNI SELSIYADA KIRITING: ))


# if temp =="exit"
# break:


# //////////////////////////////////////////
# n= int (input("n ni kiriting: "))
# summa=0

# for i in range (1,n+1):
#     summa+=i**i
# print("YIGINDI:", summa)





# age= int(input("YOSHINGIZNI KIRITING: "))

# for i in range(1,201):
#     if i==age:
#         print("BU SIZNI YOSHINGIZ:")
#     else: print(i)



# for i in range(100, 1000):
#     s = str(i)

#     if s[0] == s[1] or s[0] == s[2] or s[1] == s[2]:
#         print(i)




# son = int(input("YASHIRIN SONNI KIRITING: "))

# for i in range(3):
#     topish = int(input("SONNI TOPING: "))

#     if topish == son:
#         print("WINNER")
#         break
#     else:
# #         print("LOOSER")

# natija=[]
# for i in input(">>>").split():
#    natija.append(type(i))

# print (natija)


# lst= [7,8,1,3,4,6,7,5]
# natija=[]
# for i , qiymat in enumerate(lst):
#     if i%2 :
#         qiymat=qiymat**3
#         print(qiymat)
#     else:
#         qiymat=qiymat**2
#         print (qiymama



# matn= "SALOM ZAFAR "
# natija=matn.isdigit()
# print(natija)


# soz = input(">>")
# i=0
# enumerate("salom")  







# data = [(0,2,0,0),(0,3,2,2),(1,3,2,4,3),(4,1,2,4)]
# result = [tuple(t.count(x) for x in t) for t in data]
# print(result)


# soz = input("Soz kiriting: ")
# if soz == soz[::-1]:
#     print("Bu palindrom soz")
# else:
#     print("Bu palindrom soz  emas")



# soz = input("Soz kiriting: ").split()
# result = [x for x in soz if len(x) > 5]
# print(result)



# son = [(1,3), (0,2,0), (1,1,1), (0,4), (1,9)]
# result = [sum(t) for t in son]
# print(result)


# data = [(1,2,3), (2,2), (3,0,0)]
# result = list(reversed(data))
# print(result)

# dct = {
#     "Ten" : 10, 
#     "twenty": 20,
#     "thirty" :30, 
#     "forty": 40,


# }
# print(dct)


# dct = {
#     "a": 100,
#     "b" : 200,
#     "c": 300,
# }

# key=200
# if key  in dct:
#     print("200 bor")
# else:
#     print("YOQ")



# dct = {
#     "1":10,
#     "2":20,
#     "3":20,
#     "4":55,
#     "5":25,
# }

# a= list(dct.keys())
# b= list(dct.values())

# dct.pop(min(dct, key=dct.get))
# dct.pop(max(dct, key=dct.get))


# print(dct)



# dct_1={ 
#     "1":10, 
#     "2": 20,
# }
# dct_2={
#     "3":30,
#     "4":40,
#  }
# dct_3={ 
#     "5":50,
#     "6":60,
# }

# new_dct.updat


# dct = {
#     "data1":100, 
#     "data2":200,
#     "data3":300,
# }

# print(sum(list(dct.values())))
# print(list(dct.values()))



# dct={}

# for i in dct:
# dct_new[i]=dct[i]



#index - metodi - berilgan data nechinchi indexda saqlanganini aytib turadi
# a= [10, 20, 30]
# print(a.index(20))

# a=[20,40,55,19]
# print(a.index(19))



#split - metodi matni bollaklarga boladi( list kiladi)
# b= "zafar<nma gapla ozi tinchmisan"
# print(b.split(a))


print("7".join("ZAFAR"))




# a= ["dw", "s" ,"as" ]
# for x in enumerate(a):
#    print(x)


#list
# a= list("salom")
# for x in list(a):
#     print(x)


# a=["salom nma gap", 77, 23]
# for s in a:
#     if isinstance(s, int):
#         print(s)



# for x in a:
#     if isinstance(x, str):
#         print(x)


# for i in input().split():
#     for x in i:
#         if x in "aA"


# lst= [23, 56, 243, 34]
# sum=0
# for i in lst:
#     if isinstance(i, int):
#         sum += i 
# print(sum)




# lst = ["SALOM", "NMA GAP", "AFar"]
# natija= max(lst)
# print (natija)



# lst =[12, 32, 3 ,43, 23 ,3 ]
# juft, toq = [], []


# for i in lst:
#     if i % 2:
#         toq.append(i)
#     else:
#         juft.append(i)


# print (juft, toq)




# lst = [12,3,32,23,32]
# toq, juft = [], []



# for i in lst:
#     if i%2 :
#         toq.append(i)
#     else :
#         juft.append(i)



# lst = ["salom", "kim", "olma ", "dsmdfsdf"]
# for i in input().split():
#     if i[0].isupper() and len(i)>5:
#         lst.append(i)
# print(lst)


# lst = ["salom",43, "kim", "olma", 32 , "dsmdfsdf"]
# for i in lst.copy():
#     if isinstance(i, int):
#         lst.remove(i)
# print(lst)



# lst=[5, 343, 43, 423, 43, 43, 34, 5, 234, 24,]
# qiymat=lst.pop(2)
# print(lst)
# print (qiymat)
    

# lst=[32, 43, 4, 4, 7, 5, 6, 8,42]
# lst.pop()# агарда попни () ---- очик колдирса охирги кийматни очириб ташлайди
# print(lst)


# p=[32, 43, 4, 4, 7, 5, 6, 8,42]
# p.remove(7)# киймат бойича 7 олиб ташлади
# print(p)


# p=[32, 43, 4, 4, 7, 5, 6, 8,42]
# p.sort()
# p.reverse()
# print(p)



# lst = ["salom",43, "kim", "olma", 32 , "dsmdfsdf"]
# for i in lst.copy():# копиа килсак бутунлай хамма кийматларни текшириб беради биттаси хам колиб кетмайди
#     if isinstance(i, str):
#         lst.remove(i)
# print(lst)


# print ("JUFT") if int (input(">>>"))%2==0 else print ("TOQ ")


# matn= input(">>>>>>")
# print ("POLINDROM") if matn== matn[::-1] else print("POLINDROM EMAS")



# lst = [45, 53, 34, 48, 6]
# natija = [i for i in range(1, 11) if i%2 ==0 ]
# print (natija)



# natija= [i.lower() if i.lower() in "aoeui" else i.upper() for i in input(">>>>")]
# print(natija)



# matn= input(">>>")
# matn = "".join(sorted(matn))
# print(matn)


# lst = [1, 7, 2, 5, 9]
# if lst== sorted(lst):
#     print("TARTIBLI")
# else:
#     print("TARTIBSIZ")



# tpl= (12, 45, 98, "ZAFAR")
# tpl=list(tpl)
# tpl[2]="OSCAR"
# tpl=tuple(tpl)
# print(tpl)


# lst= [(12,2), (2,5,7,23), (9,3,5), (3,76)]
# for i in lst:
#     print (f"{i} ---> {sum(i)}")






data = [
    {"full_name":"Eugene Elsmor","company":"Kazu","position":"Electrical Engineer","salary":"$4440.86"},
    {"full_name":"Joni Stredder","company":"JumpXS","position":"Environmental Tech","salary":"$870.05"},
    {"full_name":"Terri-jo Fulham","company":"Tagchat","position":"Assistant Media Planner","salary":"$1992.55"},
    {"full_name":"Priscilla Pandya","company":"Youopia","position":"Help Desk Operator","salary":"$3715.95"},
    {"full_name":"Wolfy Swanborough","company":"Topiclounge","position":"Recruiter","salary":"$1045.61"},
    {"full_name":"Raleigh Ratter","company":"Zoozzy","position":"Graphic Designer","salary":"$602.41"},
    {"full_name":"Anastasia Winward","company":"Avaveo","position":"Cost Accountant","salary":"$3641.42"},
    {"full_name":"Dorry Vasyunichev","company":"Fivebridge","position":"Junior Executive","salary":"$2035.05"},
    {"full_name":"Richy Cleft","company":"Jamia","position":"Sales Associate","salary":"$912.98"},
    {"full_name":"Zack Record","company":"Oyonder","position":"Social Worker","salary":"$2492.23"},
    {"full_name":"Lissy Newns","company":"Riffwire","position":"Developer II","salary":"$1177.79"},
    {"full_name":"Audrye Churchyard","company":"Photospace","position":"Environmental Tech","salary":"$4125.83"},
    {"full_name":"Timothy Seligson","company":"Riffpath","position":"Compensation Analyst","salary":"$1271.94"},
    {"full_name":"Brandie Rogeon","company":"Riffpath","position":"Analyst Programmer","salary":"$1911.09"},
    {"full_name":"Dane Rugg","company":"Twimm","position":"Associate Professor","salary":"$2200.72"},
    {"full_name":"Mick Jeduch","company":"Realblab","position":"Executive Secretary","salary":"$1154.20"},
    {"full_name":"Rowland Christofol","company":"Mycat","position":"Senior Cost Accountant","salary":"$1119.94"},
    {"full_name":"Sibella Abrahams","company":"Minyx","position":"Internal Auditor","salary":"$4023.25"},
    {"full_name":"Layne Thomel","company":"Centimia","position":"Research Associate","salary":"$4073.17"},
    {"full_name":"Demetris Clemenzi","company":"Tagopia","position":"Human Resources Manager","salary":"$1530.37"},
    {"full_name":"Kerstin Devon","company":"Katz","position":"Senior Quality Engineer","salary":"$1305.61"},
    {"full_name":"Brandon Burgwyn","company":"Mydeo","position":"Physical Therapy Assistant","salary":"$1325.58"},
    {"full_name":"Dyana Crosby","company":"Riffpath","position":"Payment Adjustment Coordinator","salary":"$1501.54"},
    {"full_name":"Harald Voller","company":"Riffpedia","position":"Accountant I","salary":"$4397.60"},
    {"full_name":"Nollie Phipard-Shears","company":"Aimbo","position":"Legal Professor","salary":"$3172.57"},
    {"full_name":"Gaynor Dannohl","company":"Riffpath","position":"Administrative Assistant II","salary":"$3035.89"},
    {"full_name":"Tome Bensen","company":"Yamia","position":"Assistant Professor","salary":"$3677.10"},
    {"full_name":"Jessey Anshell","company":"Bubblemix","position":"Registered Nurse","salary":"$2782.66"},
    {"full_name":"Valentijn Melbury","company":"Bluejam","position":"Statistician I","salary":"$1308.43"},
    {"full_name":"Rochelle Andrejevic","company":"Riffpath","position":"VP Product Management","salary":"$1734.61"}
]
#1
count=0
for i in data:
  if i["position"]=="Human Resources Manager":
    count+=1
print(count)


#2
sum=0
for f in data:
  if f["company"]=="Riffpath":
    oylik= float(f["salary"][1:])
    sum += oylik
print(sum)

#3
for n in data:
  if n["full_name"][0]=="K":
    salary=float(n["salary"][1:])
    salary *=2
    n["salary"]=f"{salary:.2f}$"
print(salary)


#4
for z in data:
  z["FIO"]= z.pop("full_name")
print(data)


#5
new_data= []


for t in data:
  pos1= t["position"].lower()
  if "senior" not in pos1 and "junior" not in pos1:
    new_data.append(t)
data=new_data
print(data)


#6
count = 0
for w in data:
    if "assistant" in w["position"].lower():
        count += 1
print(count)


#7
for q in data:
    if "assistant" in q["position"].lower():
        q["position"] = q["position"].replace("Assistant", "Junior")
print(data)