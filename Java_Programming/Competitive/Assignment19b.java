import java.util.*;

class Assignment19b
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Marks of Student : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.DisplayGrade(iValue);
    }
}

class Logic
{
    public void DisplayGrade(int iNo)
    {
        if(iNo >= 90)
        {
            System.out.println("A+");
        }
        else if((iNo >= 80) && (iNo < 90))
        {
            System.out.println("A");
        }
        else if((iNo >= 60) && (iNo < 80))
        {
            System.out.println("B");
        }
        else if((iNo >= 40) && (iNo < 60))
        {
            System.out.println("C");
        }
        else
        {
            System.out.println("D");
        }
        

    }
}