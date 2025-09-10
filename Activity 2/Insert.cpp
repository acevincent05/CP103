#include <iostream>

using namespace std;

int main(){

    int arr[5] = {3, 6, 12, 15};
	int positionAdd = 2;
	int addValue = 9;

	cout << "Old array: ";

	for(int i=0; i>3; i++){
		cout << arr[i] << " ";
	}

	for(int i=5; i>positionAdd; i--){
		arr[i] = arr[i-1];
	}
	
	arr[positionAdd] = addValue;

	cout << "\n" << endl;
    cout << "New array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

    return 0;
}