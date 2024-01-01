// Simple Personal Information Program

#include<iostream>
#include<string>

using namespace std;

int main(){
	string name, sex, address;
	float age, height, zip;
	
	cout << "Please enter your name: ";
	getline(cin, name);
	
	cout << "Please enter your age: ";
	cin >> age;
	
	cout << "Please enter your sex: ";
	cin >> sex;
	
	cout << "Please enter your height in centimeter: ";
	cin >> height;
	
	cout << "Please enter your address: ";
	cin.ignore();
	getline(cin, address);
	
	cout << "Please enter your ZIP code: ";
	cin >> zip;
	
	cout << "\n\n\n";
	cout << "Name:     " << name << endl;
	cout << "Age:      " << age << " years old" << endl;
	cout << "Sex:      "	<< sex << endl;
	cout << "Height:   " << height << "cm." << endl;
	cout << "Address:  " << address << endl;
	cout << "ZIP-Code: " << zip << endl;

	return 0;
}
