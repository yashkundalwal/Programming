import java.util.*;

class program788
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;

        System.out.println("Enter Number of Rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns: ");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println(Arr.length);
        System.out.println(Arr[0].length);

    }
}