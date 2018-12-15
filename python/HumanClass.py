class Human :
    total=0
    def __init__(self , name, age):
        self.name=name
        self.age=age
        Human.total+=1
    @staticmethod
    def showTotal():
        print(Human.total)

class Student(Human) :
    def __init__(self , name , age , grade):
        super(Student,self).__init__(name,age)
        self.grade=grade
    def showGrade(self):
        print('{} has {} score'.format(self.name,self.grade))



human_a=Student('neo',16,99)
human_b=Student('rock',25,98)
Student.showTotal()
human_a.showTotal()
# human_a.showGrade()
# human_b.showGrade()

Student.showGrade(human_a)

class Major:
    pass

taipei_mayor = Major()
taipei_mayor.name='CP'
taipei_mayor.grade='97'
Student.showGrade(taipei_mayor)
