// Write a program which accept radius of circle from user and
// calculate its area.
// Consider value of PI as 3.14.(Area = PI * Radius * Radius)

// Input : 5.3
// Output : 88.2026

// Input : 10.4
// Output : 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI=0.0f;
    float fArea=0;
    PI = 3.14;

    fArea = PI * fRadius * fRadius;
    return fArea;
}

int main()
{
    float fValue=0;
    float fRet=0;

    printf("Enter the radius of circle:\n");
    scanf("%f",&fValue);

    fRet = CircleArea(fValue);
    printf("Area of circle is:%f",fRet);

    return 0;
}