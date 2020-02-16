/* CSCI 261 Lab 3B: Multiplication Tables (_GIVE_BRIEF_DESCRIPTION_HERE_)
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 *Using numbers entered to make a multiplication table like in elementary school in C++
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip>
#include <ios>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

  /******** INSERT YOUR CODE BELOW HERE ********/
//defining variables
  int num1;
  int num2;
  int i;
  int j;
  int k;

  do { //do during this
      cin >> num1;
      //while and do loops to make the program continue
  } while ((num1 < 2) || (num1 > 10));
    do {
        cin >> num2;
    } while ((num2 < 2) || (num2 > 10));

    cout << "..";

  for (i = 1; i <= num2; ++i) {
      cout << setw(4) << setfill('.') << right << i;
  }
  cout << endl;
  for (j = 1; j <= num1; ++j) {
      cout << setw(2) << setfill('.') << j;
      for (k = 1; k <= num2; ++k) {
          cout << setw(4) << setfill('.') << right << j * k;
      }
      cout << endl;
  }
  cout << endl; //end game/multiplication table

  /******** INSERT YOUR CODE ABOVE HERE ********/

  return 0; // signals the operating system that our program ended OK.
}
