
import java.util.Scanner;

/*
 Write a java program which accept number feom user and 
 return the count of digits in between 3 and 7.

 Input : 2395
 Output : 1

 Input : 1018
 Output : 0

 Input : 4521
 Output : 2

 Input : 8462
 Output : 0

 */

class DigitX
{
    public int CountDigit(int iNo)
    {
        int iDigit = 0;
        int iCnt = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if((iDigit > 3) && (iDigit < 7))
            {
                iCnt++;
            }
            iNo = iNo / 10;
        }
        return iCnt;
    }    
}

 class Assignment33_3
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        DigitX dobj =  new DigitX();

        int iRet = dobj.CountDigit(iValue);

        System.out.println("Count digits in between 3 & 7 in that number is : "+iRet);
    }
 }
