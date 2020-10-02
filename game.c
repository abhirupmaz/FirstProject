#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    char choice='y';
    int best=1000000;
    do 
    {   
        int num, guess, c=1;
        srand(time(0));
        num=rand()%100+1;
        printf("*****************************************************************************\n");
        printf("                  Enter your guess number from 1 to 100:\n");
        printf("*****************************************************************************\n");
         do
        {
            scanf("%d",&guess);
            if(num==guess)
            {
                printf("Congratulations! YOU HAVE GUESSED IT CORRECT. \n YOU TOOK %d GUESSES\n \n",c);
                if(c<best)
                best=c;
            break;
            }
            if(abs(num-guess)<=2)
            printf("You are VERY CLOSE! ");
            else if(abs(num-guess)<=10)
            printf("You are CLOSE! ");
            if(num>guess)
            printf("Higher number please!\n");
            else
            printf("Lower number please!\n");
            c++;
           
        } while (num!=guess);
    printf("\n\n YOUR BEST SCORE= %d GUESSES\n",best);
    printf("Do you wish to play again? (Y/N)");
    scanf("%s",&choice);
    }while (choice=='y'||choice=='Y');
}