#include <iostream>
#include <math.h>
using namespace std;
int main (){ 
float x = 0.54;
float a = 1.1;
float b = -1.22;
float y = pow(cos(pow(x + pow(a,2),2)),2) + sqrt(x/pow(b,2));
float z =  (pow(a, 2)/pow(x,2)) + exp(pow(x+b , 3));
cout << "RES(y) > " << y << endl; 
cout << "RES(z) > " << z << endl;
return 0 ;
}



               
