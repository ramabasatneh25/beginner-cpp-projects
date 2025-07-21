#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int getComputerChoice();
void printMenu ();
void chooseWinner(int playerChoice, int computerChoice);
void displayWordChoice(int choice, const string&player);

int main () {

int playerChoice, computerChoice;
char playAgain = 'y';

srand(time(0));

while (playAgain == 'y' || playAgain == 'Y')

{
    printMenu();
    cout << "What do you choose? ";
    cin >> playerChoice;
    
    if (playerChoice < 1 || playerChoice > 3) {
    
    cout << "That wasn't a valid choice. Valid choices were 1-3.\n";
    cout << "Please try again.\n";

    }

    displayWordChoice(playerChoice, "You");
    
    computerChoice = getComputerChoice();
    displayWordChoice(computerChoice, "Computer");

    chooseWinner(playerChoice, computerChoice);

    cout << "Do you want to play again? (y/n): ";
    cin >> playAgain;
    cout << endl;

}

return 0;

}

void printMenu ()
{
    cout << "Let's play Rock, Paper, Scissors!\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

}

int getComputerChoice()
{
    return rand() % 3 + 1;

}

void displayWordChoice(int choice, const string&player)
{
    cout << player << " chose: ";
    switch (choice)
    {
        case 1: cout << "Rock"; break;
        case 2: cout << "Paper"; break;
        case 3: cout << "Scissors"; break;

    }

    cout << endl;
}

void chooseWinner(int playerChoice, int computerChoice)

{
    if (playerChoice == computerChoice)
    {
        cout << "*** It's a tie! ***\n";

    }

    else if ((playerChoice == 1 && computerChoice == 3) || 
    (playerChoice == 2 && computerChoice == 1) ||
    (playerChoice == 3 && computerChoice == 2))

    {
        cout << "*** You win! ***\n";

    }

    else 
    {
        cout << "*** Computer wins! ***\n";
    }

}