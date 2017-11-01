#include <iostream>
using namespace std;
enum dayofweek{m=1,t,w,th,f,sa,su};
string day(dayofweek);
int main()
{
int i;
cout << "enter the value for day" << endl;
cin >> i;
cout << day(dayofweek(i)) << endl;
return 0;
}
string day(dayofweek d)
{
switch(d)
{
case m:
return "Monday";
case t:
return "tuesday";
case w:
return "wednesday";
case th:
return "thursday";
case f:
return "friday";
case sa:
return "saturday";
case su:
return "sunday";
default :
cout << "wrong value" << endl;
break; 
}
}
