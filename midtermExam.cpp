#include <iostream>
#include <string>
#include <cstdlib> // for clearing screen

using namespace std;

string* movie_list = nullptr; // dynamic array pointer
int list_size = 0;            // current number of movies

// Display the current list
void showAll() {
    system("cls"); // clears screen
    cout << "Movie List:" << endl;

    // go through every element and display each of them
    for(int i = 0; i <= list_size - 1; i++){
        cout << i+1 << ". " << movie_list[i] << endl;
    }
}

// Initialize the list
void inputList(){
    system("cls");
    cout << "Enter Movie list size: ";
    cin >> list_size;
    cin.ignore(); 

    // set the desired list size
    movie_list = new string[list_size];
    
    // ask for values until list size is occupied
    for(int i = 0; i <= list_size - 1; i++){
        cout << "Enter Movie title: ";
        getline(cin, movie_list[i]);
    }
}

// Insert movie at position
void insertMovie() {
    int positionAdd;
    string addValue;

    // ask for desired position to insert a value
    cout << "Enter position to insert (0-" << list_size << "): ";
    cin >> positionAdd;
    cin.ignore();

    // check for valid position
    if (positionAdd < 0 || positionAdd > list_size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // ask for a movie to add
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

    // show the updated list
    showAll(); 
}

// Delete movie at position
void deleteMovie() {
    int positionDel;

    // ask for position to be deleted
    cout << "Enter position to delete (0-" << list_size - 1 << "): ";
    cin >> positionDel;
    cin.ignore();

    // checks for valid position
    if (positionDel < 0 || positionDel >= list_size) {
        cout << "Invalid position!" << endl;
        return;
    }

    // create a new array smaller by 1
    string* new_list = new string[list_size - 1];

    // copy everything before the deleted movie
    for (int i = 0; i < positionDel; i++) {
        new_list[i] = movie_list[i];
    }

    // copy everything after the deleted movie
    for (int i = positionDel + 1; i < list_size; i++) {
        new_list[i - 1] = movie_list[i];
    }

    // clear old list
    delete[] movie_list;

    // transfer updated list to old list
    movie_list = new_list;

    // back to old list size
    list_size--;

    cout << "Movie deleted successfully.\n";

    // show the updated list
    showAll();
}

// Search for a movie
void searchMovie() {
    string searchValue;
    cout << "Enter movie title to search: ";
    getline(cin, searchValue);

    bool found = false;
    // check each position until value is found
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

// Sort movies alphabetically using bubble sort
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

    // show the updated list
    showAll();
}

// Display MOVIE LIST MENU
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

// Goes back to MOVIE LIST MENU by pressing enter
void back() {
    cout << "\nPress Enter to go back...";
    cin.get();  // waits for Enter
}

// Start of the program
int main() {
    inputList(); 

    bool running = true;

    // select functions 
    while (running) {
        char choice = mainMenu();  // always get fresh choice

        switch (choice) {
        case '1': // Insert
            insertMovie();
            back();
            break;

        case '2': // Delete
            deleteMovie();
            back();
            break;

        case '3': // Search
            searchMovie();
            back();
            break;

        case '4': // Sort
            sortMovies();
            back();
            break;

        case '5': // Show all
            showAll();
            back();
            break;

        case '6': // Reset list
            inputList();
            back();
            break;

        case '0': // Exit
            cout << "Exiting...";
            running = false;
            break;

        default:
            cout << "Invalid choice, try again.\n";
            break;
        }
    }

    // clean up
    delete[] movie_list;

    return 0;
}
