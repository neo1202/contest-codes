class Account :
    total=0 #static variable
    def __init__(self , number , name):#instance method
        self.name=name
        self.number=number
        self.balance=0
        Account.total+=1

    def showTotal():#static method
        print('There are {} accounts'.format(Account.total))

acc1=Account('142857','neo')
acc2=Account('314','rock')
Account.showTotal()
