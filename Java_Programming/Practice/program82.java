import java.util.*;

class program82
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        DigitX dobj = new DigitX();
        
        int iValue = 0;

        System.out.println("Enter the Number : ");
        iValue = sobj.nextInt();

        dobj.DisplayDigit(iValue) ;
    }
}

class DigitX
{
    public void DisplayDigit(int iNo)
    {
        int iDigit = 0;

        for( ; iNo != 0 ; iNo = iNo / 10)
        {
            iDigit = iNo % 10 ;

            System.out.println(iDigit);

            
        }
    }
}