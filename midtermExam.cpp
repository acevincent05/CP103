#include <iostream>
#include <string>
#include <cstdlib> // for clearing screen

using namespace std;

string* movie_list = nullptr; // dynamic array pointer
int list_size = 0;            // current number of movies

void showAll() {
    system("cls"); // clears screen
    cout << "Movie List:" << endl;
    for(int i = 0; i <= list_size - 1; i++){
        cout << i+1 << ". " << movie_list[i] << endl;
    }
}

void inputList(){
    system("cls");
    cout << "Enter Movie list size: ";
    cin >> list_size;
    cin.ignore(); 

    movie_list = new string[list_size];
    
    for(int i = 0; i <= list_size - 1; i++){
        cout << "Enter Movie title: ";
        getline(cin, movie_list[i]);
    }
}

void insertMovie() {
    int positionAdd;
    string addValue;

    cout << "Enter position to insert (0-" << list_size << "): ";
    cin >> positionAdd;
    cin.ignore();

    if (positionAdd < 0 || positionAdd > list_size) {
        cout << "Invalid position!" << endl;
        return;
    }

    cout << "Enter movie to add: ";
    getline(cin, addValue);

    // create new array with +1 size
    string* new_list = new string[list_size + 1];

    // copy old elements up to position
    for (int i = 0; i < positionAdd; i++) {
        new_list[i] = movie_list[i];
    }

    // insert new element
    new_list[positionAdd] = addValue;

    // copy rest
    for (int i = positionAdd; i < list_size; i++) {
        new_list[i + 1] = movie_list[i];
    }

    // free old memory
    delete[] movie_list;

    // point to new list
    movie_list = new_list;
    list_size++;

    showAll();
}

// Delete movie at position
void deleteMovie() {
    int positionDel;
    cout << "Enter position to delete (0-" << list_size - 1 << "): ";
    cin >> positionDel;
    cin.ignore();

    if (positionDel < 0 || positionDel >= list_size) {
        cout << "Invalid position!" << endl;
        return;
    }

    string* new_list = new string[list_size - 1];

    for (int i = 0; i < positionDel; i++) {
        new_list[i] = movie_list[i];
    }

    for (int i = positionDel + 1; i < list_size; i++) {
        new_list[i - 1] = movie_list[i];
    }

    delete[] movie_list;
    movie_list = new_list;
    list_size--;

    cout << "Movie deleted successfully.\n";
    showAll();
}

// Search for a movie
void searchMovie() {
    string searchValue;
    cout << "Enter movie title to search: ";
    getline(cin, searchValue);

    bool found = false;
    for (int i = 0; i < list_size; i++) {
        if (movie_list[i] == searchValue) {
            cout << "Found at position " << i << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "Movie not found.\n";
    }
}

// Sort movies alphabetically
void sortMovies() {
    for (int i = 0; i < list_size - 1; i++) {
        for (int j = i + 1; j < list_size; j++) {
            if (movie_list[i] > movie_list[j]) {
                string temp = movie_list[i];
                movie_list[i] = movie_list[j];
                movie_list[j] = temp;
            }
        }
    }
    cout << "Movies sorted alphabetically.\n";
    showAll();
}


char mainMenu(){
    system("cls");
    char choice;
    cout << string(5, '=') << " MOVIE LIST MENU " << string(5, '=') << endl;
    cout << "[1] Insert movie at a position" << endl;
    cout << "[2] Delete movie" << endl;
    cout << "[3] Search movie" << endl;
    cout << "[4] Sort movie list" << endl;
    cout << "[5] Show all movies" << endl;
    cout << "[6] Back to Main Menu" << endl;
    cout << "[0] Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cin.ignore();
    return choice;
}

void back() {
    cout << "\nPress Enter to go back...";
    cin.get();  // waits for Enter
}

int main() {
    inputList();

    bool running = true;

    while (running) {
        char choice = mainMenu();  // always get fresh choice

        switch (choice) {
        case '1':
            insertMovie();
            back();
            break;

        case '5':
            showAll();
            back();
            break;

        case '6':
            inputList();
            back();
            break;

        case '0':
            cout << "Exiting...";
            running = false;
            break;

        default:
            cout << "Invalid choice, try again.\n";
            break;
        }
    }

    return 0;
}
 

