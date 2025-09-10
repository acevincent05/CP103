#include <iostream>

using namespace std;

int main(){

    int arr[5] = {3, 6, 9, 12, 15};
	
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