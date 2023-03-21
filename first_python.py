# # # # # # n = int(input("Enter the number: "))
# # # # # n = int(input())
# # # # # factorial=1
# # # # # while n > 0:
# # # # #     factorial*=n
# # # # #     n=n-1
# # # # # print(factorial)

# # # # # phrase = "Aayush"
# # # # # print(max(6,7,9,8,3,10))

# # # # if __name__ == '__main__':
# # # #     n = int(input())
# # # #     arr = map(int, input().split())       
# # # #     print(arr)

# # # a=10+20j
# # # b=87+23j
# # # print(a*b)
# # print("\n'.join([".join([('Engineer'[(x-y)%8]if((x*0.05)**2+(y*0.1)**2-1)**3-(x*0.05)**2*(y*0.1)**3<=0 else' ')for x in range(-30,30)]) for y in range(15,-15,-1))


# # s="My name is \'Aayush\' ans I love \'\'\' \"someone\""
# # s1="My name is 'Aayush' ans I love''' " +  '"someone"'
# # print(s1)
# # s1="NIT SRINAGAR"
# # print(s1[-14:])

# # n = "Jammu and Kashmir"
# # print(n[2:4]) #mm
# # print(n[:3]) #Jam
# # print(n[:-3]) #Jammu and Kash
# # print(n[2:]) #mmu and Kashmir
# # print(n[len(n):0:-1])
# # print(n.replace('m','w'))
# # name = ' nit srinagar jammu and kashmir'
# # print(name.lower())
# # print(dir(name))
# # l1= name.split()
# # print(name.find("nit",1))
# # print(name.isnumeric())
 
# # s="Pinging google.com @172.217.167.206 with 32 bytes of data:"
# # p=0
# # q=0
# # for i in range(0,len(s)):
# #     if s[i]=='[':
# #         p=i
# #     if s[i]==']':
# #         q=i
# #         break
# # print(s[p+1:q])
# # print(s[s.find('@')+1 : s.find(' ',s.find('@'))])

# # s= "Reply from 117.203.246.106: bytes=32 time=90ms TTL=48"
# # Split_in_list = s.split()
# # for item in Split_in_list:
# #     if item.find(".")!=-1:
# #         print(item)


# # str = "X-DSPAM-Confidence:0.8475"
# # p = str.find(":") + 1
# # q=float(str[p:])
# # # q=float(s)
# # print(q)
# # print(q+1)

# #
# # d=["Srinagar","Jammu",["JU","KU",23]]
# # for i in d:
# #     print(i,end=" ")

# # a=[0,1,1,1,1,2,1,2]
# # unique=[]
# # for i in a:
# #     if i in unique:
# #         pass
# #     else:
# #         unique.append(i)
# # print(unique)

# # print(a.count(1))   
# # for i in range(a.count(1)):
# #     a.remove(1)
# # print(a)
# # a="NIT SRINAGAR 2020"
# # b=list(a)
# # c=' '
# # c.join(b)
# # # print(c)

# # a=["abc" , "d" , 10]
# # # for i in range(len(a)):
# # #     a[i]=a[i]*3
# # b=[100,'a']
# # print(a+b)
# # a.extend(b)
# # print(a)

# # def sum():
# #     age="aayush is 22"
# #     print(age)

# # sum()
# # print(age)

# # def calculate(a,b,c):
# #     sum=a+b+c
# #     return sum
# # print("The sum is",calculate(10,20,30))
# # sum=0
# # calculate(10,20,30)
# # print("Value of sum is:",sum)

# # def sum(x):
# #     return lambda y:x+y
# # c=sum(10)
# # print(c(30))

# # a="nit sr()
# # c=' '.join(l)
# # print(c)inagar"
# # l=a.split

# # def sum( a,b,c ):
# #     sum=a+b+c
# #     print("sum of three nos is ",str(sum))
# # def sum(a,b):
# #     sum=a+b
# #     print("sum of two no.s is ",str(sum))


# # sum(2,3)
# # sum(2,3,5)

# # list=[1,2,[],3,1,1,[],[3,2,2]]
# # unique=[]
# # for i in list:
# #     if i == unique:
# #         list.remove(i)
# # print(list)

# # s="https://facebook.com/profile.php"
# # print(s[s.find("/")+2:s.find("/",s.find("."))])


# # f = open('x.txt','w')
# # f.write("Hello CSE2020 Batch. Good luck")
# # f.close()
# # f=open("x.txt")
# # print(f.read(5))
# # print(f.tell())
# # # f.seek(0)
# # print(f.read())


# # def sum():
# #     a=10
# #     b=10
# #     print(a+b)
# # def sum():
# #     a=10
# #     b=10
# #     c=10
# #     print(a+b+c)
# # print("Sum of 2 no. ",sum())
# # print("Sum of 3 no. ",sum())

# # l=[4,5,5,5,6,1,2,8,3,3,1]
# # for i in 

# # l=[1,'a',2,3]
# # # print(l.append(300))
# # print(l.remove('a'))
# # print(l)

