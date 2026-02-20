#include <iostream>
using namespace std;

float deposit(float balance, float amount){
    balance += amount;
    return balance;
}

float withdraw(float balance, float amount){
    if(amount > balance){
        cout << "Insufficient balance" << endl;
        return balance;
    }
    balance -= amount;
    return balance;
}

void checkbalance(float balance){
    cout << "Your current balance is k" << balance << endl;
}

void displaymenu(){
    cout << "====== MAIN MENU =====" << endl;
    cout << "1. Deposit" << endl;
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

int main(){
    int choice;
    float balance;
    float amount;

    cout << "Enter initial balance: ";
    cin >> balance;

    do {
        displaymenu();
        cin >> choice;

        if(choice == 1){
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            balance = deposit(balance, amount);
            cout << "You have deposited k" << amount << ", your current balance is k" << balance << endl;
        }
        else if(choice == 2){
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            balance = withdraw(balance, amount);
            cout << "Your current balance is k" << balance << endl;
        }
        else if(choice == 3){
            checkbalance(balance);
        }
        else if(choice == 4){
            cout << "Thank you for using our application!" << endl;
        }
        else{
            cout << "Invalid choice" << endl;
        }

        cout << endl;

    } while(choice != 4);

    return 0;
}