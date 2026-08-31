import java.util.*;

class Assignment48e
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iMembership = 0;
        double iAmount = 0;

        System.out.println("Enter the purchase Amount: ");
        iAmount = sobj.nextInt();

        if(iAmount < 0)
        {
            System.out.println("invalid input");
            return;
        }

        System.out.println("Enter the membership type: ");
        System.out.println("0 for Regular Member");
        System.out.println("1 for Premium Member");
        iMembership = sobj.nextInt();

        if((iMembership < 0) || (iMembership > 1))
        {
            System.out.println("Invalid Input");
            return;
        }

        double Bill = 0;
        double Discount = 0;
        double PremiumDiscount = 0;

        if(iAmount >= 5000)
        {
            Discount = iAmount * 0.20;

            Bill = iAmount - Discount;

            if(iMembership == 1)
            {
                PremiumDiscount = Bill * 0.05;
                Bill = Bill - PremiumDiscount;
            }
        }
        else if((iAmount >= 2000) && (iAmount < 5000))
        {
            Discount = iAmount * 0.1;

            Bill = iAmount - Discount;

            if(iMembership == 1)
            {
                Discount = Bill * 0.05;
                Bill = Bill - Discount;
            } 
        }
        else
        {
            Discount = 0;
            Bill = iAmount;
            System.out.println("No Discount below 2000");
        }

        System.out.println("Original Amount : "+ iAmount);
        System.out.println("Total Discount : "+(Discount+PremiumDiscount));
        System.out.println("Final Payable Amount : "+ Bill);

    }
}