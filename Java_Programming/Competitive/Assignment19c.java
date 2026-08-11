import java.util.*;

class Assignment19c
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.CheckDivisible(iValue);
    }
}

class Logic
{
    public void CheckDivisible(int iNo)
    {
        if((iNo % 5 == 0) && (iNo % 11 == 0))
        {
            System.out.println("Number is Divisible by 5 and 11");
        }
        
        

    }
}