#include <iostream>

using namespace std;

int main(){

    int arr[] = {3, 6, 9, 12, 15};
	
	int byteSize = sizeof(arr); 
    int size = sizeof(arr) / sizeof(arr[0]); 

	cout << byteSize << endl;
	cout << size << endl;

	cout << "Old array: ";

	for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}

    arr[0] = 2;

	cout << "\n" << endl;
    cout << "New array: ";

    for(int i=0; i<4; i++){
		cout << arr[i] << " ";
	}
    

    return 0;
}