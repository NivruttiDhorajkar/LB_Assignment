import java.util.Scanner;

/*
 Write a java program which accept string from user and 
return difference between frequency of small charcters and frequency of capital charcters.

 Input : MarvellouS
 Output : 6     (8-2)

 Input : Kishor Dhorajkar
 Output : 11       (13-2)

 */

 class StringDemo
 {
    public int DiffSmallAndCapital(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCnt1 = 0;
        int iCnt2 = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCnt1++;
            }
            else
            {
                if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
                {
                    iCnt2++;
                }
            }
        }
        return iCnt1-iCnt2;
    }
 }

class Assignment31_3
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.DiffSmallAndCapital(str);

        System.out.println("Difference between small and capiatal letters are : "+iRet);

        sobj.close();

    }
}
