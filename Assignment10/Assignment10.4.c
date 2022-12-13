// Write a program which accept temperature in Fahrenheit and 
// convert it into celsius.(1 celsius =(Fahrenheit - 32) * (5/9))

// Input : 10
// Output : -12.2222        (10-32) * (5/9)

// Input : 34
// Output : 1.1111          (34-32) * (5/9)

#include<stdio.h>

double FhToCs(float fTemp)
{
    float fCelsius=0.0;

    fCelsius =(fTemp - 32) * (0.5556) ;
    return fCelsius;
}

int main()
{
    float fValue=0.0;
    float fRet=0.0;

    printf("Enter temperature in Fahrenheit:\n");
    scanf("%f",&fValue);

    fRet = FhToCs(fValue);
    printf("Temperture in celsius is:%f",fRet);

    return 0;
}