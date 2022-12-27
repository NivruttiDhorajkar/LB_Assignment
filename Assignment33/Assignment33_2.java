
import java.util.Scanner;

/*
 Write a java program which accept number feom user and 
 return the count of odd digits.

 Input : 2395
 Output : 3

 Input : 1018
 Output : 2

 Input : -1018
 Output : 2

 Input : 8462
 Output : 0

 */

class DigitX
{
    public int OddDigit(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 != 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }    
}

 class Assignment33_2
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        DigitX dobj =  new DigitX();

        int iRet = dobj.OddDigit(iValue);

        System.out.println("Odd digits in that number is : "+iRet);
    }
 }
