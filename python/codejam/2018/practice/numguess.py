time=int(input())
for Ti in range(time):
    a,b=list(map(int,input().split()))
    n=int(input())
    a=a+1
    b=b+1
    for ni in range(n):
        mid=(a+b)//2
        print(mid)
        read=input()
        if read=='CORRECT':
            break
        elif read=='TOO_SMALL':
            a=mid
        elif read=='TOO_BIG':
            b=mid
        elif read=='WRONG_ANSWER':
            break
