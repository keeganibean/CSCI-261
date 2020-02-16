/* CSCI 261 Lab Lab 5C: Matrix Transposition
 *
 * Author: Keegan Bean
 * Collaborator: Tyler Krause
 *
 * Using an array to output a matrix and then a transposed version of that matrix
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <iomanip> //For set width

// Standard Library
using namespace std;

// Define any constants or global variables below this comment.
const int MATRIX_ROWS = 4; //set the number of rows for the matrix to 4
const int MATRIX_COLUMNS = 3; //set the columns for the matrix to 3

//setting the output for the matrix calculator
int matrixArray[MATRIX_ROWS][MATRIX_COLUMNS];
//setting the transposed array
int transposedArray[MATRIX_COLUMNS][MATRIX_ROWS];

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

  /******** INSERT YOUR CODE BELOW HERE ********/

    //start the calculator
    cout << "Welcome to the Matrix Calculator! " << endl; //welcome
    cout << endl;//new line
    cout << "Please enter a 4x3 matrix: " << endl;//dimensions
    // user value inputs
    for (int j=0; j<MATRIX_ROWS; j++){
        for (int k=0; k<MATRIX_COLUMNS; k++){
            cout << "Enter Row " << j + 1 << " Column " << k + 1 << ": ";
            cin >> matrixArray[j][k];
        }
    }
    cout << endl;
    cout << "The matrix you entered is:" << endl;

    //output the result
    for (int j=0; j<MATRIX_ROWS; j++){
        cout << "[";
        for (int k=0; k<MATRIX_COLUMNS; k++){
            cout << setw(3) << matrixArray[j][k];
        }
        cout << " ]" << endl;
    }
    cout << endl;

    //setting the transposed
    for (int j=0; j<MATRIX_COLUMNS; j++){
        for (int k=0; k<MATRIX_ROWS; k++){
            transposedArray[j][k] = matrixArray[k][j];
        }
    }

    //ouput the transposed
    cout << "The transpose of the matrix is:" << endl;
    for (int j=0; j<MATRIX_COLUMNS; j++){
        cout << "[";
        for (int k=0; k<MATRIX_ROWS; k++){
            //set proper width for formatting
            cout << setw(3) << transposedArray[j][k];
        }
        cout << " ]" << endl;
    }
    cout << endl;
    cout << "Have a nice day!"; //finish the program off
    cout << endl;

  /******** INSERT YOUR CODE ABOVE HERE ********/

  return 0; // signals the operating system that our program ended OK.
}