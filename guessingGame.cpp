
#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;

int main () {

srand(time(0));

int randomNumber = rand() % 50 + 1;
int userGuess;

cout << "Welcome to the guessing game! I'll choose a random number between 1\n";
cout << "and 50, and you guess what it is." << endl; 
cout << "I'm thinking of a number! What is it? "; 
cin >> userGuess;

while (userGuess != randomNumber) {
    if (userGuess > randomNumber) {
        cout << "Too high. Try again: ";
         
    } else { 
        cout << "Too low. Try again: ";

    }
    cin >> userGuess;
}
    cout << "You guessed it! Thanks for playing!" << endl;
 
 return 0;

}
