#include <iostream>
#include <string>
using namespace std;

string* movie_list;  // pointer for dynamic array
int list_size;

char mainMenu() {
    char choice;
    cout << string(5, '=') << " MOVIE LIST MENU " << string(5, '=') << endl;
    cout << "[1] Insert movie at a position" << endl;
    cout << "[2] Delete movie" << endl;
    cout << "[3] Search movie" << endl;
    cout << "[4] Sort movie list" << endl;
    cout << "[5] Show all movies" << endl;
    cout << "[0] Back to Main Menu" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore(); // make sure buffer is clean
    return choice;
}

void showAll() {
    system("cls"); // clears screen
    cout << "=== Movie List ===\n";
    for(int i = 0; i < list_size; i++){   // ✅ better to use < not <=
        cout << i+1 << ". " << movie_list[i] << endl;
    }
}

void inputList() {
    system("cls");
    cout << "Enter Movie list size: ";
    cin >> list_size;
    cin.ignore();

    movie_list = new string[list_size];
    
    for(int i = 0; i < list_size; i++){   // ✅ use < not <=
        cout << "Enter Movie title: ";
        getline(cin, movie_list[i]);
    }
}

int main() {
    inputList();  // enter movie list first

    bool running = true;
    while (running) {
        char choice = mainMenu();  // ✅ get fresh choice each time

        switch (choice) {
            case '5':
                showAll();
                break;
            case '0':
                system("cls");
                cout << "Exiting...\n";
                running = false;
                break;
            default:
                cout << "Invalid choice!\n";
                break;
        }
    }

    return 0;
}
