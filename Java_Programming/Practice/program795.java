import java.util.*;
import Marvellous.Matrix;

class program795
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;

        int i = 0;
        int j = 0;

        System.out.println("Enter Number of Rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns: ");
        iCol = sobj.nextInt();

        MatrixLB mobj = new MatrixLB(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        mobj = null;

    }
}

class MatrixLB extends Matrix
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow,iCol);
    }
}
