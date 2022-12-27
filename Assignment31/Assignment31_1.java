import java.util.Scanner;

/*
 Write a java program which accept string from user and 
 calculate its capital characters

 Input : HeLLo
 Output : 3

 Input : Kishor Dhorajkar
 Output : 2

 */

 class StringDemo
 {
    public int CountCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCnt1 =0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCnt1++;
            }
        }
        return iCnt1;
    }
 }

class Assignment31_1
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountCapital(str);

        System.out.println("Number of captal letters in string are : "+iRet);

        sobj.close();

    }
}