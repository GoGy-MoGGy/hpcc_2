#include <iostream>
#include <math.h>
using namespace std;
int main (){
float a = 16.5;
float b = 3.4;
float x = 0.61;
float s = pow(x,3)* tan(pow(x+b , 2)) + a / sqrt(x+b);
float d = (b * pow(x,2) - a )/exp(a*x) - 1;
cout << "RES(s) > " << s << endl;
cout << "RES(d) > " << d << endl;
return 0 ;
}
