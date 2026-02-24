#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

namespace FunnyMachine {

    void intro() {
        cout << "=========================================" << endl;
        cout << "        WELCOME TO MAGIC AI 3000         " << endl;
        cout << "   The smartest (and funniest) machine   " << endl;
        cout << "=========================================" << endl;
        cout << "Booting system..." << endl;
        cout << "Checking intelligence..." << endl;
        cout << "ERROR: Too much intelligence detected!" << endl;
        cout << endl;
    }

    void menu() {
        cout << endl;
        cout << "========= MAGIC MENU =========" << endl;
        cout << "1. Roast Me" << endl;
        cout << "2. Predict My Future" << endl;
        cout << "3. Magic Number Guess" << endl;
        cout << "4. Tell Me a Joke" << endl;
        cout << "5. Exit Machine" << endl;
        cout << "Choose your destiny: ";
    }

    void roast() {
        string name;
        cout << "Enter your name: ";
        cin >> name;

        cout << endl;
        cout << "Scanning " << name << "..." << endl;
        cout << "Analyzing brain power..." << endl;

        int r = rand() % 4;

        if (r == 0)
            cout << name << ", you look like someone who debugs with print statements only." << endl;
        else if (r == 1)
            cout << name << ", even your computer needs coffee to run your code." << endl;
        else if (r == 2)
            cout << name << ", your WiFi signal is stronger than your coding skills." << endl;
        else
            cout << name << ", relax... even programmers make bugs... but you make them faster." << endl;
    }

    void future() {
        cout << endl;
        cout << "Predicting your future..." << endl;
        cout << "Consulting the servers..." << endl;

        int r = rand() % 5;

        if (r == 0)
            cout << "You will become a legendary programmer." << endl;
        else if (r == 1)
            cout << "You will forget a semicolon and suffer for 3 hours." << endl;
        else if (r == 2)
            cout << "You will build an app worth millions." << endl;
        else if (r == 3)
            cout << "You will accidentally delete your project folder." << endl;
        else
            cout << "You will pass all exams easily." << endl;
    }

    void guessGame() {
        int number = rand() % 10 + 1;
        int guess;

        cout << "I am thinking of a number between 1 and 10..." << endl;
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number)
            cout << "WOW! You are a wizard!" << endl;
        else
            cout << "Wrong! My number was " << number << endl;
    }

    void joke() {
        int r = rand() % 3;

        cout << endl;

        if (r == 0)
            cout << "Why do programmers hate nature? Too many bugs." << endl;
        else if (r == 1)
            cout << "Why did the computer go to therapy? Too many bytes of sadness." << endl;
        else
            cout << "I tried to learn HTML and CSS... now my life has no style." << endl;
    }

}

int main() {

    srand(time(0));

    int choice;

    FunnyMachine::intro();

    do {
        FunnyMachine::menu();
        cin >> choice;

        if (choice == 1) {
            FunnyMachine::roast();
        }
        else if (choice == 2) {
            FunnyMachine::future();
        }
        else if (choice == 3) {
            FunnyMachine::guessGame();
        }
        else if (choice == 4) {
            FunnyMachine::joke();
        }
        else if (choice == 5) {
            cout << "Machine shutting down..." << endl;
            cout << "Goodbye human." << endl;
        }
        else {
            cout << "Invalid choice. Even my AI can't understand you." << endl;
        }

    } while (choice != 5);

    return 0;
}