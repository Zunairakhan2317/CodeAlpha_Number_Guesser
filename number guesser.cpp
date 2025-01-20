#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    int guessednum = rand() % 100 + 1; // Random number between 1 and 100
    int playernum = 0;
    int guessCount = 0;

    cout << "Let the Game Begin!" << endl;
    cout << "Can you guess the random number I have selected (Hint:it will be in b/w 1-100)?" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> playernum;
        guessCount++;

        if (playernum < guessednum) {
            cout << "Your guessed number is below the actual number " << endl;
        } else if (playernum > guessednum) {
            cout << "Your guessed number is high from the actual number" << endl;}
			 else  {
            cout << "Fantabulous! YOU have guessed the right number " << guessCount << " tries." << endl;
            break;
        }
    }while(true);

    return 0;
}

