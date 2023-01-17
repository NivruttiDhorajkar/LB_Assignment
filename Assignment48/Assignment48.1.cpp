/*
Write a generic program which accept one value and one number from user.
Print that value that number of times on screen.

Input  :    M   7
Output :    M   M   M   M   M   M   M

Input  :    11   3
Output :    11  11  11

Input :     3.7     6
Output :    3.7     3.7     3.7     3.7     3.7     3.7

*/

#include<iostream>
using namespace std;

template <class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;

    if(iSize < 0)
    {
        iSize = -iSize;
    }

    for(iCnt=1; iCnt<=iSize; iCnt++)
    {
        cout<<Value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    char ch = '\0';
    cout<<"Enter the charcter:\n";
    cin>>ch;

    int chSize = 0;
    cout<<"How many times u want display charcter:\n";
    cin>>chSize;
    Display(ch,chSize);

    int iNo = 0;
    int iNoSize = 0;
    cout<<"Enter the Integer:\n";
    cin>>iNo;
    cout<<"How many times u want display that integer:\n";
    cin>>iNoSize;
    Display(iNo,iNoSize);

    float f = 0.0;
    int fSize = 0;
    cout<<"Enter the float number:\n";
    cin>>f;
    cout<<"How many times u want display that float number:\n";
    cin>>fSize;
    Display(f,fSize);

    return 0;
} 