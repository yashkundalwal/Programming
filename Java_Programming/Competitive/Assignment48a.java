import java.util.*;

class Assignment48a
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        int Fine = 0;

        System.out.println("Enter the Number of Days Books kept: ");
        iValue = sobj.nextInt();

        if(iValue < 0)
        {
            System.out.println("Invalid Days");
        }
        else if(iValue <= 7)
        {
            System.out.println("No Fine");
        }
        else if((iValue > 7) && (iValue <= 12))
        {
            Fine = (iValue - 7) * 5 ;
        }
        else
        {
            Fine = ((iValue - 12) * 10) + 25;
        }

        System.out.println("Total Fine to be paid: $"+Fine);
        
    }
}