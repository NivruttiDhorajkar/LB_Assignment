/*
write generic program to find largest number from three numbers.

*/

#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2, T No3)
{
    T Max;

    if(No1 > No2 && No1 > No3)
    {
        Max = No1;
    }
    else if(No2 > No1 && No2 > No3)
    {
        Max = No2;
    }
    else if(No3 > No1 && No3 > No2)
    {
        Max = No3;
    }
    return Max;
}

int main()
{
    int iRet = Maximum(100,320,32);
    cout<<"Maximum is:"<<iRet<<"\n";

    iRet = Maximum(1000,320,32);
    cout<<"Maximum is:"<<iRet<<"\n";

    iRet = Maximum(1000,320,3200);
    cout<<"Maximum is:"<<iRet<<"\n";

    float fRet = Maximum(32.12f,33.08f,10.0f);
    cout<<"Maximum is:"<<fRet<<"\n";

    fRet = Maximum(320.12f,33.08f,10.0f);
    cout<<"Maximum is:"<<fRet<<"\n";

    fRet = Maximum(320.12f,33.08f,1000.0f);
    cout<<"Maximum is:"<<fRet<<"\n";

    double dRet = Maximum(32.1245,33.0810,10.078);
    cout<<"Maximum is:"<<dRet<<"\n";

    dRet = Maximum(320.1245,33.0810,10.078);
    cout<<"Maximum is:"<<dRet<<"\n";

    dRet = Maximum(32.1245,33.0810,1000.078);
    cout<<"Maximum is:"<<dRet<<"\n";

    return 0;
}