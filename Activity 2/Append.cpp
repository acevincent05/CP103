#include <iostream>

using namespace std;

int main(){

	int max = 6;
	int currentSize = 5;

    int arr[max] = {3, 6, 9, 12, 15};

	cout << "Old array: ";

	for(int i = 0; i <= (currentSize-1); i++) {
		cout << arr[i] << " ";
	}

	if(currentSize < max){
		arr[currentSize] = 18;
		currentSize++;
	}

	cout << "\n";
	cout << "New array: ";

	for(int i = 0; i <= (currentSize-1); i++) {
		cout << arr[i] << " ";
	}

	if(currentSize < max){
		arr[currentSize] = 18;
		currentSize++;
	}else{
		cout << "\n";
		cout << "LIST FULL";
	}

    return 0;
}