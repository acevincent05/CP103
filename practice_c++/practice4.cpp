//replace

#include <iostream>

int main() {
    int arr[4] = {1, 2, 3, 4};

    std:: cout << "Before: ";
    for (int i = 0; i <4; i++) {
        std::cout << arr[i] << " ";
    }

    arr[3] = 5;

    std:: cout << std:: endl << "After: ";
    for (int i = 0; i <4; i++) {
        std::cout << arr[i] << " ";
    }
}