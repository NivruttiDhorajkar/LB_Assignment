import java.util.Scanner;

/*
 Write a java program which accept string from user and 
check wheather contains vowels in it or not. 

 Input : MarvellouS
 Output : true

 Input : xyz
 Output : false

 Input : Demo
 Output : true

 */

 class StringDemo
 {
    public boolean CheckVowel(String str)
    {
        char Arr[] = str.toCharArray();
        int iCnt = 0;
        boolean bFlag = false;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt] == 'a') || (Arr[iCnt] == 'e') || (Arr[iCnt] == 'i') || (Arr[iCnt] == 'o') || (Arr[iCnt] == 'u')
            || (Arr[iCnt] == 'A') || (Arr[iCnt] == 'E') || (Arr[iCnt] == 'I') || (Arr[iCnt] == 'O') ||(Arr[iCnt] == 'U'))
            {
                bFlag = true;
                break;
            }
        }
        return bFlag;
    }
 }

class Assignment31_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String:");
        String str = sobj.nextLine();

        StringDemo obj = new StringDemo();

        boolean bRet = obj.CheckVowel(str);

        if(bRet == true)
        {
            System.out.println("String contains VOWEL");
        }
        else
        {
            System.out.println("String not contains VOWEL");
        }

        sobj.close();

    }
}
