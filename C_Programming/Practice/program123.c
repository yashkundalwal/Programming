#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[], int iSize)
{
     int iCnt = 0;
     int iSum = 0;

     for(iCnt = 0 ; iCnt < iSize ; iCnt++)
     {
          iSum = iSum + Arr[iCnt];
     }

     return iSum;
}

int main()
{
     int  *Brr = NULL;
     int iLength = 0;
     int iRet = 0;
     int iCnt = 0;

     printf("Enter the number of elements : \n");
     scanf("%d \n", &iLength);

     Brr = (int *)malloc(iLength * sizeof(int));

     printf("Enter the elemets : \n");

     for(iCnt = 0 ; iCnt < iLength ; iCnt++)
     {
          scanf("%d \n", &Brr[iCnt]);
     }

     iRet = Summation(Brr, iLength);

     printf("Addition is : %d \n", iRet);

     free(Brr);
     
     return 0;
}  