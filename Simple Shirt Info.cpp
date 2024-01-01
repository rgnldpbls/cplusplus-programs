// Simple Shirt Info using Getters and Setters
#include<iostream>

using namespace std;

class Shirt{
    private: 
        string Size;
    
    public:
        string Brand;
        string Color;
        
    Shirt(string aBrand, string aColor, string aSize){
        Brand = aBrand;
        Color = aColor;
        setSize(aSize);
    }
    
    string getSize(){ //Getter
        return Size;
    }
    
    void setSize(string aSize){ //Setter
        if(aSize == "XS" || aSize == "S" || aSize == "M" || aSize == "L" || aSize == "XL"){
            Size = aSize;
        }else{
            Size = "Unknown Size";
        }
    }
};
int main(){
    Shirt type1("Bench","Black","Medium");
    cout << type1.getSize() << endl;
}
