#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> groceries;
	string item;
	int choice;
	
	cout << "Enter 3 grocery items:" << endl;
	for(int i = 1; i <= 3; i++) {
		cout << "Item " << i << ":";
		cin >> item;
		groceries.push_back(item);
	}
	
	for(size_t i = 0; i < groceries.size(); i++) {
		cout << (i + 1) << ". " << groceries[i] << endl;
	}
	
	return 0;
}
