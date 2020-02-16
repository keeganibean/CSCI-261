/* CSCI 261 Lab 3A: Rock Paper Scissors Part 4 An extension of Lab 2E
*
* Author: Keegan Bean
 * Collaborator: Aidan Funk
*
* A variation of RPS with more choices and outcomes user more loops and couts
*/

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib>
#include <ctime>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    bool playOn = true;
    char yesNo;
    int playerWin = 0;
    int playerLose = 0;
    int playerTie = 0;


    while (playOn == true) {
        cout << "Welcome to the Rock, Paper, Scissors, Lizard, Spock World Championships! (Enter R, P, S, L, or Z)"
             << endl;
        cout << "Player:";

        //Player choice section
        char playerChoice;
        int playerValue;

        cin >> playerChoice;

        if (playerChoice == ('R') || playerChoice == ('r')) {
            cout << "\nPlayer chooses Rock." << endl;
            playerValue = 0;
        }
        if (playerChoice == ('P') || playerChoice == ('p')) {
            cout << "\nPlayer chooses Paper." << endl;
            playerValue = 1;
        }
        if (playerChoice == ('S') || playerChoice == ('s')) {
            cout << "\nPlayer chooses Scissors." << endl;
            playerValue = 2;
        }
        if (playerChoice == ('L') || playerChoice == ('l')) {
            cout << "\nPlayer chooses Lizard." << endl;
            playerValue = 3;
        }
        if (playerChoice == ('Z') || playerChoice == ('z')) {
            cout << "\nPlayer chooses Spock." << endl;
            playerValue = 4;
        }

        //Computer choice section
        srand(time(0));
        int computerChoice = (rand() % 5);

        if (computerChoice == 0) {
            cout << "Computer chooses Rock.\n" << endl;
        }
        if (computerChoice == 1) {
            cout << "Computer chooses Paper.\n" << endl;
        }
        if (computerChoice == 2) {
            cout << "Computer chooses Scissors.\n" << endl;
        }
        if (computerChoice == 3) {
            cout << "Computer chooses Lizard.\n" << endl;
        }
        if (computerChoice == 4) {
            cout << "Computer chooses Spock.\n" << endl;
        }

        //Section for outputting winner and loser
        if (playerValue == computerChoice) {
            cout << "Tie game! No one wins :/" << endl;
            playerTie += 1;
        } else {
            if (playerValue == 0) { //Player chooses Rock and not tie
                if (computerChoice == 1) {
                    cout << "Paper covers Rock. You lose :(" << endl;
                    playerLose += 1;
                } else {
                    if (computerChoice == 2) {
                        cout << "Rock crushes Scissors. You win! :)" << endl;
                        playerWin += 1;
                    } else {
                        if (computerChoice == 3) {
                            cout << "Rock crushes Lizard. You win! :)" << endl;
                            playerWin += 1;
                        } else {
                            cout << "Spock vaporizes Rock. You lose :(" << endl;
                            playerLose += 1;
                        }
                    }
                }
            }
            if (playerValue == 1) { //Player chooses Paper and not tie
                if (computerChoice == 2) {
                    cout << "Scissors cuts Paper. You lose :(" << endl;
                    playerLose += 1;
                } else {
                    if (computerChoice == 3) {
                        cout << "Lizard eats Paper. You lose :(" << endl;
                        playerLose += 1;
                    } else {
                        if (computerChoice == 0) {
                            cout << "Paper covers Rock. You win! :)" << endl;
                            playerWin += 1;
                        } else {
                            cout << "Paper disproves Spock. You win! :)" << endl;
                            playerWin += 1;
                        }
                    }
                }
            }
            if (playerValue == 2) { //Player chooses Scissors and not tie
                if (computerChoice == 0) {
                    cout << "Rock crushes Scissors. You lose :(" << endl;
                    playerLose += 1;
                } else {
                    if (computerChoice == 1) {
                        cout << "Scissors cuts Paper. You win! :)" << endl;
                        playerWin += 1;
                    } else {
                        if (computerChoice == 3) {
                            cout << "Scissors decapitates Lizard. You win! :)" << endl;
                            playerWin += 1;
                        } else {
                            cout << "Spock smashes Scissors. You lose :(" << endl;
                            playerLose += 1;
                        }
                    }
                }
            }
            if (playerValue == 3) { //Player chooses Lizard and not tie
                if (computerChoice == 0) {
                    cout << "Rock crushes Lizard. You lose :(" << endl;
                    playerLose += 1;
                } else {
                    if (computerChoice == 1) {
                        cout << "Lizard eats Paper. You win! :)" << endl;
                        playerWin += 1;
                    } else {
                        if (computerChoice == 2) {
                            cout << "Scissors decapitates Lizard. You lose :(" << endl;
                            playerLose += 1;
                        } else {
                            cout << "Lizard poisons Spock. You win! :)" << endl;
                            playerWin += 1;
                        }
                    }
                }
            }
            if (playerValue == 4) { //Player chooses Spock and not tie
                if (computerChoice == 1) {
                    cout << "Paper disproves Spock. You lose :(" << endl;
                    playerLose += 1;
                } else {
                    if (computerChoice == 0) {
                        cout << "Spock vaporizes Rock. You win! :)" << endl;
                        playerWin += 1;
                    } else {
                        if (computerChoice == 2) {
                            cout << "Spock smashes Scissors. You win! :)" << endl;
                            playerWin += 1;
                        } else {
                            cout << "Lizard poisons Spock. You lose :(" << endl;
                            playerLose += 1;
                        }
                    }
                }
            }
        }
        cout << "Do you want to play again? (Enter Y or N):";
        cin >> yesNo;
        cout << endl;
        if (yesNo == 'Y' || yesNo == 'y') {
            playOn = true;
        } else if (yesNo == 'N' || yesNo == 'n') {
            playOn = false;
        }
    }

    cout << "Thanks for playing!" << endl;
    cout << "You won " << playerWin << " game(s), lost " << playerLose << " game(s), and tied " << playerTie
         << " game(s)." << endl;

    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.

}
