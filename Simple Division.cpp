// Simple Division Program
#include<iostream>
#include<string>

using namespace std;

int main(){
	float a, b, div;
	
	
	cout << "Note: First value must greater than the second value!\nAdditionally, first value must five numbers.\n\n";
	cout << "Please input the first value: ";
	cin >> a;
	
	cout << "Please input the second value: ";
	cin >> b;
	
	div = a / b;
	
	cout << "\n\n\n";
	cout << "The quotient of " << a << " and " << b << " is : " << div;
	
	return 0;
}
