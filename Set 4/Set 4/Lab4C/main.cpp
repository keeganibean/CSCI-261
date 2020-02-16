/* CSCI 261: Lab 4C Fix Function Errors
 *
 * Author: Keegan Bean
 * //Collaborator: Aidan Funk
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2018 Dr. Jeffrey Paone

Permission is hereby granted, free of charge, to any person
obtaining a copy of this software and associated documentation
files (the "Software"), to deal in the Software without
restriction, including without limitation the rights to use,
copy, modify, merge, publish, distribute, sublicense, and/or
sell copies of the Software, and to permit persons to whom the
Software is furnished to do so, subject to the following
conditions:

The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.

 */

#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;



// input: integer
// output: none
// adds five to the given parameter
void addFive(int& x ) {
    x +=5;
}



// input: none
// output: a random number
int generateRandomNumber() {

    return rand() % 100;
}

// input: three integers
// output: the sum of all three parameters
int sum( int x, int y, int z ) {
    return x + y + z;
}

void printSmileyFace(){

    cout << "               *****               " << endl;
    cout << "          ***************          " << endl;
    cout << "       *********************       " << endl;
    cout << "     *******   *****   *******     " << endl;
    cout << "    ******** 0 ***** 0 ********    " << endl;
    cout << "   ************** **************   " << endl;
    cout << "   **************  **************   " << endl;
    cout << "   ***** ******* X ******** *****   " << endl;
    cout << "    ****  ***************  ****    " << endl;
    cout << "     ****     *******     ****     " << endl;
    cout << "       *****           *****       " << endl;
    cout << "          ***************          " << endl;
    cout << "               *****              " << endl;

}

// input: two doubles
// output: the product of the two doubles
double multiply( double a, double b){
    return a*b;
}

int main() {
    cout << "Welcome to Function World" << endl;

    srand(time(0));

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = Changed it to "int& x" so that it kept the old number and added five onto it.
// TESTS: Ran the code a couple of times and saw that it was no increasing by five
// then added "&" and it started to work

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    int numTrees = 4;
    cout << "There are initially " << numTrees << " trees." << endl;
    addFive( numTrees );
    cout << "We planted five trees, there are now " << numTrees << " trees." << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = Actually defined the function and fixed parameters so it worked
// TESTS: Read that the function was not defined in the compiler error

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    printSmileyFace();

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = Moved srand out of the function into the Main
// TESTS: Ran the code and saw that instead of generating 5 random numbers it generates 0 five times
//Saw that it printed one random number 5 times so I took srand out and it still didn't work
// so I moved it to int main and ran a couple more times to see that it worked.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "Five different random numbers are: " << endl;
    for( int i = 0; i < 5; i++ ) {
        cout << "\t" << generateRandomNumber() << endl;
    }


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = changed it to add x, y, and  instead of just x 3 times
// TESTS: I saw that it was just multiplying x by 3 so I took a better look at the function
// and changed it to add all three and the sum came out properly

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The sum of all three is " << sum( num1, num2, num3 ) << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = added parenthesis to the end of generateRandomNumber
// TESTS: It kept outputting one so I looked and the syntax looked incorrect so I
// added parenthesis and the function worked properly.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "Another random number is " << generateRandomNumber() << endl;

// SECTION VI: update comment below on how you fixed this section's code, and tests run
// that show function is working properly
// FIX = added the multiplication parameter to the return linme
// TESTS: Ran and saw that it was not outputting the correct numbers so I changed the function
// to multiply on a different line instead of using tricky cmath syntax

    cout << endl;
    cout << "******************" << endl;
    cout << "Section VI" << endl;
    cout << "******************" << endl;

    double doub1, doub2;
    cout << "Enter two doubles: ";
    cin >> doub1 >> doub2;
    cout << "Their product is: " << multiply( doub1, doub2 ) << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}

