#include <iostream>
using namespace std;

int main() {
    int loopCount;
    cout << "Enter how many numbers: ";
    cin >> loopCount;

    float sum = 0;


    for (int i = 0; i < loopCount; i++) {
        int num;
        cout << "Enter your number: ";
        cin >> num;

        sum += num;
    }

    float avg = sum / loopCount;

    cout << "Sum:" << sum << endl;
    cout << "Average: " << avg << endl;
    return 0;
}
