#include <iostream>
#include <string>

using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top; 

public:
	//constructor
	StackArray() {
		top = 1; 
	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceed the list" << endl;
			return 0;
		} 

		top++; //step 3
		stack_array[top] = element; //step 3
		cout << endl;
		cout << element << "ditambahkan(pushed)" << endl; 

		return element;
	}
		
	void pop() {
		if (empty()) { // step 1
			cout << "\nStack is empty.Cannot pop." << endl; // 1.a
			return; //1.b
		} 

		cout << "\nThe pupped element is:" << stack_array[top] << endl; //step 2
		top--; //step 3 decrement
	}

	//method for check if data is empty
	bool empty() {
		return (top == -1);
	} 

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = top; tmp >= 0; tmp--) {
				cout << stack_array[tmp] << endl;
			}
		}
	} 
};

int main() {
	StackArray obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1.Add a record to the list" << endl;
			cout << "2.Delete a record from the list" << endl;
			cout << "3.View all the records in the list" << endl;
			cout << "4.Exit" << endl;
			char ch;
			cin >> ch;
			switch (ch) { 
			case '1':
				int data;
				cout << "Masukkan data" << endl;
				cin >> data;
				obj.push(data);
				break; 
			case '2':
				obj.pop();
			case '3':
				obj.display();
				break;
			case'4': {
				return 0;
			}
			default: {
				cout << "invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}
	

