/*
Problem Statement : Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D.
Exam of division A at 7am, B at 8.30am, C at 9.20am, D at 10.30am. 

Input : C
Output : Your Exam at 9.20am

Input : d 
Output : Your Exam at 10.30am

*/

#include<stdio.h>

void DisplaySchedule(char chDiv)
{
    if(chDiv == 'a')
    {
        chDiv = 'A';
    }

    else if(chDiv == 'b')
    {
        chDiv = 'B';
    }

    else if(chDiv == 'c')
    {
        chDiv = 'C';
    }

    else if(chDiv == 'd')
    {
        chDiv = 'D';
    }

    switch (chDiv)
    {
    case 'A' : 
            printf("Your Exam at 7am.\n");
            break;

    case 'B' : 
            printf("Your Exam at 8.30am.\n");
            break;

    case 'C' : 
            printf("Your Exam at 9.20am.\n");
            break;

    case 'D' : 
            printf("Your Exam at 10.30am.\n");
            break;
    
    default:
            printf("You enterd wrong Division...\n");
            break;
    }

}

int main()
{
    char ch = '\0';

    printf("Enter your Division:\n");
    scanf("%c",&ch);

    DisplaySchedule(ch);

    return 0;
}