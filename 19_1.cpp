#include <iostream>
#include <math.h>
using namespace std;
int main (){ 
float a = 3.2; 
float b = 17.5;
float x = -4.8;
float y = b *  pow(tan(x),2) - a/sin(x/a);
float d = a * exp(-sqrt(a)) * cos(b*x/a);
cout << "RES(y) > " << y << endl;
cout << "RES(d) > " << d << endl;
return 0 ;
}



               
