#include <iostream>
using namespace std;
#define pi 3.14;
void displaymenu();
void selection(char);
double circle(double);
double triangle(double,double);
double squarea(double);
double rectangle(double,double);
int main()
{
double result;
char cont;
int choice;

do
{
displaymenu();
cin >> choice;
selection(choice);
cout << "Do you want to cont?(y/n)?" << endl;
cin >> cont;
cin.ignore(1024);
}while (cont == 'y' || cont == 'Y');



return 0;
}
void displaymenu()
{
int choice;
cout << "Choose from the following options : " << endl;
cout << "1.Circle" << endl;
cout << "2.Triangle" << endl;
cout << "3.Rectanglr" << endl;
cout << "4.Square" << endl; 
}
void selection(char choice)
{
switch(choice)
{
double r,b,h,l,s;
case 1:
cout << "For Area of Circle enter value of Radius:  " << endl;
cin >> r;
circle(r);
break;
case 2:
cout << "For Area of Trianglr enter value of base and height:  " << endl;
cin >> b;
cin >> h;
triangle(b,h);
break;
case 3:
cout << "For Area of Rectangle enter value of length and breadth:  " << endl;
cin >> l;
cin >> b;
rectangle(l,b);
break;
case 4:
cout << "For Area of Square enter value of side:  " << endl;
cin >> s; 
squarea(s);
break;
deafault :
cout << "You have not entered proper choice" << endl;
break;
}
}
double circle(double r)
{
double area = r * r * pi;
cout << "Area is = " << area << endl;
return area;
}
double triangle(double h,double b)
{
double area;
area = 0.5 * b * h;
cout << "Area is =" << area << endl;
return area;
}
double rectangle(double l,double b)
{
double area;
area = l * b;
cout << "Area is = " << area << endl;
return area;
}
double squarea(double s)
{
double area;
area = s * s;
cout << "Area is = " << area << endl;
return area;
}








