/*
Write generic program to accept N numbers from user and 
return largest values.

*/

#include<iostream>
using namespace std;

template <class T>
T Largest(T *Arr, int iSize)
{
    T large = 0;

    if(Arr == NULL)
    {
        cout<<"There is no memeory allocated for array:\n";
        return -1;
    }

    int iCnt = 0;

    for(iCnt=0;iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] > large)
        {
            large = Arr[iCnt];
        }
    } 
    return large;  
}

int main()
{
    int Ar[] = {10,20,30,40,50};
    float Brr[] = {10.0f,3.7f,9.8f,8.7f};
    double Crr[] = {11.12,12.564,3.2130,85.21};

    int iLarge = Largest(Ar,5);
    cout<<"Summation is:"<<iLarge<<"\n";

    float fLarge = Largest(Brr,4);
    cout<<"Summation is:"<<fLarge<<"\n";

    double dLarge = Largest(Crr,4);
    cout<<"Summation is:"<<dLarge<<"\n";

    return 0;
}