// Write a program which accept width & height of rectangle from user and
// calculate its area.(Area = width * height)

// Input : 5.3  9.78
// Output : 51.834

#include<stdio.h>

double RectangleArea(float fWdth, float fhght)
{
    float fArea=0.0;
    fArea = fWdth * fhght;
    return fArea;
}

int main()
{
    float fWidth=0.0;
    float fHeight=0.0;
    double dRet=0.0;

    printf("Enter width:\n");
    scanf("%f",&fWidth);

    printf("Enter height:\n");
    scanf("%f",&fHeight);

    dRet = RectangleArea(fWidth,fHeight);
    printf("Area of rectangle is :%f",dRet);
    
    return 0;
}