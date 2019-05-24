#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main(){
	srand(time(NULL));
	int count = 8;
	int min;
	int array[count];
	for (int i = 0; i < count; i++){
		array[i]=rand()%97-33;
	}
	for (int i = 0; i < count; i++){
	cout << setw(7) << array[i] << endl;
	if (array[i] < min){
		array[i] = min;
	}

	}
	cout << "MIN >" << min << endl;
	return 0;
}