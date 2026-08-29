// Amstrong Number

import java.io.*;

class program817
{
    public static void main(String A[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iNo = 0;
        int iCount = 0;
        int iDigit = 0;
        int iTemp = 0;
        int iSum = 0;

        System.out.println("Enter the Number: ");

        iNo = Integer.parseInt(bobj.readLine());

        iTemp = iNo;

        while(iNo != 0)
        {
            iCount++;

            iNo = iNo / 10;
        }

        iNo = iTemp;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + (int)Math.pow(iDigit,iCount);;
            
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println("It is an Amstrong Number");
        }
        else
        {
            System.out.println("It is not an Amstrong Number");
        }

        
    }
}