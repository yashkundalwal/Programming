import java.util.*;
import Marvellous.Matrix;

class program799
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;

        int i = 0;
        int j = 0;

        int iRet = 0;

        System.out.println("Enter Number of Rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter Number of Columns: ");
        iCol = sobj.nextInt();

        MatrixLB mobj = new MatrixLB(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.SummationAll();
        System.out.println("Summation of all elements is: "+iRet);

        mobj.SummationRow();

        iRet = mobj.MaximumAll();
        System.out.println("Maximum elements is: "+iRet);

        iRet = mobj.MinimumAll();
        System.out.println("Minimum elements is: "+iRet);

        mobj = null;

    }
}

class MatrixLB extends Matrix
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow,iCol);
    }

    public int SummationAll()
    {
        int iSum = 0;
        int i = 0;
        int j = 0;

        for(i = 0 ; i < iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                iSum = iSum + Arr[i][j];
            }
        }

        return iSum;
    }

    public void SummationRow()
    {
        int iSum = 0;
        int i = 0;
        int j = 0;

        for(i = 0 ; i < iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                iSum = iSum + Arr[i][j];
            }

            System.out.println("Summation of "+i+"st Row is: "+iSum);
            iSum = 0;
        }
    }

    public int MaximumAll()
    {
        int iMax = 0;
        int i = 0;
        int j = 0;

        iMax = Arr[0][0];

        for(i = 0 ; i < iRow ; i++)
        {
            for(j = 0 ; j < iCol ; j++)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }

        return iMax;
    }
}
