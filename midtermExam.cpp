#include <iostream>
#include <string>

using namespace std;

int main(){
    int list_size; 
    cout << "Enter Movie list size: ";
    cin >> list_size;

    string movie_list[list_size] = {};
    
    for(int i = 0; i <= list_size - 1; i++){
        cout << "Enter Movie title: ";
        cin >> movie_list[i];
    }
    
    void showAll() {
        for(int i = 0; i <= list_size - 1; i++){
            cout << i+1 << ". " << movie_list[i] << endl;
    }
    }
    

}