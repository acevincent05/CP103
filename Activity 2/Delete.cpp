#include <iostream>

using namespace std;

int main(){

    int arr[5] = {3, 6, 9, 12};
	int positionDelete = 2;

	cout << "Old array: ";

	for(int i=0; i<3; i++){
		cout << arr[i] << " ";
	}

	for(int i=5; i>positionAdd; i--){
		arr[i] = arr[i-1];
	}
	
	arr[positionAdd] = addValue;

	cout << "\n";
    cout << "New array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

    return 0;
}