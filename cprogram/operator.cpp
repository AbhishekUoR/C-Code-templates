#include <iostream>
using namespace std;
int main()
{
int a = 2;
int b = 3;
cout << a + b << endl;
cout << a - b << endl;
cout << a * b << endl;
cout << a / b << endl;
cout << a % b << endl;
a += 2;
cout << a  << endl;
cout << ++a << endl;
cout << a++ << endl;
string d = "Relational ";
string e = "Operators";
string combinedstrings = d + e;
cout << combinedstrings << endl;
cout << (a == b) << endl;
cout << (a >= b) << endl;
cout << !(a == b) << endl;
string g = "Logical";
string combinedstrinq = g + e;
cout << combinedstrinq << endl;
cout << ((a >= b) && (a != b)) << endl;
cout << ((a >= b) || (a != b)) << endl;
cout << !((a >= b) && (a != b)) << endl;
string h = "Bitwise ";
string combinednext = h + e;
cout << combinednext << endl;
cout << (3 | 2) << endl;
cout << (3 & 2) << endl;
cout << (3 ^ 2) << endl;
cout << (3 << 1) << endl;
cout << ~(3) << endl;





}


