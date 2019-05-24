#include <iostream>
#include <math.h>
using namespace std;
int main (){
float x;
cout << "SET X >";
cin >> x;
float temp = cos(log(x));
float y = temp + exp(x + temp)/pow(abs(sin(x*x) + temp),-1./3 );
cout << "RES(y) >" << y << endl;
return 0 ;
}



               
