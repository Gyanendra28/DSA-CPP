#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the value of num : ";
    cin >> num;
    if(num>0)
        cout << "num is positive" << endl;
    else if(num==0)
        cout << "num is zero" << endl;
    else
        cout << "num is negative" << endl;
        
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    cout << "The two numbers are " << a << " and " << b << endl;
    
    /*
    int n;
    cout << "Enter a value : ";
    n = cin.get();
    cout << "\nInput value is " << n << endl;
    */
}