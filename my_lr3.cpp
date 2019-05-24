#include <iostream>
#include <math.h>
using namespace std;
int main(){
float y = 1;
int a = 1;
//enter user
int l;
int n;
cout << "Set l > ";
cin >> l;
cout << "Set n > ";
cin >> n;
for (int i = 0 ; i == l ; i++){
a++;
y *= (n / (n+6))* pow(a,2);
}
cout << "res y " << y << endl;



return 0;
}
