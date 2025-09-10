#include <iostream>

using namespace std;

int main(){

    int arr[5] = {3, 6, 9, 12};
	

	cout << "Old array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

	int positionDelete = 2;

	for(int i=positionDelete; i<4-1; i++){
		arr[i] = arr[i+1];
	}

	

	cout << "\n";
    cout << "New array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

    return 0;
}