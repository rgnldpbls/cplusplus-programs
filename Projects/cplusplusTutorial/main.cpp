#include <iostream>

using namespace std;

/*int main()
{
    cout << "Hello World!" << endl;
    return 0;
}*/

/*int main(){
string x = "Sample text";

cout << x;

return 0;
}*/

/*int main(){
	string nameOne = "John";
	string nameTwo = "Mae";
	string occupation = "Programmer";

	cout << nameOne << " is a " << occupation << "." << endl;
	cout << nameTwo << " is a " << occupation << "." << endl;
	cout << nameOne << " and " << nameTwo << " are Partners." << endl;

	return 0;
}*/

/*int main(){
string username = "";

cout << "Please input your username:";
cin >> username;
cout << username << ", Welcome to our Program!";


}*/

//One Function Calculator
int main(){
int numberOne;
int numberTwo;
int results;

cout << "Please input first number:";
cin >> numberOne;

cout << "Please input second number:";
cin >> numberTwo;

results = numberOne + numberTwo;
cout << numberOne << "+" << numberTwo << " = " << results;

return 0;
}
