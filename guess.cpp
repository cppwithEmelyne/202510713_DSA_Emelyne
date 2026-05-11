#include <iostream>
using namespace std;

int main() {

    // chosen number
    int chosenNumber = 7;

    // user input
    int guess = 0;

    // array to store guesses
    int guesses[100];
    int i = 0;

    // start loop
    while (guess != chosenNumber) {

        cout << "Enter your guess: ";
        cin >> guess;

        // store guess 
        guesses[i] = guess;
        i++;

        // compare values
        if (guess > chosenNumber) {
            cout << "Too high" << endl;
        }
        else if (guess < chosenNumber) {
            cout << "Too low" << endl;
        }
        else {
            cout << "Correct!" << endl;
        }
    }

    // display all guesses
    cout << "All guesses:";
    for (int j = 0; j < i; j++) {
        cout << guesses[j] << endl;
    }

    return 0;
}
