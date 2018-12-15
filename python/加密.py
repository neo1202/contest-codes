'''
step:
1.input letter
  -->switch(alphabet,punctuation,number)
2.caesar
3-1
    2 lines of 0 and 1
    use xor to decide which place caesar
    if 0->before this digit switch order
    if 1->caesar it
3-2 (skip)
    0110111(to which is changed to left switch order)
    abcdefg
    gfedcba
    abcdegf
    fgeabcd
    dcfgeab
4.random 3 number(0~26)
    change those word to the other
'''
import random
def switchalpha(oldalphabet,dice):
    new=oldalphabet[dice:]+oldalphabet[:dice]
    return new

def switchnp(ori,npdice):
    neo=ori[npdice:]+ori[:npdice]
    return neo
    
def caesar(message,digit):#digit=3 -->"12345" turns to "45123"
    newmes=message[digit:]+message[:digit]
    return newmes

def reverse(message,count):#count=3-->"1234567" turns to "3214567"
    x=message[:count]
    y=message[count:]
    z=x[::-1]+y
    return z

print("items:")
#original alphabet
oldalphabet = "abcdefghijklmnopqrstuvwxyz"
dice=random.randint(0,25)
newalpha=switchalpha(oldalphabet,dice)
print(newalpha)

#original numbers and punctuations
np="0123456789,.;:.!?"
npdice=random.randint(0,16)
others=switchnp(np,npdice)
print(others)

#main-1 (use new alphabet)
ori_mes=input('write some words to encrypt : ').lower()
mes=""
for i in ori_mes:
    index=oldalphabet.find(i)
    npindex=np.find(i)
    if oldalphabet.find(i)>=0:
        mes+=newalpha[index]
    elif np.find(i)>=0:
        mes+=others[npindex]
    else :
        mes+=i
print('use : ',dice,npdice)
print(mes)
print()

#make 0 and 1
three=""
seq=['0','1']
for i in range(len(mes)):
    if random.choice(seq)==random.choice(seq):
        three+='1'
    else :
        three+='0'
print("use : ",three)

#main-2 (caesar and reverse)
count=0
for i in three:
    if i == '0':
        mes=caesar(mes,count)
    else :
        mes=reverse(mes,count)
    count+=1
print(mes)
print()

#main-3 (random 3 numbers)
a=random.randint(0,25)
b=random.randint(0,25)
c=random.randint(0,25)
print('use : ',a,b,c)
newmes=""
i=0
while i <len(mes):
    index=newalpha.find(mes[i])
    if index<0:
        newmes+=mes[i]
    else :
        if i%3==0:
            tmp=ord(mes[i])-97
            n=chr((tmp+a)%26+ord('a'))
            newmes+=n
        elif i%3==1:
            tmp=ord(mes[i])-97
            n=chr((tmp+b)%26+ord('a'))
            newmes+=n
        elif i%3==2:
            tmp=ord(mes[i])-97
            n=chr((tmp+c)%26+ord('a'))
            newmes+=n
    i+=1
print(newmes)





print()
print('-----------------'
      'start to decrypt'
      '-----------------')
print()

#decrypt main-3 return mes
mes=""
i=0
while i <len(newmes):
    index=oldalphabet.find(newmes[i])
    if index<0:
        mes+=newmes[i]
    else :
        if i%3==0:
            tmp=ord(newmes[i])-97
            n=chr((tmp-a+26)%26+ord('a'))
            mes+=n
        elif i%3==1:
            tmp=ord(newmes[i])-97
            n=chr((tmp-b+26)%26+ord('a'))
            mes+=n
        elif i%3==2:
            tmp=ord(newmes[i])-97
            n=chr((tmp-c+26)%26+ord('a'))
            mes+=n
    i+=1
print(mes,"decrypt3")
print()

#decrypt main-2 key=three but later reverse it
count=0
for i in three[::-1]:
    if i == '0':
        mes=mes[count+1:]+mes[:count+1]
    elif i == '1':
        k=len(mes)-count-1
        m=mes[:k]
        mes=m[::-1]+mes[k:]
    count+=1
print(mes,"decrypt2")
print()
#decrypt main-1 key=dice,npdice after this output"ans"
ans=""
for i in mes:
    index=oldalphabet.find(i)
    npindex=np.find(i)
    if index>=0:
        newrule=(index-dice)%26
        ans+=oldalphabet[newrule]
    elif npindex>=0:
        newnp=(npindex-npdice)%17
        ans+=np[newnp]
    else :
        ans+=i
print(ans,"decrypt1")
print('!!!done!!!')










