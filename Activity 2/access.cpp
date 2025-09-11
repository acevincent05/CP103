#include <iostream>

using namespace std;

int main() {
	
	int arr[5] = {3, 6, 9, 12, 15};
	
	cout << "Array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

	int value = arr[0];

	cout << "\n" << endl;
	cout << "Accessed item: " << value << endl;

	
	return 0;
}
