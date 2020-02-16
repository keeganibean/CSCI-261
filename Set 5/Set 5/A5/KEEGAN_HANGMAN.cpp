//
// Created by Keegan Bean on 2019-03-04.
//
#include <iostream>
using namespace std;
#include "KEEGAN_HANGMAN.h"

bool LettersUsed (char previousGuesses[26], char choice, int& number) {
    for (int k=0; k<26; k++) {
        if (previousGuesses[k] == choice){
            //has it been guessed
            cout << "You already guessed " << choice << "." << endl;
            cout << endl;
            return 1;
        }
    }
    //increase the number
    number++;
    previousGuesses[number] = choice;
    return 0;
}

void PlayerLetters (char playerProgress[7]) {
    cout << "Take a guess: ";
    for (int k=0; k<11; k++) {
        //prints the progress
        cout << playerProgress[k] << " ";
    }
    cout << endl;
}

//is it in the word?
bool GoodGuess (char word[11], char choice, int& chances) {
    for (int k=0; k<11; k++){
        if (word[k] == choice){
            cout << "There's a " << choice << "!" << endl;
            cout << endl;
            return 1;//boolean
        }
    }
    //incorrect guess
    cout << "Sorry, no " << choice << "'s. ";
    chances--;
    cout << "You have " << chances << " wrong guess remaining." << endl;
    cout << endl;
    return 0;
}

//is the game over?
bool HangmanWon (char word[11], char guesses[7]) {
    int letters = 0;
    for (int k=0; k<11; k++){
        if (word[k] == guesses[k]){
            letters++;
        }
    }
    //checks if there are 11 correct letters
    if (letters == 11){
        return 1;
        //otherwise not done
    }else{
        return 0;
    }
}

