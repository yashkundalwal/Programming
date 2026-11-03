import java.util.*;

class program172
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter the number :");

        iValue = sobj.nextInt();

        Display(iValue);
    }

    public static void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            System.out.print(iCnt + "\t");
        }

        System.out.println();
    }
}