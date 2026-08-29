import java.util.*;

class CodeChef2
{
    public static void main(String A[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of test cases: ");
        int t = sobj.nextInt();

        int Day = 0;
        int Month = 0;

        while(t > 0)
        {
            System.out.println("Enter the Date");
            String s = sobj.next();

            s = s.trim();
            s = s.replaceAll("\\s+"," ");

            String Token[] = s.split("\\/");

                    
            Day = Integer.parseInt(Token[0]);
            Month = Integer.parseInt(Token[1]);
        
            

            if((Day <= 12) && (Day > 0) && (Month <= 12) && (Month > 0))
            {
                System.out.println("Both");
            }
            else if((Day <= 31) && (Day > 0) && (Month <= 12) && (Month > 0))
            {
                System.out.println("DD/MM/YYYY");
            }
            else if((Day <= 12) && (Day > 0) && (Month <= 31) && (Month > 0))
            {
                System.out.println("MM/DD/YYYY");
            }

            t--;
        }
    }
}