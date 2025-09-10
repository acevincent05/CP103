#include <iostream>

using namespace std;

int main() {
	
	int maxA = 10; 
    int maxB = 10; 
    int maxResult = 20; 
    int lista[maxA] = {1, 2, 3, 4}; 
    int listb[maxB] = {5, 6, 7}; 
    int na = 4; 
    int nb = 3; 
    int result[maxResult]; 
    int resultSize = 0; 

	cout << "Array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

    // Check if result array can hold all elements
    if (na + nb <= MAX_SIZE_RESULT) {
        // Copy elements from lista
        for (int i = 0; i < na; i++) {
            result[i] = lista[i];
            resultSize++;
        }
        // Append elements from listb
        for (int i = 0; i < nb; i++) {
            result[resultSize] = listb[i];
            resultSize++;
        }

	cout << "\n";
    cout << "New array: ";

	for(int i = 0 ; i < currentSize; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
