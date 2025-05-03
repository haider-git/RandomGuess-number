#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int random_number = (rand() % 100) + 1;
    int no_of_gussess =0;
    int guessed;


   // printf("Random number between 1 and 100: %d\n", random_number);

   do{
    printf("Guess the number\n");
    scanf("%d",&guessed);
    if (guessed>random_number)
    {
        printf("Lower number please\n");
    }
    else if (guessed<random_number) {
        printf("Higher  number please\n");
    }
    else{
        printf("Congrats\n");
    }
    no_of_gussess++;

    } while (guessed!=random_number);

   printf("You guessed the number %d guess\n",no_of_gussess);

   
   

    return 0;
}
