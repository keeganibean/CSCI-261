/* CSCI 261 A6: Word & Letter Counts
 *
 * Author: Keegan Bean
 *
 * For this assignment, you will ask the user to enter as many sentences as they wish.
 * We will then count the unique words they entered as well as the letter frequencies.
 */

// The include section adds extra definitions from the C++ standard library.
#include <iostream> // For cin, cout, etc.
#include <cctype>
#include <string> //for all the strings used
#include <vector> //for the wordCount vector, etc.
#include <ios>
#include <iomanip>
#include "KeegansFunctions.h" //include my functions
#include "WordCount.h" //include the wordCount required function
#include "amountLetters.h" //Include the letter counting function

// We will (most of the time) use the standard library namespace in our programs.
using namespace std;

// Define any constants or global variables below this comment.

//No global variables for A6

// Must have a function named "main", which is the starting point of a C++ program.
int main() {

  /******** INSERT YOUR CODE BELOW HERE ********/
    string userString = "anything";
    int indexBegin = 0; //string begin
    int indexEnd = 0; //string end
    int number = 0; //indexing through
    int  total = 0; //the total
    int letterCount = 0; //counting letters
    vector<string> words; //the whole string
    vector<string> stringLines; //sentences
    vector<WordCount> numWords; //amount of words
    WordCount newNum; //setting a new value
    WordCount wordsMost; //most words
    WordCount wordsLeast; //least words
    amountLetters letterMost; //most common letter
    amountLetters letterLeast; //least common letter
    amountLetters letterFrequency[26]; //alphabet


    cout << "Enter as many sentences as you like and enter \"I\'m done!\" when completed: " << endl; //prompts for input
    while (userString != "I'm done!") { //checks for the "I'm done!"
        getline(cin,userString);
        if (userString != "I'm done!") { // If statement for whole project
            stringLines.push_back(userString);
        }
    }

    for (int a=0; a < stringLines.size(); a++) {
        for (int b = 0; b < ((stringLines.at(a)).size()); b++) {
            if (ispunct((stringLines.at(a)).at(b))) { //goes through sentences
                (stringLines.at(a)).erase(b, 1); //uses erase to remove punctuation
                //does this so it can iterate through and output the counts
            }
        }
    }

    for (int c=0; c < stringLines.size(); c++) {
        for (int d = 0; d < ((stringLines.at(c)).size()); d++) {
            (stringLines.at(c)).at(d) = toupper((stringLines.at(c)).at(d)); //changes to uppercase letters
            //does so for the output
        }
    }

    for (int e=0; e < stringLines.size(); e++) {
        indexBegin = 0;
        for (int f = 0; f < ((stringLines.at(e)).size()); f++) {  //changes to a vector
            if (isspace(stringLines.at(e).at(f))) {
                indexEnd = f;
                words.push_back(stringLines.at(e).substr(indexBegin, indexEnd - indexBegin)); //make substrings
                indexBegin = f + 1;
                total = f;
            }
        }
        total++;
        words.push_back(stringLines.at(e).substr(total, stringLines.at(e).size() - total));
    }

    for (int g=0; g < words.size(); g++) {
        if(CountedWords(words.at(g), numWords, number)) { //finds the same words
            numWords.at(number).count++; //counts the number of occurrences
        }
        else {
            numWords.push_back(WordCount{1, words.at(g)});
        }
    }

    for (int h=0; h < numWords.size() - 1; h++) { //sorting
        number = h;
        for (int i = h + 1; i < numWords.size(); i++) {
            if (numWords.at(i).word < numWords.at(number).word) { //finds the letters in order
                number = i;
            }
        }
        newNum = numWords.at(h);
        numWords.at(h) = numWords.at(number);
        numWords.at(number) = newNum;
    }

    wordsMost = numWords.at(0); //most frequent words
    wordsLeast = numWords.at(0); //least frequent words
    for (int k=1; k < numWords.size(); k++) {
        if (wordsMost.count < numWords.at(k).count) { //if statement for most
            wordsMost = numWords.at(k);
        }
        if (wordsLeast.count > numWords.at(k).count) { //if statement for least
            wordsLeast = numWords.at(k);
        }
    }

    for (int l=0; l < 26; l++) {
        letterFrequency[l].letter = ('A' + l); //for letter in the alphabet
    }
    for (int m=0; m < words.size(); m++) { //counts the letter frequency
        for (int n = 0; n < words.at(m).size(); n++) {
            for (int k = 0; k < 26; k++) {
                if (letterFrequency[k].letter == (words.at(m)).at(n)) { //if statement for frequency
                    letterFrequency[k].count++;
                }
            }
        }
    }

    // all outputs and for loops for outputs below this
    // word counts, frequency, letter counts, percentage, and frequency

    cout << endl << "Word Counts" << endl << "-----------" << endl; //outputs word counts
    for (int j=0; j < numWords.size(); j++) { //for loop to output word counts
        cout << "#" << setw(2) << setfill(' ') << right << j + 1 << " ";
        cout << setw(7) << setfill(' ') << left << numWords.at(j).word << setw(2) << setfill(' ') << right << numWords.at(j).count << endl;
    }

    cout << endl << "Most Frequent:  " << setw(7) << left << wordsMost.word << " " << "(" << setw(2) << right << wordsMost.count << ")" << endl; //outputs most frequent
    cout << "Least Frequent: "  << setw(7) << left << wordsLeast.word << " " << "(" << setw(2) << right << wordsLeast.count << ")" << endl; //outputs least frequent

    cout << endl << "Letter Counts" << endl << "-------------" << endl; //aesthetics
    for (char o=0; o < 26; o++) {
        letterCount = letterCount + letterFrequency[o].count; //letter count output
    }
    for (int p=0; p < 26; p++) {
        cout << letterFrequency[p].letter << ":"; //outputs the letter and colon
        cout << setw(7) << setfill(' ') << fixed << setprecision(3) << right; //outputs the amount of times it showed up
        cout << ((letterFrequency[p].count/letterCount) * 100) << "%" << endl;
    }
    letterLeast = letterFrequency[0];
    letterMost = letterFrequency[0];
    for (int q=1; q < 26; q++) {
        if (letterMost.count < letterFrequency[q].count) { //most common letter
            letterMost = letterFrequency[q];
        }
        if (letterLeast.count > letterFrequency[q].count) { //least common letter
            letterLeast = letterFrequency[q];
        }
    }

    cout << endl << "Most Frequent:  " << setw(2) << setfill(' ') << left << letterMost.letter << "(" << setprecision(0) << letterMost.count << ")" << endl; //outputs most used letter
    cout << "Least Frequent: " << setw(2) << setfill(' ') << left << letterLeast.letter << "(" << setprecision(0) << letterLeast.count << ")" << endl; //outputs least used letter


    /******** INSERT YOUR CODE ABOVE HERE ********/

  return 0; // signals the operating system that our program ended OK.
}
