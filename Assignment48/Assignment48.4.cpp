/*
Write generic program to accept N values and 
search last occurence of specific value.

Input : 10  20  30  10  30  40  10  40  10
value to search : 40
Output : 8

*/

#include<iostream>
using namespace std;

template <class T>
int SearchLast(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt=iSize; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt < 0)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = SearchLast(Arr,9,40);
    cout<<"Last occurence is:"<<iRet<<"\n";

    float Brr[] = {10.12f,20.14f,30.00f,10.12f,30.14f,40.23f};
    float fRet = SearchLast(Brr,6,10.12f);
    cout<<"Last occurence is:"<<fRet<<"\n";

    double Crr[] = {10.12,20.23,30.114,10.11,30.114,30.114,10.12,30.114,10.00};
    double dRet = SearchLast(Crr,9,30.114);
    cout<<"Last occurence is:"<<dRet<<"\n";


    return 0;
}