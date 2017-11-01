#include <iostream>
using namespace std;
int main(){

int b = 20;
cout << "address of b :" << &b << endl;
int *a = &b;
int c = 1;
a = &c;
cout << "a:" << a << endl;


}
