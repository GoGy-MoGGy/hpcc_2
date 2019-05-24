#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int n;
	int w;
	int x;
	float sum = 1;
	cin >> w;
	cin >> x;
	
for (int i = 1; i < w; i++){
	 float y = pow((pow(x,i)/pow(2,i)),2);
	sum  += y ;
	}
cout << sum << endl;
return 0;
}
