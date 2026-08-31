import java.util.*;

class Practice
{
    public static void main(String A[])
    {
        ArrayList<Integer> aobj = new ArrayList<Integer>();

        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Enter the number of elements: ");

        iSize = sobj.nextInt();

        int i = 0;
        int Value = 0;

        System.out.println("Enter the elements: ");

        for(i = 0 ; i < iSize ; i++)
        {
            Value = sobj.nextInt();
            aobj.add(Value);
        }

        int iSum = 0;

        Iterator<Integer> iobj = aobj.iterator();

        while(iobj.hasNext())
        {
            int iNo = iobj.next();
            if(iNo%2 == 0)
            {
                iSum = iSum + iNo;
            }
        }

        System.out.println("Summation of even numbers is: "+iSum);
    }
}