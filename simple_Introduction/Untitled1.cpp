#include<iostream>
#include<string>

using namespace std;

int main(){
	string name = "";
	int age;
	string section;
	
	cout << "Please enter your name: ";
	getline(cin, name);
	
	cout << "Please enter your age: ";
	cin >> age;
	
	cout << "Please enter your section: ";
	cin >> section;
	
	cout << "\n\n\n";
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Section: " << section << endl;
	
	return 0;
}
