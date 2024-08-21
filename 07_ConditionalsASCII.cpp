#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter an input : ";
    cin >> ch;

    if(ch>='0' && ch<='9')
        cout << "This is numeric";
    else if(ch>='A' && ch<='Z')
        cout << "This is Uppercase";
    else if(ch>='a' && ch<='z')
        cout << "This is Lowercase";
    else
        cout << "Not valid";
}