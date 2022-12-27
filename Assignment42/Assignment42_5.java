import java.util.Scanner;
/*
Write a java program which accept array from user and 
check whether that array and its elements are palindrome or not.

Input : N: 5
        11  252 387783  252 11
Output : True

Input : N:5
        11  252 387783  77  11
Output : False

Input : N:5
        11  252 786  252  11
Output : False

*/

class ArrayX
{
    public int Arr[];

    public void Accept(int iNo1)
    {
        Arr = new int[iNo1];

        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the " +iNo1 +" elements of array:");
        for(iCnt=0; iCnt<iNo1; iCnt++)
        {
            System.out.println("Enter the "+(iCnt+1) +" Element");
            Arr[iCnt] = sobj.nextInt();
        }

    }

    // public void Display()
    // {
    //     System.out.println("Elements of first array are:");

    //     int iCnt = 0;
    //     for(iCnt=0; iCnt<Arr.length; iCnt++)
    //     {
    //         System.out.print(Arr[iCnt]+ "\t");
    //     }
    //     System.out.println();

    //     System.out.println("Elements of second array are:");
    //     for(iCnt=0; iCnt<Brr.length; iCnt++)
    //     {
    //         System.out.print(Brr[iCnt]+ "\t");
    //     }
    //     System.out.println();
    // }
        public boolean ElementPalindrome(int i)
        {
           int iDigit = 0;
           int iNo =  i;
           int itemp = 0;
           int iRev = 0;
           itemp = iNo;
           boolean bFlag = false;

           while(iNo !=0 )
           {
                iDigit = iNo % 10;
                iRev = (iRev * 10) + iDigit;
                iNo = iNo / 10;
           }
           if(iRev == itemp)
           {
                bFlag = true;
           }
           return bFlag;
        }

        public boolean ArrayPalindrome()
        {
            int iCnt = 0;
            boolean ans = false;
            boolean Flag = false;
            for(iCnt=0; iCnt<Arr.length; iCnt++)
            {
                ans = ElementPalindrome(Arr[iCnt]);
                if(ans == false)
                {
                    break;
                }
                else
                {
                    Flag = true;
                }
            }
            return Flag;
        }
    
}

class Assignment42_5
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the size of first array:");
        int iValue1 = sobj.nextInt();

        ArrayX aobj = new ArrayX();

        aobj.Accept(iValue1);
        //aobj.Display();

        boolean bRet = aobj.ArrayPalindrome();
        if(bRet == true)
        {
            System.out.println("Array is palindrome");
        }
        else
        {
            System.out.println("Array is not palindrome");
        }
        
    }
}