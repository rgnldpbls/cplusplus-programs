// Simple Student Info program using OOP
/*Classes & Objects, Constructors & Object Functions*/

#include<iostream>
#include<sstream>

using namespace std;

class Student{ //Classes
    public:
        string Name; //Objects
        int Year;
        float Gen_ave;
    
    Student(string aName, int aYear, float aGen_ave){ //Constructors
        Name = aName;
        Year = aYear;
        Gen_ave = aGen_ave;
        
        cout << "Student Info is Registered" << endl;
    }
    
    string get_honors(){ //Object Functions
        if(Gen_ave >= 98){
            return "With Highest Honor";
        }else if(Gen_ave >= 95){
            return "With High Honor";
        }else if(Gen_ave >= 90){
            return "With Honor";
        }else{
            return "No Merit";
        }
    }
    
    string student_intro(){
        stringstream con;
        con << Year;
        return "I am " + Name + " and I am a Grade "  + con.str() + " Student.";
    }
};


int main(){
    Student s1("Jane",12,91.30);
    cout << s1.student_intro() << endl;
    cout << s1.get_honors();
}
