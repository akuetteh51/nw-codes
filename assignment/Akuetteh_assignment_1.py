


while True:
    def Student_detail():
        Full_name = str(input("Enter your Full name : "))
        ID = str(input("Enter your ID : "))
        Class = input("Enter your class : ")
        program = str(input("Enter your program : "))
        age = input("Enter your age :  ")
      
        detail = {"Full_name": Full_name,"Student_ID":ID,"Class": Class,"program":program,"age":age}
        
        def Student_score():
            english = int(input("\nEnter score for english : "))
            maths = int(input("Enter score for mathematics : "))
            science = int(input("Enter score for science : "))
            ICT = int(input("Enter score for ICT : "))
            marks1 = {"English":english,"Mathematics":maths,"Science":science,"ICT":ICT}
            marks = [english,maths,science,ICT]
           # print(detail)
            for score in marks:
                if score in range(80, 101):
                    print("A")
                elif score in range(70, 80):
                    print("B")
                elif score in range(60, 70):
                    print("C")
                elif score in range(50, 60):
                    print("D")
                elif score in range(0, 50):
                    print("E")
            print(detail)
            print(" \n")
            print(marks1)
            print(" \n")
        Student_score()
    Student_detail()
