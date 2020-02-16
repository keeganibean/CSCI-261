// 4-13-19
// Keegan Bean
// Collaborator: Aidan Funk

//include
#include <iostream> //input and output
#include <fstream> //for files

using namespace std;

int main() {
    //open the files
    char letter;
    ifstream cowMessage("secretMessage.txt");//open the secretMessage.txt file
    ofstream cows("decipheredMessage.txt");//open decipheredMessage.txt file

    //error messages
    if(cowMessage.fail()){
        cerr << "Error opening input file"; //if it cannot find the cowMessage
        exit(1);
    }
    if(cows.fail()){
        cerr << "Error opening output file"; //if it cannot find the cows
        exit(1);
    }

    //deciphers the message
    while(!cowMessage.eof()){
        cowMessage.get(letter);//finds the letter in the .txt file
        if(letter == '~') {
            cows << " ";//makes a space
        }else if(letter == '\n'){
            cows << endl;// if there is a newline it adds one in the deciphered
        }else{
            cows << ++letter;//"offset" by one
        }
    }

    //closes the output
    cowMessage.close();//closes the files
    cowMessage.close();

    return 0;
}