#include <iostream>

using namespace std;

int main(){

    int arr[5] = {3, 6, 12, 15};
	int positionAdd = 2;
	int addValue = 9;

	for(int i=5, i>positionAdd; i--){
		arr[i] = arr[i-1];
	}
	
	arr[positionAdd] = addValue;

    return 0;
}