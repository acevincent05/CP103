#include <iostream>

using namespace std;

int main() {
	
	int max = 6;
	int currentSize = 5;
	int arr[max] = {9, 3, 12, 15, 6};

	cout << "Array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	for (int i = 0; i < currentSize - 1; i++) {
        for (int j = 0; j < currentSize - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

	cout << "\n";
    cout << "New array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
