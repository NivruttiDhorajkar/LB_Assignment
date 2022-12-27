
import java.util.Scanner;

/*
 Write a java program which accept number feom user and 
 return the count of even digits.

 Input : 2395
 Output : 1

 Input : 1018
 Output : 2

 Input : -1018
 Output : 2

 Input : 8462
 Output : 4

 */

class DigitX
{
    public int EvenDigit(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }
    
}

 class Assignment33_1
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        DigitX dobj =  new DigitX();

        int iRet = dobj.EvenDigit(iValue);

        System.out.println("Even digits in that number is : "+iRet);
    }
 }
