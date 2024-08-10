#include<iostream>
using namespace std;

int main(){
    int a = 2.0/5;
    cout << a << endl;
    cout << 2.0/5 << endl;

    int b = 2, c = 3;
    bool first = (b==c);
    cout << first << endl;
    bool second = (b<=c);
    cout << second << endl;
    bool third = (b!=c);
    cout << third << endl;

    int d = 1;
    cout << !d << endl;
}