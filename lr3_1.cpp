#include <iostream>
#include <math.h>
using namespace std;
int main (){
float res = 1;
int n;
int l;
cout << "Set n > ";
cin >> n;
cout << endl;
cout << "Set l > ";
cin >> l;
for(int i = 0 ; i >= l ; i+n){
res += (n / n+6 )* pow(res,2);

}
cout << res ;
return 0;
}
