#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main (){ 
int x;
cout << "Set x >";
cin >> x;
float temp = atan(sqrt(x));
float y = temp + exp(temp)/log(abs(temp)) + sin(x);
cout << x << endl;
return 0;
}

