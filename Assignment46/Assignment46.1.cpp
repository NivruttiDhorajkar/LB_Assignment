/*
Accept the number from user and 
search last occurence of that number

*/

#include<iostream>
using namespace std;

class Array
{
    protected:
        int *Arr;
        int iSize;

    public:
        Array(int value)
        {
            cout<<"Inside Constructor\n";
            this->iSize = value;
            this->Arr = new int[iSize];
        }

        Array(Array &ref)
        {
            cout<<"Inside copy constructor\n";
            this->iSize = ref.iSize;
            this->Arr = new int[this->iSize];

            for(int i=0; i<iSize; i++)
            {
                this->Arr[i] = ref.Arr[i];
            }
        }

        ~Array()
        {
            cout<<"Inside Destructor\n";
            delete []Arr;
        }

        inline void Accept();
        inline void Display();
};

///////////////////////////////////////////////////////////////////////////////

void Array :: Accept()
{
    cout<<"Please enter the values\n";
    for(int i=0; i<this->iSize; i++)
    {
        cin>>Arr[i];
    }
}

/////////////////////////////////////////////////////////////////////////////

void Array :: Display()
{
    cout<<"Elements are:\n";
    for(int i=0; i<this->iSize; i++)
    {
        cout<<Arr[i]<<" ";
    }
    cout<<"\n";
}

// ***********************************************************************************************

class ArrSearch : public Array
{
    public: 
        ArrSearch(int no) : Array(no)
        {

        }
        int Frequency(int);
        int SearchFirst(int);
        int SearchLast(int);
        int EvenCount();
        int OddCount();
        int SumAll();
};

///////////////////////////////////////////////////////////////////////////////////////////////

int ArrSearch :: SearchFirst(int value)
{
    int i=0;
    for(i=0; i<iSize; i++)
    {
        if(Arr[i] == value)
        {
            break;
        }
    }

    if(i == iSize)
    {
        return -1;
    }
    else
    {
        return i + 1;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////

int ArrSearch :: Frequency(int value)
{
    int iCnt = 0;

    for(int i=0; i<iSize; i++)
    {
        if(Arr[i] == value)
        {
            iCnt++;
        }
    }
    return iCnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////

int ArrSearch :: SearchLast(int value)
{
    int iCnt = 0;

    for(iCnt=iSize; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == value)
        {
            break;
        }
    }

    if( iCnt < 0)
    {
        return -1;
    }
    {
        return iCnt+1;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////

int ArrSearch :: EvenCount()
{
    int iEvenCnt = 0;
    int iCnt = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt; 
}

///////////////////////////////////////////////////////////////////////////////////////////////

// int ArrSearch :: OddCount()
// {
//     int iOddCnt = 0;
//     int iCnt = 0;

//     for(iCnt=0; iCnt<iSize; iCnt++)
//     {
//         if((Arr[iCnt] % 2) != 0)
//         {
//             iOddCnt++;
//         }
//     }
//     return iOddCnt; 
// }

int ArrSearch :: OddCount()
{
    int iOddCnt = 0;

    iOddCnt = iSize - EvenCount();
    return iOddCnt; 
}

///////////////////////////////////////////////////////////////////////////////////////////////

int ArrSearch :: SumAll()
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    } 
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    cout<<"Inside main\n";
    int iNo = 0;
    int iValue = 0;
    int iFirst = 0;
    int iLast = 0;

    cout<<"Enterd the number of elements u want:\n";
    cin>>iNo;

    ArrSearch sobj1(iNo);
    sobj1.Accept();
    sobj1.Display();

    cout<<"Enter the number u want to frequency of that number:\n";
    cin>> iValue;

    int iRet = sobj1.Frequency(iValue);
    cout<<"Frequency is :"<<iRet<<"\n";

    cout<<"Enter the number that u have to first occurence:\n";
    cin>>iFirst;

    iRet = sobj1.SearchFirst(iFirst);
    cout<<"First occurence is:"<<iRet<<"\n";

    cout<<"Enter the number that u have to last occurence:\n";
    cin>>iLast;

    iRet = sobj1.SearchLast(iLast);
    cout<<"Last occurence is:"<<iRet<<"\n";

    iRet = sobj1.EvenCount();
    cout<<"Even numbers in array are:"<<iRet<<"\n";

    iRet = sobj1.OddCount();
    cout<<"Odd numbers in array are:"<<iRet<<"\n";

    iRet = sobj1.SumAll();
    cout<<"Summation of all elements is:"<<iRet<<"\n";

    return 0;
}