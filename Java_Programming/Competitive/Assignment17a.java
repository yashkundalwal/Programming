import java.util.*;

class Assignment17a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.SumOfDigits(iValue);
    }
}

class Logic
{
    public void SumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }

        System.out.println("Sum of Digits is : " + iSum);
    }
}