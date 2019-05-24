#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main (){
int x;
cout << "Set x >";
cin >> x;
float temp  = sin(pow(x,2));
float y = sqrt(abs(cos(x)+temp+1))+exp(temp)/pow(temp + 2 + log(temp),-1./3);
cout << y << endl;
return 0;
}
