#include <iostream>
using namespace std;
#include <cmath>

void showmenu(){
    cout <<" ====== AIRTEL MONEY ====== " << endl;
    cout <<"1. Buy Airtime" << endl;
    cout <<"2. Send Money" << endl;
    cout <<"3. Withdraw Money" << endl;
    cout <<"4. Check Balance" << endl;
    cout <<"6. Exit" << endl;
    cout <<"Choose Choice: " << endl;
}

int main(){

    int choice;
    float balance = 50000;
    long long phonenumber;
    int agentcode;
    float amount;

    do {
        showmenu();
        cin >> choice;

        if(choice == 1){

            cout << "Enter Amount: " << endl;
            cin >> amount;

            if(amount <= balance){
                balance -= amount;
                cout << "Airtime purchased successfully" << endl;
                cout << "Your balance is " << balance << endl;
            }
            else{
                cout << "Insufficient balance, press 6 to exit" << endl;
            }
        }

        else if(choice == 2){

            cout << "Enter phone number: " << endl;
            cin >> phonenumber;

            cout << "Enter amount: " << endl;
            cin >> amount;

            if(amount <= balance){
                balance -= amount;
                cout << "You sent " << amount << " to " << phonenumber << endl;
                cout << "Your balance is " << balance << endl;
            }
            else{
                cout <<"Insufficient balance, press 6 to exit" << endl;
            }
        }

        else if(choice == 3){

            cout << "Enter Agent code: " << endl;
            cin >> agentcode;

            cout << "Enter amount: " << endl;
            cin >> amount;

            if(amount <= balance){
                balance -= amount;
                cout << "Withdrawal successful" << endl;
                cout << "Your balance is " << balance << endl;
            }
            else{
                cout << "Insufficient balance, press 6 to exit" << endl;
            }
        }

        else if(choice == 4){
            cout << "Your balance is " << balance << endl;
        }

        else if(choice == 6){
            cout << "Thank you for using Airtel Money" << endl;
        }

        else{
            cout << "Invalid Option" << endl;
        }

    } while(choice != 6);

    return 0;
}
