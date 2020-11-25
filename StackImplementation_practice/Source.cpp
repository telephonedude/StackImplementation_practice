#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;


int main() {
	int max;
	cout << "Enter max stacks:"<<endl<<"Max stacks:";
	cin >> max;
	Stack s1(max);
	int option, pos, val;
	for (;;) {
		cout << endl << "What operation do you want to perform?" << endl << "[1] Push" << endl << "[2] Pop" << endl << "[3] isEmpty()"
			<< endl << "[4] isFull()" << endl << "[5] peek()" << endl << "[6] count()" << endl << "[7] change()"
			<< endl << "[8] display()" << endl << "[9] Clear Screen" << endl << "[0] Quit" << endl << "Choice:";
		cin >> option;
		switch (option)
		{
		case 1:
			cout << endl << "Enter a value to put in the stack" << endl << "Value:";
			cin >> val;
			s1.push(val);
			break;
		case 2:
			cout << "Pop function called - Pop Value:" << s1.pop();
			break;
		case 3:
			if (s1.isEmpty())
				cout << "Stack is empty" << endl;
			else
				cout << "Stack is not empty" << endl;
			break;
		case 4:
			if (s1.isFull())
				cout << "Stack is full" << endl;
			else
				cout << "Stack is not full" << endl;
			break;
		case 5:
				cout << "Enter the position of the item you want to peek" << endl << "Peek position:";
				cin >> pos;
				if (s1.peek(pos)) {
					cout << "Value at pos # " << pos << " is: " << s1.peek(pos) << endl;
				}
				break;
		case 6:
			cout<<"Number of items in the stack is: "<<s1.count();
			break;
		case 7:
			cout << "Enter position:" << endl << "Pos: ";
			cin >> pos;
			cout << "Enter value" << endl << "Val: ";
			s1.change(pos, val);
			break;
		case 8:
			s1.displayData();
			break;
		case 9:
			system("cls");
			break;
		case 0:
			return 0;
		}
	}
	return 0;
}