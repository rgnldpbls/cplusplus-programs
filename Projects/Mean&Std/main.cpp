#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


float mean_func(int x[], int i, int n,int mean){
    int sum;

    for(i=0;i<n;i++){
        sum += x[i];
    }
    mean = sum/n;
    return mean;
}

float std_func(int x[], int i, int n, float std_dev){
    float mean, std_dev_pre;
    mean = mean_func(x,i,n,mean);
    for(i=0;i<n;i++){
        std_dev_pre += pow(x[i]-mean, 2);
    }
    std_dev = sqrt(std_dev_pre/n);
    return std_dev;
}
int main()
{
    int i, n, mean;
    int x[n];
    float std_dev;

    cout << "Please enter on how many you want to input: ";
    cin >> n;
    cout << "\n\n";

    for(i=0;i<n;i++){
        cout << "Input " << i+1 << endl;
        cout << "Please enter num: ";
        cin >> x[i];
        cout << "\n";
    }

    cout << "\n\n";
    cout << "Mean: " << mean_func(x, i, n, mean) << endl;
    cout << "Standard Deviation: " << std::setprecision(2) << std_func(x,i,n,std_dev) << endl;

    return 0;
}
