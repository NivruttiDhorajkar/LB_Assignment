import java.util.Scanner;

/*
 Write a java program which accept two string from user and 
 check wheather contents of two string are equal or not.

 Input  :   "Marvellous Infosystems"
            "Marvellous Infosystems"
            
 Output :   True
 */

 class StringX
 {

    public boolean StrCmpX (String start, String end)
    {
        boolean bFlag = false;
        if(start.equals(end))
        {
            bFlag = true;
        }
        return bFlag;
    }
 }

 class Assignment35_2
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string:");
        String s1 = sobj.nextLine();

        System.out.println("Enter second string:");
        String s2 = sobj.nextLine();

       
        StringX srtobj =new StringX();

        boolean bRet = srtobj.StrCmpX(s1, s2);
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