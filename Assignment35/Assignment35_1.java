import java.util.Scanner;

/*
 Write a java program which accept two string from user and 
 concact N characters of second string after first string.
 value of N should be accepted from user.

 Note : If third parameter is greater than the size of second string 
 then concact whole string after first string.

 Input  :   "Marvellous Infosystems"
            "Logic Buliding"
            5
 Output :   "Marvellous Infosystems Logic"

 */

 class StringX
 {
    public char Arr[];
    public char Brr[];

    public void StrnCatX(String start, String end, int iNo)
    {
        int len = end.length();

        for(int i=0; i<len; i++)
        {
            if(i < iNo)
            {
                start = start +   end.charAt(i);
            }
            else
            {
                start = start + end;
            }
            
        }
        System.out.println("String after contactenation: " +start);

    }
 }

 class Assignment35_1
 {
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter first string:");
        String s1 = sobj.nextLine();

        System.out.println("Enter second string:");
        String s2 = sobj.nextLine();

        System.out.println("Enter number of charcters u want to concat:");
        int iValue1 =sobj.nextInt();

        StringX srtobj =new StringX();

        srtobj.StrnCatX(s1, s2, iValue1);

    }
 }