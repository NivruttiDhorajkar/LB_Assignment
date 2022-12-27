
import java.util.Scanner;

/*
 Write a java program which accept number feom user and 
 return multiplication of all digits.

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
    public int Multiplication(int iNo)
    {
        int iDigit = 0;
        int iMult = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        return iMult;
    }    
}

 class Assignment33_4
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number:");
        int iValue = sobj.nextInt();

        DigitX dobj =  new DigitX();

        int iRet = dobj.Multiplication(iValue);

        System.out.println("Multiplication of digit in that number is : "+iRet);
    }
 }
