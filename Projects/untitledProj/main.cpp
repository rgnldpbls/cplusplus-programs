// Name
// Student Number & Subject/Section

#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    string gender;
    int money;
    string choices;

    start:
    cout << "Please input what is the gender of your desired character?(Male or Female)" << endl;
    cout << "Your input:";
    cin >> gender;

if(gender=="Male"||gender=="male"||"MALE"){
cout << "Your chosen character is " << gender << endl;
cout << "\n\n\nAll available weapons: Price in Units" << endl;
cout << "Bow and arrow\t\t" << "450 units" << endl;
cout << "Shield\t\t\t" << "380 units" << endl;
cout << "Spear\t\t\t" << "400 units" << endl;
cout << "Sword\t\t\t" << "500 units" << endl;

try_again:
cout << "\n\nHow much money you have?(range from 300 to 1000 units)" << endl;
cout << "Your input: ";
cin >> money;

switch(money){
case 300 ... 379:
    cout << "Insufficient to buy weapons.";
    break;
case 380 ... 399:
    cout << "I will suggest to buy a shield.";
    break;
case 400 ... 449:
    cout << "I will suggest to buy a shield or spear.";
    break;
case 450 ... 499:
    cout << "I will suggest to buy a shield or spear or bow and arrow.";
    break;
case 500 ... 1000:
    cout << "I will suggest to buy a shield or spear or bow and arrow or sword.";
    break;
default:
    cout << "The amount is not within the range." << endl;
    inv:
    cout << "Try again? (Yes or No)" << endl;
    cout << "Your input: ";
    cin >> choices;
    if(choices=="Yes"||choices=="yes"){
        goto try_again;
    }
    else if(choices=="No"||choices=="no"){
        exit;
    }
    else{
        goto inv;
    }
}
}

else if(gender=="Female"||gender=="female"||"FEMALE"){
cout << "Your chosen character is " << gender;
cout << "\n\n\nAll available weapons: Price in Units" << endl;
cout << "Bow and arrow\t\t" << "450 units" << endl;
cout << "Shield\t\t\t" << "380 units" << endl;
cout << "Spear\t\t\t" << "400 units" << endl;
cout << "Sword\t\t\t" << "500 units" << endl;

try_again2:
cout << "\n\nHow much money you have?(range from 300 to 1000 units)" << endl;
cout << "Your input: ";
cin >> money;

switch(money){
case 300 ... 379:
    cout << "Insufficient to buy weapons.";
    break;
case 380 ... 399:
    cout << "I will suggest to buy a shield.";
    break;
case 400 ... 449:
    cout << "I will suggest to buy a shield or spear.";
    break;
case 450 ... 499:
    cout << "I will suggest to buy a shield or spear or bow and arrow.";
    break;
case 500 ... 1000:
    cout << "I will suggest to buy a shield or spear or bow and arrow or sword.";
    break;
default:
    cout << "The amount is not within the range." << endl;
    inv2:
    cout << "Try again? (Yes or No)" << endl;
    cout << "Your input: ";
    cin >> choices;
    if(choices=="Yes"||choices=="yes"){
        goto try_again2;
    }
    else if(choices=="No"||choices=="no"){
        exit;
    }
    else{
        goto inv2;
    }
}
}
else{
cout << "Invalid input\n\n\n";
goto start;
}
	std::getchar();
    std::getchar();
    return 0;
}
