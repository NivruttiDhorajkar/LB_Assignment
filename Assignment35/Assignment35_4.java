import java.util.Scanner;

/*
Accept string from user and reverse the contents of that string 
by toggaling the case.

Input : "aCBdef"
Output : FEDbcA

*/

class StringX
{
    public void StrRevX(String str)
    {
        char ch[] = str.toCharArray();

        String Rev = "";

        int iCnt = 0;

        for(int i=ch.length-1; i>=0; i--)
        {
            Rev = Rev + ch[i];
        }
        System.out.println(Rev);

        char Arr[] = Rev.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= "A" && Arr[iCnt] <= "Z")
            {
                Rev[iCnt] = Rev[iCnt] + 32;
            }
        }
        
    }

}

class Assignment35_4
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string:");
        String str = sobj.nextLine();

        StringX strobj = new StringX();

        strobj.StrRevX(str);
    }
}