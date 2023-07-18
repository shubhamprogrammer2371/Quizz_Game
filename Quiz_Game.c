#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, ans, marks = 0;

    printf("****************** Welcome to the Quiz Game *******************\n\n");
    printf("Rules of the Quiz Game :- \n");
    printf("You will get 5 marks for correct answer and -1 marks will be deducted if the answer is not correct\n\n");
    while (1)
    {
        printf("> Press 1 to Start the Game \n");
        printf("> Press 0 to Quit the Game \n");

        scanf("%d", &i);
        if (i == 1)
        {
            printf("\nThe Game has Started!!!!!!!!\n");
            printf("A) Which one is the first Search Engine in internet?\n1) Google\n2) Archie\n3) Wais\n4) Altavista\n");

            printf("Enter your Answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                marks += 5;
                printf("---Correct answer\n");
            }
            else
            {
                marks -= 1;
                printf("---Wrong answer \n");
                printf("The correct answer is option \"2\"\n");
            }
            //************************************************************************************
            printf("B) Which one is the first Web Browser invented in 1990?\n1) Internet Explorer\n2) Mosaic\n3) Mozilla\n4) Nexus\n");

            printf("Enter your Answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                marks += 5;
                printf("---Correct answer\n");
            }
            else
            {
                marks -= 1;
                printf("---Wrong answer \n");
                printf("The correct answer is option \"4\"\n");
            }
            //************************************************************************************
            printf("C) First Computer Virus is known as?\n1) Rabbit\n2) Creper Virus\n3) Elk Cloner\n4) SCA Virus\n");

            printf("Enter your Answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                marks += 5;
                printf("---Correct answer\n");
            }
            else
            {
                marks -= 1;
                printf("---Wrong answer \n");
                printf("The correct answer is option \"2\"\n");
            }
            //************************************************************************************
            printf("D) Firewall in computer is used for?\n1) Security\n2) Data Transmission\n3) Monitoring\n4) Authentication\n");

            printf("Enter your Answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                marks += 5;
                printf("---Correct answer\n");
            }
            else
            {
                marks -= 1;
                printf("---Wrong answer \n");
                printf("The correct answer is option \"1\"\n");
            }
            //************************************************************************************
            printf("E) Which of the following is not a Database Management software?\n1) MySQl\n2) Oracle\n3) Cobal\n4) Sybase\n");

            printf("Enter your Answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                marks += 5;
                printf("---Correct answer\n");
            }
            else
            {
                marks -= 1;
                printf("---Wrong answer \n");
                printf("The correct answer is option \"1\"\n");
            }
            printf("You have scored %d marks in this amazing quizz :)\n", marks);
        }
        else if (i == 0)
        {
            printf("The Game has Ended!!!!!!!!\n");
            exit(0);
        }
        else
        {
            printf("Invalid Choice!! Please enter 1 or 0 \n");
        }
    }

    return 0;
}