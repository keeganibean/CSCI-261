//
// Created by Keegan Bean on 2019-03-04.
//

#ifndef A5_KEEGAN_HANGMAN_H
#define A5_KEEGAN_HANGMAN_H


bool LettersUsed (char previousGuesses[26], char guess, int& number);

void PlayerLetters (char playerProgress[11]);

bool GoodGuess (char secret[11], char guess, int& lives);

bool HangmanWon (char secret[11], char guesses[7]);


#endif //A5_KEEGAN_HANGMAN_H
