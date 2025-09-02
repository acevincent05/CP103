#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	
	vector<string> groceries;
	
	cout << "Enter grocery items" << endl;
	for(int i = 1; i <= 3; i++){
		string item;
		cout << "Enter item " << i << ": ";
		cin >> item;
		groceries.push_back(item);
	}
	
	bool running = true;
	while (running){
		cout << "\nMenu" << endl;
		cout << "1. Add item" << endl;
		cout << "2. View Grocery List" << endl;
		cout << "3. Exit" << endl;
		
		int choice;
		cout << "\nEnter option: ";
		cin >> choice;
		
		switch(choice){
			case 1:{
				if (groceries.size() < 5){
					string newItem;					
					cout << "Enter item: ";
					cin >> newItem;
					groceries.push_back(newItem);
					cout << "\nNew item added." << endl;
				} else { 
					cout << "Grocery list full." << endl;
				}
				break;
			}
			case 2: {
				for (size_t i = 0; i < groceries.size(); i++){
					cout << (i + 1) << ". " << groceries[i] << endl;	
				}
				break;
			}
			case 3: {
				running = false;
				cout << "exiting..." << endl;
				break;
			}
		} 
		
	}
	
	return 0;
}
