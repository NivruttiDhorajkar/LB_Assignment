import java.util.Scanner;
/*
 * 
 Write a java program which acept array of charcters from user
 and retuen differnce between frequency of capital and frequency
 of small charcters.
 
 Input : b  N   e   B   R   b   A   I   O   G   i
 Output : 3     (7-4)
 */
class ArrayX
{
    public char ch[];
    public void Accept(String str)
    {
        ch = new char[str.length()];
        int iCnt = 0;

        for(iCnt=0; iCnt<str.length(); iCnt++)
        {
            ch[iCnt] = str.charAt(iCnt);
        }

        // System.out.println("Elements of array are:");

        // for(iCnt=0; iCnt<str.length(); iCnt++)
        // {
        //     System.out.print(ch[iCnt]+"\t");
        // }
        // System.out.println();
    }

    public int DifferenceCapSamll()
    {
        int iCnt=0;
        int iCap = 0;
        int iSmall = 0;

        for(iCnt=0; iCnt<ch.length; iCnt++)
        {
            if(ch[iCnt]>= 'A' && ch[iCnt] <= 'Z')
            {
                iCap++;
            }
            else
            {
                iSmall++;
            }
        }
        return iCap - iSmall;
    }

}

class Assignment44_4
{
    public static void main(String a[])
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter the charcters:");
        String sr = sobj.nextLine();

        ArrayX aobj = new ArrayX();
        aobj.Accept(sr);
        int iRet = aobj.DifferenceCapSamll();
        System.out.println("Differnce between captal and samml letters is: "+iRet);
    }   
}