import java.util.*;

class Assignment17d
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iValue3 = 0;

        System.out.println("Enter the First number : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Second number : ");
        iValue2 = sobj.nextInt();

        System.out.println("Enter the Third number : ");
        iValue3 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.FindMin(iValue1, iValue2, iValue3);
    }
}

class Logic
{
    public void FindMin(int iNo1, int iNo2, int iNo3)
    {
        if((iNo1 < iNo2) && (iNo1 < iNo3))
        {
            System.out.println(iNo1 + " is Minimum ");
        }
        else if((iNo2 < iNo3) && (iNo2 < iNo1))
        {
            System.out.println(iNo2 + " is Minimum ");
        }
        else
        {
            System.out.println(iNo3 + " is Minimum ");
        }
    }
}