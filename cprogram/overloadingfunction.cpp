#include <iostream>
using namespace std;
int power(int,int);
double power(double,double);
int main()
{
cout << power(2.8,3.9) << endl;
return 0;
}
int power(int b,int e)
{

int temp = b;
while (e-- > 1)
b = b * temp;
return b;

}
double power(double b,double e)
{

double temp = b;
while (e-- > 0)
b = b * temp;
return b;

}
