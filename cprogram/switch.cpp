#include <iostream>
using namespace std;
int main()
{
int x;
string a = "Give the value for ";
string b = "switch -";
string combinedstring = a + b;
cout << combinedstring << endl;
cin >> x ;
switch(x)
{
  case 1:
     cout << "1" << endl; 
     break;
  case 2:
     cout << "2" << endl;
     break;
  case 3:
     cout << "3" << endl;
     break;
  case 4:
     cout << "4" << endl;
      break;
 default:
     cout << "default" << endl;
     break;
}

}
