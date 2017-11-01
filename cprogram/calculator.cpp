#include <iostream>
using namespace std;
int main ()
{
double a,b;
beginning:
cout << "what is value of a - " << endl;
cin >> a ;
cout << "what is the value of b - " << endl;
cin >> b;
cout << "what arithmetic operation has to be done on numbers" << endl;
char choice;
cin >> choice; 
switch (choice)
{
case '+':
cout << (a+b) << endl;
break;
case '-':
cout << (a-b) << endl;
break;
case '*':
cout << (a*b) << endl;
break;
case '/':
if (b != 0)
cout << (a/b) << endl;
else
cout << "wrong divison" << endl;
break;
default :
cout << "This is not a arithmetic operator" << endl;
}
char c;
cout << "Do you want to continue - Y/N";
cin >> c;
if (c == 'y'|| c == 'Y')
 goto beginning;
else 
 cout << "thank you" << endl;
}


