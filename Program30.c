#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <time.h> 
#define MAX_TRIES 6 
#define WORDS_COUNT 5 
const char *words[WORDS_COUNT] = { 
    "apple", 
    "banana", 
    "cherry", 
    "grape", 
    "orange" 
}; 
void printHangman(int incorrectGuesses) { 
    // Print hangman ASCII art based on the number of incorrect guesses 
    // You can find ASCII art for Hangman stages online 
} 
int main() { 
    srand(time(NULL)); 
    const char *selectedWord = words[rand() % WORDS_COUNT]; 
    int wordLength = strlen(selectedWord); 
    char guessedLetters[wordLength]; 
    int incorrectGuesses = 0; 
    int correctGuesses = 0; 
 
    for (int i = 0; i < wordLength; ++i) { 
        guessedLetters[i] = '_'; 
    } 
 
    guessedLetters[wordLength] = '\0'; 
    printf("Welcome to Hangman!\n"); 
 
    while (incorrectGuesses < MAX_TRIES && correctGuesses < wordLength) { 
        printf("Word: %s\n", guessedLetters); 
        char guess; 
        printf("Enter your guess: "); 
        scanf(" %c", &guess); 
 
        int found = 0; 
 
        for (int i = 0; i < wordLength; ++i) { 
            if (selectedWord[i] == guess && guessedLetters[i] != guess) { 
                guessedLetters[i] = guess; 
                found = 1; 
                correctGuesses++; 
            } 
        } 
 
        if (!found) { 
            incorrectGuesses++; 
            printHangman(incorrectGuesses); 
        } 
    } 
 
if (correctGuesses == wordLength)
{ 
printf("Congratulations, you've guessed the word: %s!\n", selectedWord); 
} 
else 
{ 
printf("Sorry, you're out of guesses. The word was: %s.\n", selectedWord); 
} 
return 0; 
}
} 
