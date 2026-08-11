import java.util.*;

class Assignment19e
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;

        System.out.println("Enter the Base : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the Exponent : ");
        iValue2 = sobj.nextInt();

        Logic lobj = new Logic();

        lobj.calculatePower(iValue1, iValue2);
    }
}

class Logic
{
    public void calculatePower(int Base, int Exp)
    {
        int iCnt = 0;
        int Power = 1;

        for(iCnt = 1 ; iCnt <= Exp ; iCnt++)
        {
            Power = Power * Base;
        }

        System.out.println(Power);
        

    }
}