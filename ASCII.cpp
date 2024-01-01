// C++ program to print ASCII Value of Character
#include <iostream>
using namespace std;
 
// Source code
int main()
{
    char code, choice;
    
    main:
    cout << "Input a character: ";
    cin >> code;
    cout << "The ASCII value of " << code << " is: " << int(code) << endl;;
    cout << "The character for the ASCII value " << int(code) << " is: " << code << endl;
    	
    cout << "Try Again (Y/N): ";
    cin >> choice;
    if(choice=='Y'||choice=='y'){
    	cout << "\n\n\n";
    	goto main;
	}
	else{
		exit(0);
	}
    
    return 0;
}
