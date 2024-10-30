#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[])
{
    srand(time(0));
    int chance = 10;
    int diff = 1;
    int num = rand() % 101;
    cout << "Welcome to the Number Guessing Game!" << endl;
start:
    cout << "I'm thinking of a number between 1 and 100." << endl
         << endl;
    cout << "Please select the difficulty level:" << endl;
    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (5 chances)" << endl;
    cout << "3. Hard (3 chances)" << endl;
chooseDiff:
    cout << "Enter your chosen Difficulty: ";
    cin >> diff;
    switch (diff)
    {
    case 1:
        chance = 10;
        cout << "Great! You have selected the Easy difficulty level." << endl;
        break;
    case 2:
        chance = 5;
        cout << "Great! You have selected the Medium difficulty level." << endl;
        break;
    case 3:
        chance = 3;
        cout << "Great! You have selected the Hard difficulty level." << endl;
        break;
    default:

        cout << "Please Choose Between 1,2,3" << endl;
        goto chooseDiff;
    }
    cout << "Let's start the game!" << endl;
    for (int i = 1; i <= chance; i++)
    {
        int guess;
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == num)
        {
            cout << "Congratulations! You guessed the correct number in " << i << " attempts." << endl;
            cout << "Wanna Go Again? [y/n]:";
            char r;
            cin >> r;
            if (r == 'y')
                goto start;
            return 0;
        }
        else if (guess > num)
        {
            cout << "Incorrect! The number is less than " << guess << "." << endl;
        }
        else
        {

            cout << "Incorrect! The number is greater than " << guess << "." << endl;
        }
    }
    cout << "Oh no, You ran out of attempts. Try Again? [y/n]:";
    char r;
    cin >> r;
    if (r == 'y')
        goto start;
    return 0;
}
