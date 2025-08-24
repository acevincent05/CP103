#include <iostream>

int main() {
    int arr[] = {1,2,3,4,5};
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    int value = arr[2];

    std::cout<< arr[0] << std::endl;

    std::cout<< arrSize << std::endl;

    std::cout<< value << std::endl;

    std:: cout << "Before: " << " ";
    for (int i = 0; i < arrSize; i++) {
        std:: cout << arr[i] << " ";
    }

    return 0;
}