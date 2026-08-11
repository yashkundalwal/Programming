import java.util.*;

class program182
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
        char ch = '\0';

        for(iCnt = 1 , ch = 65; iCnt <= iNo ; iCnt++ , ch++)
        {
            System.out.print(ch +"\t");
        }

        System.out.println();
    }
}