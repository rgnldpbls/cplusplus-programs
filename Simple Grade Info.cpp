// Simple Grade Info using Array of Objects
#include<iostream>

using namespace std;

class Student{
    public:
        int studentID;
        string name;
        float genAve;
    
    void setInformation(int aStudentID, string aName, float aGenAve){
        studentID = aStudentID;
        name = aName;
        genAve = aGenAve;
        
        displayInformation();
    }
    
    void displayInformation(){
        cout << "====== Student ID # " << studentID << " ======" << endl;
        cout << "Student Name: " << name << endl;
        cout << "General Average: " << genAve << endl;
        cout << "============================" << endl;
    }
    
};

int main(){
    Student num[3];
    for(int i=0; i<3; i++){
        string name;
        float genAve;
        
        cout << "Enter Name: ";
        cin >> name;
        
        cout << "General Average: ";
        cin >> genAve;
        
        num[i].setInformation(i+1,name,genAve);
    }
    
    system("cls");
    
    for(int i=0; i<3; i++){
        cout << endl;
        num[i].displayInformation();
    }
    
    return 0;
}
