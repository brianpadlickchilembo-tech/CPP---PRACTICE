#include <iostream>
#include <cmath>
using namespace std;

      float CalculateAverage(float a, float b, float c)
      {      float average;
             average = ( a + b + c)/ 3;

               if(average >= 75 )
               {
                   cout << " Distinction " << endl;
               }
               else if (average >= 50 ){
                cout << " pass " << endl;
               }
               else{
                cout<< " fail "  << endl;
               }
               return average;
      }

      void Displayresults(float average)
      {
             cout << "average is " <<average << endl;
      }

       int main(){

    


        float Math, Phy, Bio;

           cout << " Enter the Math marks " << endl;
           cin >> Math;

           cout << " Enter the Phy marks " << endl;
           cin >> Phy;

           cout << " Enter the Bio marks " << endl;
           cin >> Bio;
           
          float average = CalculateAverage( Math, Phy, Bio);
               Displayresults( average);
            
             return 0;
       }