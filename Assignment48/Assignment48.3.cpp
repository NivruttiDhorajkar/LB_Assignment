/*
Write generic program to accept N values and 
search first occurence of specific value.

Input : 10  20  30  10  30  40  10  40  10
value to search : 40
Output : 6

*/

#include<iostream>
using namespace std;

template <class T>
int SearchFirst(T *Arr, int iSize, T iNo)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
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
    int iRet = SearchFirst(Arr,9,30);
    cout<<"First occurence is:"<<iRet<<"\n";

    float Brr[] = {10.12f,20.14f,30.00f,10.12f,30.14f,40.23f};
    float fRet = SearchFirst(Brr,6,10.12f);
    cout<<"First occurence is:"<<fRet<<"\n";

    double Crr[] = {10.12,20.23,30.114,10.11,30.114,30.114,10.12,30.114,10.00};
    double dRet = SearchFirst(Crr,9,30.114);
    cout<<"First occurence is:"<<dRet<<"\n";


    return 0;
}