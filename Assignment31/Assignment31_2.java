import java.util.Scanner;

/*
 Write a java program which accept string from user and 
 calculate its smallcharacters

 Input : HeLLo
 Output : 2

 Input : Kishor Dhorajkar
 Output : 13

 */

 class StringDemo
 {
    public int CountSmall(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        int iCnt1 =0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'a') && (Arr[iCnt] <= 'z'))
            {
                iCnt1++;
            }
        }
        return iCnt1;
    }
 }

class Assignment31_2
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        int iRet = obj.CountSmall(str);

        System.out.println("Number of small letters in string are : "+iRet);

        sobj.close();

    }
}
