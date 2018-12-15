name=['a','b','c','d','e']
seats=[]
from random import randrange
while name :
    seats.append(name.pop(randrange(len(name))))
print(seats)
