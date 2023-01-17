/*
Write generic program to accept N numbers from user and 
return smallest values.

*/

#include<iostream>
using namespace std;

template <class T>
T Smallest(T *Arr, int iSize)
{
    T Min = Arr[0];

    if(Arr == NULL)
    {
        cout<<"There is no memeory allocated for array:\n";
        return -1;
    }

    int iCnt = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            Min = Arr[iCnt];
        }
    } 
    return Min;  
}

int main()
{
    int Ar[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    double Crr[] = {11.12,12.564,3.2130,85.21};

    int iSmall = Smallest(Ar,5);
    cout<<"Summation is:"<<iSmall<<"\n";

    float fSmall = Smallest(Brr,4);
    cout<<"Summation is:"<<fSmall<<"\n";

    double dSmall = Smallest(Crr,4);
    cout<<"Summation is:"<<dSmall<<"\n";

    return 0;
}