import java.util.*;

class Assignment48b
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iValue = 0;

        System.out.println("Enter the Balance: ");
        iNo = sobj.nextInt();

        if(iNo < 0)
        {
            System.out.println("Invalid input");
            return;
        }

        System.out.println("Enter the Amount: ");
        iValue = sobj.nextInt();

        if(WithdrawalAmt <= 0)
        {
            System.out.println("Invalid input");
            return;
        }

        ATM aobj = new ATM(iNo,iValue);

        aobj.TransactionStatus();
    }
}

class ATM
{
    private int Balance;
    private int WithdrawalAmt;

    public ATM(int A, int B)
    {
        this.Balance = A;
        this.WithdrawalAmt = B;
    }

    public void TransactionStatus()
    {
        if(Balance < WithdrawalAmt)
        {
            System.out.println("Insufficient Balance");
        }
        else if(WithdrawalAmt % 100 != 0)
        {
            System.out.println("Transaction Failed : Withdrawal Amount must be in Multiple of 100");
        }
        else if(WithdrawalAmt > 25000)
        {
            System.out.println("Transaction Failed : Maximum Withdrawal per transaction is 25,000 ");
        }
        else if((Balance - WithdrawalAmt) < 1000)
        {
            System.out.println("Transaction Failed : Minimum Balance after withdrawal must be 1000");
        }
        else
        {
            System.out.println("Transaction Successful");
            System.out.println("Remaining Balance : "+ (Balance-WithdrawalAmt));
        }
    }
}