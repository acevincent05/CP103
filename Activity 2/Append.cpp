#include <iostream>

using namespace std;

int main(){

	int max = 10;
	int currentSize = 5;

    int arr[max] = {3, 6, 9, 12, 15};

	if(currentSize < max){
		arr[currentSize] = 18;
		currentSize++;
	}

    return 0;
}