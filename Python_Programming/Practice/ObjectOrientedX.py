class Arithmetic:
    def Addition(self,No1, No2):
        Ans = No1 + No2

        return Ans

    def Substraction(self,No1, No2):
        Ans = No1 - No2

        return Ans


aobj = Arithmetic()

print("Enter First Number")
Value1 = int(input())

print("Enter Second Number")
Value2 = int(input())

# ret = Addition(aobj,Value1,Value2)

Ret = aobj.Addition(Value1, Value2)         

print("Addition is: ", Ret)

Ret = aobj.Substraction(Value1, Value2)   

print("Substraction is: ", Ret)