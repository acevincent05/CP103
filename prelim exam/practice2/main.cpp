#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> groceries;
	
	cout << "Enter grocery items" << endl;
	for(int i = 1; i <= 3; i++){
		string item;
		cout << "Item " << i << ": ";
		cin >> item;
		groceries.push_back(item);
	}
	
	bool running = true;
	while (running){
		cout << "\nmenu" << endl;
		cout << "1. add item" << endl;
		cout << "2. show list" << endl;
		cout << "3. exit" << endl;
		
	int choice;
	cin >> choice;
	
	switch (choice) {
		case 1 : {
			if (groceries.size() < 5){
				string newItem;
				cout << "enter new item: " << endl;
				cin >> newItem;
				groceries.push_back(newItem);
				cout << "item added.";
			} 
			else {
				cout << "\ngrocery list full." << endl;
			}
			break;
		}
		
		case 2: {
			cout << "grocery list" << endl;
			for (size_t i = 0; i < groceries.size(); i++){
				cout << (i + 1) << ". "<< groceries[i] << endl;
			}
			break;
		}
		case 3: {
	
			running = false;
			cout << "exiting..." << endl;
			break;
		}
		default:
			cout << "invalid choice." << endl;
			break;
	}
		
	}
	
	return 0;
}
