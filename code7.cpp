#include <iostream>
#include <cmath>
using namespace std;

int multiplication(int a, int b, int c){
    int result = a * b;
    return result;
}
void names(){
    cout << "   Pedlick              " << endl;
    cout << "     Tollens            " << endl;
    cout << "       Fehllings          " << endl;

}


namespace morick{
            int a =20;
        }
 namespace tollens{
          int a = 30;
          
        }
        
     int main(){
        int a = 18;

        int x,y, z, result;
        cout << "  Enter the value of a               " << endl;
        cin>> x;
        cout << "  Enter  the value of b               " << endl;
        cin >> y;
        cout << "  Enter the value of c               " << endl;
       cin >> z;

           result = multiplication(x,y, z);
           cout <<  result            << endl;
           
           if (z % x == 0){
            cout << z << " is the multiple of x " << endl;

           }
           else{
            cout << z << "is not multiple nof x " << endl;
        }

         names();
        
        cout << tollens:: a << endl;
        cout << morick::a << endl;
        return 0;
     }