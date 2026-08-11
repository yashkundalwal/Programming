#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dTemp = 0.0;
    
    dTemp = (fTemp - 32) * (5.0 / 9.0) ;

    return dTemp ;

}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Temprature in Faranheit : \n");
    scanf("%f \n", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celsius is : %lf \n", dRet);
    
    return 0;
}