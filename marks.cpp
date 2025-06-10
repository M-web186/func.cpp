#include<iostream>
using namespace std;

int main()
{
string units[8]={"maths","structured programming","communication skills","entrepreneurship development","ICT ethics","computer application","operating system","life skills"};
int marks[8]={86,96,87,98,75,84,94,88};
cout<< " last semester marks:\n";
for(int i=0;i<8;i++){
    cout<< units [i]<< ":" <<marks[i]<<"\n";
}
return 0;
}
