#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
int main (){
float y;
int x;
cout << "Set x > ";
cin >> x;
if (x > 7){
cout << "x>7\n";
y = x + pow(x , -1.3);
}
else if ( 3 < x && x < 7){
cout << "3<x<7\n";
y = log(x)+tan(x);
}
else {
cout << "ELSE\n";
y = sqrt(abs(x+1));
}
cout << "Y >" << y << endl;
return 0;
}
