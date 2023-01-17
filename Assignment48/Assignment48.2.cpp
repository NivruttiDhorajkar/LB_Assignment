/*
Write generic program to accept N values and 
count frequency of any specific value

Input : 10  20  30  10  30  40  10  40  10
Vlaue of check frequency: 10
Output : 4

*/

#include<iostream>
using namespace std;

template <class T>
T Frequency(T *Arr, int iSize, T iNo)
{
    int iCNt = 0;
    int iCount = 0;

    for(iCNt=0; iCNt<iSize; iCNt++)
    {
        if(Arr[iCNt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int Arr[] = {10,20,30,10,30,40,10,40,10};
    int iRet = Frequency(Arr,9,10);
    cout<<"Frequency is:"<<iRet<<"\n";

    float Brr[] = {10.2f,20.56f,30.12f,10.11f,30.12f,40.52f,10.10f,40.45f,10.00};
    float fRet = Frequency(Brr,9,30.12f);
    cout<<"Frequency is:"<<fRet<<"\n";

    double Crr[] = {10.1235,20.256,30.157,10.00,3.256,10.1235,10.1235};
    double dRet = Frequency(Crr,7,10.1235);
    cout<<"Frequency is:"<<dRet<<"\n";

    return 0;
}