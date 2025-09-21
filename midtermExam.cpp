#include <iostream>
#include <string>
#include <cstdlib> // for clearing screen

using namespace std;

string* movie_list;  // pointer for dynamic array
int list_size;

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

int main(){

    inputList();
    showAll();
    

    return 0;
}

