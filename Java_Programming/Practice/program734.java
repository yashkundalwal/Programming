// Count Number of Wordes in a String

import java.util.*;

class program734
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String: ");
        String str = sobj.nextLine();

        str = str.trim();

        str = str.replaceAll("\\s+"," ");

        String Token[] = str.split(" ");

        System.out.println("Number of words: "+ Token.length);
    }
}