#include <iostream>

using namespace std;

int main() {
	
	int max = 6;
	int currentSize = 5;
	int arr[max] = {3, 6, 9, 12, 15};
	

	cout << "Array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	int itemSearch = 6;
	int foundItem = 0;
	int position = 0;
	
	for(int i = 0; i < currentSize ; i++){
		if(arr[i] == itemSearch){
			foundItem = arr[i];
			position = i;
			break;
		}
	}
	
	cout << "\n";
	cout << "Item " << "'" << foundItem << "'" << " found at position" << " '" << position << "'" << endl;

	return 0;
}
