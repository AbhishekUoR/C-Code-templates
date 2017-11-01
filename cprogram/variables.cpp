#include <iostream>
using namespace std;
int main()
{
int a = 2,b,c = 4;

cout << "a = " << a << " address = " << &a << endl;

cout << "b = " << b << " address = " << &b << endl;

cout << "c = " << c << " address = " << &b << endl;

char d = 'q';
string e = "hello";
string f = "world";
string combinedstring = e + " "  + f;
cout << "d = " << d << endl;
cout << "e = " << e << endl;
cout << "combined = " << combinedstring << endl;

const int g = 23;
//g = 24;

cout << "g = " << g << endl;

int k;
cout << "value of k = ";
cin >> k ;
cout << "value of k is " << k << endl;


}

