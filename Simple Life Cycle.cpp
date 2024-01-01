// Simple Life Cycle
#include <iostream>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Please enter your name: ";
    getline(cin, name);

    cout << "Please enter your age: ";
    cin >> age;

    if(age>=3 && age <=9){
        cout << "Output:" << endl;
        cout << name << " is in child cycle.";
        cout << "\n\n";
    }else if(age>=10 && age<=18){
        cout << "Output:" << endl;
        cout << name << " is in adolescent cycle.";
        cout << "\n\n";
    }else if(age>=19 && age<=59){
        cout << "Output:" << endl;
        cout << name << " is in adulthood cycle.";
        cout << "\n\n";
    }else if(age>=60){
        cout << "Output:" << endl;
        cout << name << " is in elderly cycle.";
        cout << "\n\n";
    }else{
        cout << "Output:" << endl;
        cout << name << " is not belong in the following cycle.";
        cout << "\n\n";
    }
    return 0;
}
