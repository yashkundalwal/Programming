import java.util.*;

class Assignment48d
{
    public static void CalculateBill(int iUnit)
    {
        int Bill = 0;

        if(iUnit <= 100)
        {
            Bill = iUnit * 5;
        }
        else if((iUnit >100) && (iUnit <= 200))
        {
            Bill = (100 * 5) + ((iUnit - 100) * 7);
        }
        else
        {
            Bill = (100 * 5) + (100 * 7) + ((iUnit - 200) * 10);
        }

        System.out.println("Total Units Consumed : "+iUnit);
        System.out.println("Total Electricity Bill : "+Bill);
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iUnit = 0;

        System.out.println("Enter the Units Consumed: ");
        iUnit = sobj.nextInt();

        if(iUnit < 0)
        {
            System.out.println("Invalid Input");
        }
        else
        {
            CalculateBill(iUnit);
        }
    }
}