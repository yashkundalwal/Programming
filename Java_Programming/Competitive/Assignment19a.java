import java.util.*;

class Assignment19a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.CheckLeapYear(iValue);
    }
}

class Logic
{
    public void CheckLeapYear(int iNo)
    {
        if((iNo % 4) == 0)
        {
            System.out.println("It is a Leap Year");
        }
        else if((iNo % 100 == 0) && (iNo % 400 == 0))
        {
            System.out.println("It is a Leap Year");
        }
        else
        {
            System.out.println("It is not a Leap Year");
        }
        

    }
}