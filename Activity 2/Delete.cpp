#include <iostream>

using namespace std;

int main(){

	int max = 5;
	int currentSize = 4;
    int arr[max] = {3, 6, 9, 12};
	

	cout << "Old array: ";

	for(int i=0; i<currentSize; i++){
		cout << arr[i] << " ";
	}

	int positionDelete = 2;

	for(int i=positionDelete; i<currentSize-1; i++){
		arr[i] = arr[i+1];
	}

	currentSize--;

	cout << "\n";
    cout << "New array: ";

	for(int i=0; i<currentSize; i++){
		cout << arr[i] << " ";
	}

    return 0;
}