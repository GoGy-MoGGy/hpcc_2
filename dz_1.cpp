#include <iostream>

using namespace std;

int main(){

float a1 = 1;
float a2 = 2;
float sup;
	for (sup = 3; sup <=10 ; sup++){
	sup = a1+a2;
	cout << sup;
	a1=a2;
	a2=sup;
	}
	return 0;
	}
