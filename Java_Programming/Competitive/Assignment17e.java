import java.util.*;

class Assignment17e
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.printTable(iValue);
    }
}

class Logic
{
    public void printTable(int iNo)
    {
        int iCnt = 0;
        int iMul = 0;

        for(iCnt = 1 ; iCnt <= 10 ; iCnt++)
        {
            iMul = iNo * iCnt;
            System.out.println(iMul);
        }
    }
}