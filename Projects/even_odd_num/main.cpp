#include <iostream>

using namespace std;

#include<iostream>

int main(){
    int num;
    int k;

    cout << "Input Number: ";
    cin >> num;

        if(num%2==0){
            cout << num << " is an even number" << endl;
            cout << "\n\n";
        }
        if(num%2==1){
            cout << num << " is an odd number" << endl;
            cout << "\n\n";
        }

        cout << "Thank you for using the program";
    return 0;
}

