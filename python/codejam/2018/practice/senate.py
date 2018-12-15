heap=[]
def clearHeap():
    global heap
    heap=[None]
def pushHeap(x): #x : ("A",15)
    global heap
    heap.append(x)
    pos = len(heap)-1
    while pos>1 :
        if heap[pos][1]>heap[pos//2][1]:
            heap[pos],heap[pos//2]=heap[pos//2],heap[pos]
            pos=pos//2
        else :
            break
def popHeap():
    global heap
    top = heap[1] #("A",15)
    heap[1]=heap[-1]
    del heap[-1]
    pos = 1
    while True :
        if pos*2+1<len(heap) :
            if heap[pos][1]>=heap[pos*2][1] and heap[pos][1]>=heap[pos*2+1][1] :
                break
            elif heap[pos*2][1]>=heap[pos*2+1][1] :
                heap[pos],heap[pos*2]=heap[pos*2],heap[pos]
                pos*=2
            else :
                heap[pos],heap[pos*2+1]=heap[pos*2+1],heap[pos]
                pos*=2+1
        elif pos*2<len(heap) :
            if heap[pos][1]>=heap[pos*2][1] :
                break
            else :
                heap[pos],heap[pos*2]=heap[pos*2],heap[pos]
                break
        else :
            break
    return top


    #return max value in heap and delete it


t=input()
for time in range(int(t)):
    n=int(input())
    groups=[int(s) for s in input().split()]
    clearHeap()
    i = 1
    for g in groups :
        if g>0 :
            pushHeap((chr(ord("A")+i-1),g))
        i+=1
    print("Case #{}:".format(time+1),end='')
    while len(heap)>3 :
        top=popHeap()
        print(' '+top[0],end='')
        if top[1]>1 :
            pushHeap((top[0],top[1]-1))
    top1=popHeap()
    top2=popHeap()
    for i in range(top1[1]) :
        print(" {}{}".format(top1[0],top2[0]),end='')
    print()
