#include <iostream>

using namespace std;

int main() {
    int maxResult = 20; 
	int maxA = 10; 
	int na = 4;
    int lista[maxA] = {1, 2, 3, 4}; 
	int maxB = 10;
	int nb = 3;  
    int listb[maxB] = {5, 6, 7}; 
    int result[maxResult]; 
    int resultSize = 0; 

	cout << "List A: ";

	for(int i = 0 ; i < na; i++){
		cout << lista[i] << " ";
	}

	cout << "\n";
	
	cout << "List B: ";

	for(int i = 0 ; i < nb; i++){
		cout << listb[i] << " ";
	}

        for (int i = 0; i < na; i++) {
            result[i] = lista[i];
            resultSize++;
        }
        
        for (int i = 0; i < nb; i++) {
            result[resultSize] = listb[i];
            resultSize++;
        }

	cout << "\n";
    cout << "Result: ";

	for(int i = 0 ; i < resultSize; i++){
		cout << result[i] << " ";
	}

	return 0;
}
