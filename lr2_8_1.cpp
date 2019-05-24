#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    setlocale(0,"");
    int n, sn;
    int sum;
cout<<"End of ... >";
cin >>n;
    cout<<"Count >";
    cin >>sn;
    double a[n];
    a[1] = 1;
    a[2] = 2;
    a[3] = 0;
    for (int k = 4; k <n; k++){
        a[sn]=a[sn-1]*sqrt(2/sn * abs(a[sn-3]));
        sum += a[sn];
    }
    sum = sum/sn;
    cout<<"Res >" << sum <<endl;
    return 0;
}