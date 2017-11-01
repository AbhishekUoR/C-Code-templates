#include<iostream>
using namespace std;
int main()
{
int i,j,k;
cout << "value of k = ";
cin >> k ;
cout << endl;
for (i = 1; i <= k; i++)
{
 for(j = 1;j <= 10; j++ )
   {
//    if (j==5)
//    continue;
//    if (j==8)
//    break;
    int a = i*j;
    cout.width(4);
    cout << a << " ";
   }
 cout << endl;
} 
}
