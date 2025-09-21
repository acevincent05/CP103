#include <iostream>
#include <string>
#include <cstdlib> // for clearing screen

using namespace std;

string* movie_list;  // pointer for dynamic array
int list_size;
char choice;

void showAll() {
    system("cls"); // clears screen
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

int mainMenu(choice){
    char choice;
    cout << string(5, '=') << "MOVIE LIST MENU" << string(5, '=') << endl;
    cout << "[1] Insert movie at a position" << endl;
    cout << "[2] Delete movie" << endl;
    cout << "[3] Search movie" << endl;
    cout << "[4] Sort movie list" << endl;
    cout << "[5] Sort all movies" << endl;
    cout << "[0] Back to Main Menu" << endl;
    cout << "Enter choice: ";
    cin >> choice;
}

int main(){
    
    inputList();
    showAll();
    

    return 0;
}

