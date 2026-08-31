// Input : india is my country i live in bharat
// Output : 3 (name)

import java.util.*;

class program750
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+", " ");

        String Token[] = str.split(" ");

        int iCount = 0;

        for(int i = 0 ; i < Token.length ; i++)
        {
            if(Token[i].equals("india"))
            {
                iCount++;
            }
        }

        System.out.println("Frequency of 'india' is: " + iCount);
    }
}