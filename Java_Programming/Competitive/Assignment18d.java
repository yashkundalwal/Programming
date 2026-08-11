import java.util.*;

class Assignment18d
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.sumEvenOddDigits(iValue);
    }
}

class Logic
{
    public void sumEvenOddDigits(int iNo)
    {
        int iCnt = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                iSumEven = iSumEven + iCnt;
            }
            else
            {
                iSumOdd = iSumOdd + iCnt;
            }
        }

        System.out.println("Summation of Even Numbers is: "+iSumEven);

        System.out.println("Summation of Odd Numbers is: "+iSumOdd);
        

    }
}