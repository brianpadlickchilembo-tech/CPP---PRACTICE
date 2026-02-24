#include <iostream>
using namespace std ;


     namespace Bank{
        float Balance = 500;
       void showBalance( ){
        cout << Balance << endl;
       }
     }

      int main(){
        cout <<" The balance is " << Bank:: showBalance << endl;
        return 0;

      }