#include <iostream>
using namespace std;
int main()
{
int m,temp,i;
temp = m;
i = 1;
cout << "m = " ;
cin >> m;
while( m /= 10)
{
i++;

}
cout << i << endl;
}
