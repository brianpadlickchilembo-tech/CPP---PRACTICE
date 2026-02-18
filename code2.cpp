#include<iostream>
using namespace std;

        int findLargest(int a, int b){
            if(a > b){
                cout<< a << " is the largest " << endl;

            }
            else if(a == b){
                cout<<" Numbers are equal " << endl;
            }
            else{
                cout << b << "  is the largest " << endl;
            }
        }
                int main(){
                    int a, b;
                    cout <<"__________________________________________" << endl;
                    cout << " Enter you number "<< endl;
                    cin >> a;
                    cout << " Enter you number "<< endl;
                    cin >> b;

                          findLargest(a,b);
                          return 0;
                }
        