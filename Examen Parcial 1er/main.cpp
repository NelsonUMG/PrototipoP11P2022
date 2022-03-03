#include<iostream>
#include<string>
using namespace std;
int f1(int x)
{
x++;
return x;
}
int f2(int x)
{
x--;
return f1(x);
x++;
}
int f3(int x, int y)
{
x = f2(x);
y = f2(y);
return x + y;
}
main()
{
int x = 4, y = 7;
cout<<"El primer valor es :\t"<<x<<endl;
cout<<"El segundo valor es:\t"<<y<<endl;
cout<<"la suma de ambos son:\t"<<f3<<endl<<endl;
    cin.ignore();}

