import java.util.*;

class Assignment17c
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the First number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        iValue2 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.FindMax(iValue1, iValue2);
    }
}

class Logic
{
    public void FindMax(int iNo1, int iNo2)
    {
        if(iNo1 > iNo2)
        {
            System.out.println(iNo1 + " is greater than " + iNo2);
        }
        else
        {
            System.out.println(iNo2 + " is greater than " + iNo1);
        }
    }
}