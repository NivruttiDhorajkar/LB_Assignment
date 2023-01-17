/*
Write generic program to accept N numbers from user and 
return addition of that values.

*/

#include<iostream>
using namespace std;

template <class T>
T Addition(T *Arr, int iSize)
{
    T Sum = 0;

    if(Arr == NULL)
    {
        cout<<"There is no memeory allocated for array:\n";
        return -1;
    }

    int iCnt = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }
    return Sum;
}

int main()
{
    int Ar[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    double Crr[] = {11.12,12.564,3.2130,85.21};

    int iSum = Addition(Ar,5);
    cout<<"Summation is:"<<iSum<<"\n";

    float fSum = Addition(Brr,4);
    cout<<"Summation is:"<<fSum<<"\n";

    double dSum = Addition(Crr,4);
    cout<<"Summation is:"<<dSum<<"\n";

    return 0;
}