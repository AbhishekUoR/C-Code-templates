#include <iostream>
using namespace std;
bool isnumber(string);
void number();
int main()
{
number();
number();
number();
}
bool isnumber(string temp)
{
for(int i = 0;i < temp.length(); i++)
 {
 if (!(temp[i] >= 48 && temp[i] <= 57))
  
  return false;
 }  
  return true;
}
void number()
{
string temp;
cout << "enter number = " ;
cin >> temp;
  if (isnumber(temp))
  cout << "its a number" << endl;
  else
  cout << "please try again " << endl;

}

