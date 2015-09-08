// laba6.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
void main()
{ using namespace std;
double x,y,a;
float n;
n=3.14;
a=1.5;
for ( x=0.8; x<1.3; x=x+0.15) {y=n*pow(x,2)-7/pow(x,2); cout<<y<<endl;}
x=1.3; { y=a*pow(x,3)+7*sqrt(x); cout<<y<<endl;}
for (x=1.3; x<2; x=x+0.15) {y=log10(x+7*sqrt(x)); cout<<y<<endl;}
}

