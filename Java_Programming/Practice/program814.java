// x = 3, y = 5
// 3 * 3 * 3 * 3 * 3

import java.io.*;

class program814
{
    public static void main(String A[]) throws IOException
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int x = 0;
        int y = 0;
        int iPower = 0;

        System.out.println("Enter the Number as a base: ");

        x = Integer.parseInt(bobj.readLine());

        System.out.println("Enter the Number as a base: ");

        y = Integer.parseInt(bobj.readLine());

        iPower = 1;

        iPower = (int)Math.pow(x, y);

        System.out.println("Result is: "+ iPower);

        
    }
}