/* CSCI 261 Lab 2E: RPS: And The Winner Is
 *
 * Author: Keegan Bean
 *
 * Using If and Else statements to declare the winner or if it was a tie
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cstdlib> //For rand()

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

string choice;
int randomNumber;


// Must have a function named "main", which is the starting point of a C++ program.
int main() {

    /******** INSERT YOUR CODE BELOW HERE ********/

    cout << "Welcome one and all to a round of Rock, Paper, Scissors! (Enter P, R or S)" << endl;
        cout << "Player: "; //prompt player

        cin >> choice; //input their choice

        //if else for the users choice
        if (choice == "R" || choice =="r") //R or r
        {
            cout << "Player chose Rock" << endl;
        }

        else if (choice == "P" || choice == "p") //P or p
        {
            cout << "Player chose Paper" << endl;
        }
        else if (choice == "S" || choice =="s") // S or s
        {
            cout << "Player chose Scissors" << endl;
        }
        else {
            cout << "Must input P, R, or S" << endl; // catches invalid inputs
            return 0;
        }

    srand(time(0));
    randomNumber = rand() % 3; //"random number" function
        if (randomNumber == 0) // if else for computers choice
        {
        cout << "Computer chose Rock" << endl;
        }

        else if (randomNumber == 1)
        {
        cout << "Computer chose Paper" << endl;
        }

        else if (randomNumber == 2)
        {
        cout << "Computer chose Scissors" << endl;
        }
      if((choice == "R"|| choice == "r") && randomNumber == 0) { //outputting who wins based off the user input and random choice
          cout << "It was a tie!"<< endl;
      } else if ((choice == "R"|| choice == "r") && randomNumber == 2) {
          cout << "Rock beats Scissors. You win!" << endl;
      } else if ((choice == "R"|| choice == "r") && randomNumber == 1) {
          cout << "Paper beats Rock. Computer Wins!" << endl;
      } else if ((choice == "P"|| choice == "p") && randomNumber == 0) {
          cout << "Paper beats Rock. You win!" << endl;
      } else if ((choice == "P"|| choice == "p") && randomNumber == 2) {
          cout << "Scissors beats Paper. Computer wins!" << endl;
      } else if ((choice == "P"|| choice == "p") && randomNumber == 1) {
          cout << "It was a tie!" << endl;
      } else if ((choice == "S"|| choice == "s") && randomNumber == 0) {
          cout << "Rock beats Scissors. Computer wins!" << endl;
      } else if ((choice == "S"|| choice == "s") && randomNumber == 2) {
          cout << "It was a tie!" << endl;
      } else if ((choice == "S"|| choice == "s") && randomNumber == 1) {
          cout << "Scissors beats Paper. You win!" << endl;
      }


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}