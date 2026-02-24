#include <iostream>
#include <cmath>

using namespace std;

float CalculateBills(float units){
    float cost;

    if(units <= 100){
        cost = units * 50;
    }
    else if (units >= 101 && units <= 300){
        cost = units * 75;
    }
    else{
        cost = units * 100;
    }

    return cost;
}

void displayResults(float units, float bill){
    cout << "Units used: " << units << endl;
    cout << "Total bill: " << bill << endl;
}

int main(){
    float units;
    float bill;

    cout << "Enter total units: " << endl;
    cin >> units;

    bill = CalculateBills(units);
    displayResults(units, bill);

    return 0;
}