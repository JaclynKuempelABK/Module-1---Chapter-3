#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int getPlayerInput();
void printFactors(int num);

int main()
{
    int chosenNum = getPlayerInput();
    printFactors(chosenNum);
}

int getPlayerInput()
{
    int playerInput;

    // loop until player chooses a valid positive nonzero integer number:
    do {
        cout << "Enter a number you would like to know the factors of: ";
        cin >> playerInput;

        if (cin.fail()) // not an integer number
        {
            cin.clear();
            cin.ignore(1000, '\n');

            cout << "That is not a valid input! Please enter a positive nonzero integer number." << endl;

            continue;
        }
        else if (playerInput < 1) { // not a positive nonzero number
            cout << "That is not a valid input! Please enter a positive nonzero integer number." << endl;

            continue;
        }
        else { // got a valid number, resume
            break;
        }
    } while (true);

    return playerInput;
}

void printFactors(int num)
{
    cout << "The factors of " << num << " are: ";

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
    }
}