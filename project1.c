// number gussing game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int random,guess ;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("welcome to the number guessing game");
    random = rand() % 100 + 1;

    do {
        printf("\n please enter your guess number (0 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

        if(guess < random) {
            printf("\n number is greater than your guess number");

        }

        else if(guess > random) {
            printf("\n number is smaller than your guess number");
        }

        else {
            printf("\n !!CONGRATULATION!! \n you have sucessfully guessed the number in %d attempts", no_of_guess );
        }




    }
    while (guess != random);

    printf("\ndeveloped by Amit jangir");
    
}