#include <iostream>
using namespace std;

void validateMarks(int marks){

    if(marks < 0 || marks > 100){
        cout << "Invalid marks" << endl;
    }
    else if(marks >= 75){
        cout << "Distinction" << endl;
    }
    else if(marks >= 50){
        cout << "Pass" << endl;
    }
    else{
        cout << "Fail" << endl;
    }
}

int main(){

    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    validateMarks(marks);

    return 0;
}
