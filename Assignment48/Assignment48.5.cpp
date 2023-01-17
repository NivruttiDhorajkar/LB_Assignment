/*
Write generic program to accept N values and 
reverse the contents.

Input : 10  20  30  10  30  40  10  40  10
Output : 10 40  10  40  30  10  30  20  10

*/

#include<iostream>
using namespace std;

template <class T>
void ReverseX(T *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt=iSize-1; iCnt>=0; iCnt--)
    {
       cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    ReverseX(Arr,9);

    float Brr[] = {10.12f,20.14f,30.00f,10.12f,30.14f,40.23f};
    ReverseX(Brr,6);

    double Crr[] = {10.12,20.23,30.114,10.11,30.114,30.114,10.12,30.114,10.00};
    ReverseX(Crr,9);
    return 0;
}