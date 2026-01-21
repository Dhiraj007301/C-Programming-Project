//Number Guessing Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int random, guess;
    int no_of_guess = 0;

    srand(time(NULL));

    printf("Wellcome To The World Of Guessing Number\n");

    random = rand() % 100 + 1; // Generating Between 0 to 100

    do{
        printf("\nPlease Enter Your Guess Between(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess < random)
        {
            printf("Guess A Larger Number.\n");
        }else if(guess > random)
        {
            printf("Guess A Smaller Number.\n");
        }else{
            printf("Congratulaton !!! You Have Successfully Guessed The Number In %d attempts",no_of_guess);
        }
    }while(guess != random);
    
    printf("\n Bye Bye, Thanks For Playing.");
}
