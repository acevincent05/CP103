#include <iostream>
using namespace std;

// Dummy functions for demo
char mainMenu() {
    cout << "\n=== MAIN MENU ===\n";
    cout << "5. Show all\n";
    cout << "6. Input list\n";
    cout << "0. Exit\n";
    cout << "Enter choice: ";
    char c;
    cin >> c;
    cin.ignore(); // clear just one leftover '\n'
    return c;
}

void showAll() {
    cout << "Showing all items...\n";
}

void inputList() {
    cout << "Inputting list...\n";
}

void pauseAndReturn() {
    cout << "\nPress Enter to go back...";
    cin.get();  // waits for Enter
}

int main() {
    inputList();

    bool running = true;

    while (running) {
        char choice = mainMenu();  // ask choice every loop

        switch (choice) {
        case '5':
            showAll();
            pauseAndReturn();  // waits for Enter, then menu shows again
            break;

        case '6':
            inputList();
            pauseAndReturn();
            break;

        case '0':
            cout << "Exiting...\n";
            running = false;
            break;

        default:
            cout << "Invalid choice, try again.\n";
            break;
        }
    }

    return 0;
}
