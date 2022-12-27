
import java.util.Scanner;

/*
 Write a java program which accept number feom user and 
 return difference between summation of even digitd and 
 summation of odd digits.

 Input : 2395
 Output : -15   (2-17)

 Input : 1018
 Output : 6 (6-0)

 Input : 8440
 Output : 16    (16-0)

 Input : 5733
 Output : -18   (0-18)

 */

class DigitX
{
    public int DiffSumEvenOddDigit(int iNo)
    {
        int iDigit = 0;
        int iEvenSum = 0;
        int iOddSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEvenSum = iEvenSum + iDigit;
            }
            else
            {
                iOddSum = iOddSum + iDigit;
            }
            iNo = iNo / 10;
        }
        return iEvenSum - iOddSum;
    }    
}

 class Assignment33_5
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        DigitX dobj =  new DigitX();

        int iRet = dobj.DiffSumEvenOddDigit(iValue);

        System.out.println("Diffrence between summation of even & odd digits in that number is : "+iRet);
    }
 }

