/* CSCI 261 Lab 6B - Vector of Words
 *
 * Author: Keegan Bean
 * Collaborator: Aidan Funk
 *
 * Using vectors to seperate a string and find size, and the first and last words.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <vector>

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

// Must have a function named "main", which is the starting point of a C++ program.

    /******** INSERT YOUR CODE BELOW HERE ********/
    vector<string> split(const string& words)
    {
        //size_type holds numbers and strings
        vector<string> separate;
        typedef string::size_type stringLength;
        stringLength a = 0;
        while (a!=words.size()) //iterate through the entire vector
        {
            while (a!=words.size() && isspace(words[a])) //ignore leading spaces and spaces in the string
                ++a; //add to vector a
            stringLength b = a;
            while (b!=words.size() && !isspace(words[b])) //finds the end of words and adds length if there are not spaces
                b++;
            if (a!=b) { //if not spaces
                separate.push_back(words.substr(a, b-a)); //take the characters from the string
                a = b;
            }
        }
        return separate;
    }

    int main() {
        cout << "Hey! Witness my first vector mojo!" << endl;
        cout << "Enter a sentence:" << endl;
        string words;
        while (getline(cin, words)) { //seperate the words in the string
            vector<string> list = split(words);
            cout << endl; //new line
            cout << "So awesome! You entered " << list.size() << " words. They are:" << endl;
            for (vector<string>::size_type c = 0; c != list.size(); ++c) //write the words in the vector words
                //aesthetics and extra functions
                cout << c+1 << ": " << list[c] << endl;
                cout << "The first word is: " << list[0] << endl;
                cout << "The last word is: " << list[list.size()-1] << endl;
                cout << "Gaze at my awesome." << endl;

        }


    /******** INSERT YOUR CODE ABOVE HERE ********/

    return 0; // signals the operating system that our program ended OK.
}