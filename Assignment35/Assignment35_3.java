import java.util.Scanner;

/*
 Write a java program which accept two string from user and 
 check wheather first N contents of two string are equal or not.

 Input  :   "Marvellous Infosystems"
            "Marvellous Logic Building"
            10
            
 Output :   True
 */

class StringX
{

    public boolean StrCmpX (String start, String end, int iNo)
    {
        int i = 0; 
        boolean bFlag = false;
        for(i=0; i<iNo; i++)
        {
            if(start.charAt(i) != end.charAt(i))
            {
                bFlag = true;
            }
        }
        return bFlag;
    }
}

 class Assignment35_3
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string:");
        String s1 = sobj.nextLine();

        System.out.println("Enter second string:");
        String s2 = sobj.nextLine();

        System.out.println("Enter number of charcters u want to compare:");
        int iValue = sobj.nextInt();
       
        StringX srtobj =new StringX();

        boolean bRet = srtobj.StrCmpX(s1, s2,iValue);
        if(bRet == true)
        {
            System.out.println("Contents of two strings are same");
        }
        else
        {
            System.out.println("Contents of two strings are different");
        }
        

    }
 }