// Palindrome
import java.io.*;

class program822
{
    public static void main(String A[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iNo = 0;
        int iDigit = 0;
        int iRev = 0;
        int iTemp = 0;

        System.out.println("Enter the Number: ");

        iNo = Integer.parseInt(bobj.readLine());

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iRev = iRev * 10 + iDigit;

            iNo = iNo / 10;
        }

        if(iTemp == iRev)
        {
            System.out.println("It is a palindrome");
        }
        else
        {
            System.out.println("It is not a palindrome");
        }

    }
}