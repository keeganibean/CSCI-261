/* CSCI 261: Fix Loop Errors
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 *    This program illustrates a variety of common loop errors.
 *    Fix the errors in each section.

Copyright 2017 Dr. Jeffrey Paone

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

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to Loop World" << endl;

// SECTION I: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = I changed (i < 5) in the for function into (i <= 5)
// TESTS: After I ran this, I realized that it output 10 instead of 15, so it must not be adding on an additional 5
// in the for loop, so it needs to loop once more when it reaches 5, not before then.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section I" << endl;
    cout << "******************" << endl;

    short sum;  // Accumulates the total
    short i;    // Used as loop control variable
    for (i = 1; i <= 5; ++i) {
        sum += i;
    }
    cout << "The sum of the numbers from 1 to 5 (inclusive) is: " << sum << endl;

// SECTION II: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = I removed total = 0 and assigned 0 to total when I initialize the variable.
// TESTS: I noticed that total price was equal to the last price input, so I checked the
// while loop to see if it was being reset at the beginning of each loop, and I saw that total was
// assigned the value of zero every time the loop ran.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section II" << endl;
    cout << "******************" << endl;

    double total = 0.0;     // Accumulates total
    double price;    // Gets next price from user
    short num_items;     // Number of items
    short counter = 1;  // Loop control counter

    cout << "How many items do you have? ";
    cin >> num_items;
    cout << endl;

    while (counter <= num_items) {
        cout << "Enter the price of item " << counter << ": ";
        cin >> price;
        cout << endl;
        total += price;
        counter++;
    }
    cout << "The total price is: " << total << endl;

// SECTION III: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = Added counter += 1 at the end of the do while loop, and changed sum to 4 in the conditions
// for the do while loop.
// TESTS: Since it was infinitely repeated, there had to be something wrong with the condition for the
// loop. I checked the conditions and realized counter wasn't changing during the loop, and sum would always outgrow counter

    cout << endl;
    cout << "******************" << endl;
    cout << "Section III" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of numbers from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    do {
        sum += counter;
        cout << "Sum so far: " << sum << endl;
        counter += 1;
    } while (counter <= 4);

    cout << endl << "Section III Recap" << endl;

    cout << "I calculated the sum of numbers from 1 to 4 (inclusive) as " << sum << endl;


// SECTION IV: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = I changed i++ to i-- in the for loop
// TESTS: Since the code was giving a large negative number, I assumed there was something wrong with the for loop.
// I noticed that the loop was supposed to be counting down from 4 to 1, but it was incrementing i by 1 each time.

    cout << endl;
    cout << "******************" << endl;
    cout << "Section IV" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of squares from 1 to 4 (inclusive)" << endl;

    sum = 0;
    for (i=4; i>0; i--) {
        sum += i*i;
    }

    cout << "The sum of squares from 1 to 4 is: " << sum << endl;

// SECTION V: update comment below on how you fixed this section's code, and tests run
// that show loop is working properly
// FIX = I added ++counter to the while loop and changed (counter < 10) to (counter < 5)
// TESTS: Since the sum of cubes wasn't being output, the loop must be infinitely looping.
// Since counter wasn't being changed, it could never be greater than ten

    cout << endl;
    cout << "******************" << endl;
    cout << "Section V" << endl;
    cout << "******************" << endl;

    cout << "I will now calculate ";
    cout << "the sum of cubes from 1 to 4 (inclusive)" << endl;

    sum = 0;
    counter = 1;

    while (counter < 5) {
        sum += (counter * counter * counter);
        ++counter;
    }

    cout << "The sum of cubes from 1 to 4 is: " << sum << endl;

    cout << endl;
    cout << "******************" << endl;
    cout << "Section Done" << endl;
    cout << "******************" << endl;

    cout << endl << "Congrats!  You fixed them all (hopefully correctly!)" << endl << endl << "Goodbye" << endl << endl;

    return 0;
}
 

 

