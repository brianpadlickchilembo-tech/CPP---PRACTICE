#include <iostream>
using namespace std;

float calculateDiscount(float price) {

    float finalprice;

    if(price > 50000){
        cout << "Give 20% discount" << endl;
        finalprice = price - (price * 0.20); // 20% off
    }
    else if(price > 20000){
        cout << "Give 10% discount" << endl;
        finalprice = price - (price * 0.10); // 10% off
    }
    else{
        cout << "No discount" << endl;
        finalprice = price; // no change
    }

    return finalprice;
}

int main() {
    float price;
    cout << "Enter the price: ";
    cin >> price;

    float finalprice = calculateDiscount(price); // store returned value

    cout << "The final price after discount is: " << finalprice << endl;

    return 0;
}
