#include<iostream>
using namespace std;

void swap(int *x, int *y)
{
int swap;
swap = *x;
*x = *y;
*y = swap;
}
int main()
{
int x = 50, y = 60;
swap(&x, &y);//passing value to function
cout<< " value of x is:" <<x<<endl;
cout<< " value of y is:" <<y<<endl;
return 0;
}
