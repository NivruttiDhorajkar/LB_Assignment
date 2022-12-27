import java.util.Scanner;

/*
Write a java program which accept array of charcters fron user and
count number of capital charcaters. 

Input : b   N   j   B   R   b   A   d   G   G
Output : 6

*/

class ArrayX
{
    public int Accept(String str)
    {
       char Arr[] = str.toCharArray();
       int iCnt = 0;
       int iCount = 0;;
       
       for(iCnt=0; iCnt<Arr.length; iCnt++)
       {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
       }
       return iCount;
    }


}

class Assignment43_4
{
    public static void main(String a[])
    {
        Scanner sobj =  new Scanner(System.in);
        
        System.out.println("Enter the string:");
        String ch = sobj.nextLine();

        ArrayX aobj = new ArrayX();

        int iRet = aobj.Accept(ch);
        System.out.println("Number of capital charcters is : "+iRet);

    }
}