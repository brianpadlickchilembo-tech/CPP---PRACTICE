#include<iostream>
#include<cmath>
   using namespace std;

         void checkEvenOdd(int num){
             if(num %2 == 0){
                    cout << "This is even "<< endl;

                   }
                   else{
                    cout << "The number is odd " << endl;
                    
                   }
            
           }

             int main(){
                int num;
                cout<< " ________________________________" << endl;
                cout << " Enter num" << endl;
                cin >> num;
                        
                  
                  checkEvenOdd(num);
                  return 0;
             }