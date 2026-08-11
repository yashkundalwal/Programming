import java.util.*;

class Assignment18a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number : ");
        iValue = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.checkPrime(iValue);
    }
}

class Logic
{
    public void checkPrime(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                System.out.println("It is not a Prime Number");
                break;
            }
            else
            {
                System.out.println("It is a Prime Number");
                break;
            }

        }
    }
}