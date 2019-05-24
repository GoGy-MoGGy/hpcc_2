#include <iostream>
#include <cmath>
#include <time.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main(){
srand(time(NULL));
int mas[5][5];
int sum;
for(int i = 0 ; i < 5 ; i++){
	for(int j = 0 ; j < 5 ; j++){
	mas[i][j] = rand()%21-10;
        cout <<setw(4)<< mas[i][j];
        }
cout << endl;
}

for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
        if (i = j){
	sum += mas[i][j];
	}
        }

}
cout << "Sum >>" << sum << endl;

return 0;
}
