#include <iostream>
using namespace std;

int main() {
    int matrix[6][4] = {
        {1, 2, 3, 4}, 
        {2, 4, 6, 8}, 
        {3, 6, 9, 10}, 
        {4, 8, 12, 16}, 
        {2, 4, 6, 8}, 
        {3, 6, 9, 10}
    };

    for (int i = 0; i < 6; i++) {        
        for (int j = 0; j < 4; j++) {    
            cout << matrix[i][j] << " ";
        }
        cout << endl;   
    }

    return 0;
}