# # l=['5','6','(1)', '2' , '3' ,'(4)', '5' , '(6)','(7)','8']
# # ans=[]
# # u=""
# # for i in l:
# #     if i.find('(')==0 and i.find(')')==(len(i)-1):
# #         ans.append(u)
# #         ans.append(i)
# #         u=""
# #     else:
# #         u=u+i
# # if len(u)>0:
# #     ans.append(u)
# # ans.pop(0)
# # print(ans)


# # l=['(Akash)', 'in' , 'Jabalpur' ,'(Madhur)', 'in','Sihora' , '(Shivam)','in','Homeless']
# # ans=[]
# # u=""
# # for i in l:
# #     if i.find('(')==0 and i.find(')')==(len(i)-1):
    
# #         ans.append(u)
# #         ans.append(i)
# #         u=""
# #     else:
# #         u=u+" "+i
# # if len(u)>0:
# #     ans.append(u)
# # ans.pop(0)
# # print(ans)


# # t=tuple("srinagar")
# # t.count('a')
# # print(t.index('a'))

# key=['Ten', 'Twenty', 'Thirty']
# value=[10,20,30]
# dic={}
# for i in range(len(key)):
#     # dic[key[i]]=value[i]
#     dic.update({key[i]:value[i]})
# print(dic)

# # dict1 = {'Ten': 10, 'Twenty': 20, 'Thirty': 30}
# # dict2 = {'Thirty': 30, 'Fourty ': 40, 'Fifty': 50}
# # # for i in dict2:
# # #     if dict1.get(i)==None:
# # #         dict1[i]=dict2[i]
# # #     else:
# # #         pass
# # dict1.update(dict2)
# # print(len(dict1))

# sampleDict = {"class":{"student":{"name":"Mike ", "marks":{ "physics":70,"history":80}}}}
# print(sampleDict.values())
# print(len(sampleDict))
# print(sampleDict["class"]["student"]["marks"]["history"])

# # sampleDict = {'a': 100, 'b': 200, 'c':300}
# # for i,j in sampleDict.items():
# #     if j==200:
# #         print(i,"YES")
# #         break
# # else:
# #     print("NO")

# # dic ={"name":"Kelly","age": 25 ,"salary":8000 ,"city":"New york"}
# # dic["location"]=dic.pop("city")
# # print(min(dic))

# # sampleDict ={
# # 'emp1': {'name': 'Jhon', 'salary': 7500},
# # 'emp2': {'name': 'Emma', 'salary': 8000},
# # 'emp3': {'name': 'Brad', 'salary': 6500}
# # }
# # for i in sampleDict:
# #     if sampleDict[i]['name']=='Brad':
# #         sampleDict[i]['salary']=8500
# #         break
# # print(sampleDict)


# # dic ={"name":"Kelly","age": 25 ,"salary":8000 ,"city":"New york"}
# # remove=['name','city']
# # for i in remove:
# #     del dic[i]
# # print(min(dic))


# import math
# a=10
# print(1000000007*1000000007)

# t = int(input())
# while t>0:
#     n = input()
#     l = "Yes"
#     l*=50
#     if n in l:
#         print("YES")
#     else:
#         print("NO")
#     t-=1

# n =input()
# for i in n:
    # print(ord(i),end=" ")



# a=10
# b=input("enter the value of b")
# try:
#     c=a/b
#     print(c)
# except:
#     print("Denominator is 0")
#     print("Program will execute me ")
 
# s="srinagar"
# t=""
# for i in range(len(s)-1,-1,-1):
#     t+=s[i]
# print(t)

# class cse:
    # pass
# s1=cse()
# s2=cse()
# s1.name="AAYUSH"
# s2.name="Jimmy"
# s1.age=22
# s2.age=22
# print(s1.name)
# print(s2.name)

# class A:
#     var1 ="Class Variable of class a"
#     def method1(self):
#         print("method1 of class A")
# class B(A):
#     def method2(self):
#         print("method2 of Class B")
# objA=A()
# objB=B()
# objA.method1()
# print("\n")
# print(objA.var1)
# print("\n")
# objB.method1()
# print("\n")
# print(objB.var2)
# print("\n")
# objB.method2()


# class A:
#     var1 ="Class Variable of class"
# def __init__(self,name):
#     self.name=name
#     print(self.name)
# class B(A):
#     def __init__(self,name,age):
#         self.name=name
#         self.age=age
#         print(self.name,self.age)
# objB1=B("B")
# objB=B("B",20)

# class A:
#     def __init__(self,name):
#         self.name=name
#         print(self.name)
# class C:
#     def __init__(self,age,weight):
#         self.age=age
#         self.weight=weight
#         print(self.age,self.weight)
# class B(C,A):
#     pass
# #objB1=B("
# # objB=B("B")
# print(help(B))

from pytube import YouTube
yt = YouTube('https://www.youtube.com/watch?v=OafpiyPa63I')

yt.streams.filter(progressive=True, file_extension='mp4').order_by('resolution')[-1].download()
print('Completed')