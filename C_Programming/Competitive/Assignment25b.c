#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    int iCountEven = 0;
    int iCountOdd = 0;

    for(i = 1 ; i <= iRow ; i++)
    {
        for(j = 1, iCountEven = 2,iCountOdd = 1 ; j <= iCol ; j++)
        {
            if((i % 2 != 0))
            {
                printf("%d\t", iCountOdd);
                iCountOdd = iCountOdd + 2;
            }
            else
            {
                printf("%d\t", iCountEven);
                iCountEven = iCountEven + 2;
            }
        }
        printf("\n");
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d", &iValue1);

    printf("Enter the number of Columns : \n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}