#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
int main() { 
    srand(time(NULL));  // Initialize random number generator 
 
    int targetNumber = rand() % 100 + 1; // Generate a random number between 1 and 100 
    int guess; 
    int attempts = 0; 
     
    printf("Welcome to the Number Guessing Game!\n"); 
    printf("I'm thinking of a number between 1 and 100.\n"); 
 
    do { 
        printf("Enter your guess: "); 
        scanf("%d", &guess); 
        attempts++; 
 
        if (guess < targetNumber) { 
            printf("Too low! Try again.\n"); 
        } else if (guess > targetNumber) { 
printf("Too high! Try again.\n"); 
} else { 
printf("Congratulations! You guessed the number in %d attempts!\n", 
attempts); 
} 
} while (guess != targetNumber); 
return 0; 
} 