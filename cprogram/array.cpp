#include <iostream>
using namespace std;
int main()
{
int a [3];
int bo[3][2];
a [0] = 2;
//bo[0][1] = 14;
//bo[1][0] = 184;
//bo[0][1] = 144;
bo[1][1] = 444;
a [1] = 3;
a [2] = 3454;
cout << "b[0][0] = " << bo[0][0] << ",address = " << &bo[0][0] << endl;
cout << "b[0][1] = " << bo[0][1] << ",address = " << &bo[0][1] << endl;
cout << "b[1][0] = " << bo[1][0] << ",address = " << &bo[1][0] << endl;
cout << "b[1][1] = " << bo[1][1] << ",address = " << &bo[1][1] << endl;
cout << "a [0]" << a [0] << ",address = " << &a [0] << endl;
cout << "a [1]" << a [1] << ",address = " << &a [1] << endl;
cout << "a [2]" << a [2] << ",address = " << &a [2] << endl;
}
