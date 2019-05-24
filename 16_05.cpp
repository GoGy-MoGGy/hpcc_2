#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main(){
	srand(time(NULL));
	int count;
	int max = -34;
	int index = 0;
	cout << "Set COUNT>";
	cin >> count;
	int array[count];
	for (int i = 0; i < count; i++){
		array[i]=rand()%97-33;
	}
	for (int i = 0; i < count; ++i){
		cout << setw(7) << i ; 
	}
	cout << endl;
	for (int i = 0; i < count; ++i){
		cout << setw(7)<<array[i];
		if (array[i] > max){
		max = array[i];
		index = i;
		}
	}
	cout << endl;
	cout << "Это максимум " << max << "  |  Index > " << index << endl;
	return 0;s
}