#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    for (int i =1; i <= 5; i++) {
        std::cout << i*2 << " " ;
    }

    std::cout << std:: endl << arrSize << std::endl;

    return 0;
}