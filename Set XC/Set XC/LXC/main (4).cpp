//Keegan Bean Section D
//Collaborator: Aidan Funk
#include <iostream>

using namespace std;

int main() {

    int iNum = 9;
    double dNum = 12.25;
    int* iPtr1;
    int* iPtr2;
    double* dPtr;
    iPtr1 = &iNum;
    cout << "iNum's memory address is: " << &iNum << endl;
    cout << "The content of iPtr1 is: " << iPtr1 << endl;
    cout << "The content that iPtr1 points to is: " << *iPtr1 << endl;

    //iPtr1 = &dNum;
    //error: cannot convert 'double*' to 'int*' in assignment

    dPtr = &dNum;
    cout << "\nThe content of dPtr is: " << dPtr << endl;
    cout << "The content the dPtr points to is: " << *dPtr << endl;

    iNum = 7;
    cout << "\nThe content that iPtr1 points to is: " << *iPtr1 << endl;

    iPtr2 = iPtr1;
    cout << "\nThe content of iPtr2 is: " << iPtr2 << endl;
    cout << "The content that iPtr2 points to is: " << *iPtr2 << endl;

    *iPtr1 = 12;
    cout << "\nThe content that iPtr1 points to is: " << *iPtr1 << endl;
    cout << "The content that iPtr2 points to is: " << *iPtr2 << endl;
    cout << "The content of iNum is: " << iNum << endl;

    int* iPtr3;
    int num;
    cout << "\nEnter number of values: " << endl;
    cin >> num;

    iPtr3 = new int[num];
    for (int i = 0; i < num; i++) {
        cout << "Enter value: " << endl;
        cin >> iPtr3[i];
    }

    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum = sum + iPtr3[i];
    }
    cout << "Sum of all values: " << sum << endl;

    delete[] iPtr3;

    return 0;
}
