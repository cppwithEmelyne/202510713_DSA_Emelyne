#include <iostream>
using namespace std;

int main() {
    // chosen number
    int chosenNumber = 7;

    // variable for user input
    int guess;

    // array to store all guesses
    int guesses[100];
    int i = 0; // index for array

    // ask first input
    cout << "Guess the number: ";
    cin >> guess;

    // loop until correct guess
    while (guess != chosenNumber) {

        // store guess in array
        guesses[i] = guess;
        i++;

        // check guess
        if (guess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else {
            cout << "Too low" << endl;
        }

        // ask again
        cout << "Try again: ";
        cin >> guess;
    }

    // store the correct guess also
    guesses[i] = guess;
    i++;

    cout << "Correct!" << endl;

    // display all guesses
    cout << "\nAll your guesses were:\n";
    for (int j = 0; j < i; j++) {
        cout << guesses[j] << endl;
    }

    return 0;
}
