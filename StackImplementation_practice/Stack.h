#pragma once
#include <iostream>
#include <string>
using namespace std;
class Stack {
private:
	int top;
	int *arr;
	int stack_max;
public:
	Stack(int max) {
		stack_max = max;
		top = -1;
		arr = new int[max];
		for (int i = 0; i < stack_max; i++) {
			arr[i] = 0;
		}
	}

	bool isEmpty() {
		if (top == -1)
			return true;
		else
			return false;
	}

	bool isFull() {
		if (top == stack_max-1)
			return true;
		else
			return false;
	}

	void push(int val) {
		if (isFull()) {
			cout << "Stack overflow" << endl;
		}
		else {
			top++;
			arr[top] = val;
		}
	}

	int pop() {
		if (isEmpty()) {
			cout << "Stack underflow" << endl;
			return 0;
		}
		else {
			int popVal = arr[top];
			arr[top] = 0;
			top--;
			return popVal;
		}
	}

	int count() {
		return (top + 1);
	}

	int peek(int val) {
		if (val > top) {
			cout << "Value not available" << endl;
			return 0;
		}
		else if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return 0;
		}
		else {
			return arr[val];
		}
	}

	void change(int pos, int val) {
		if (pos > top) {
			cout << "Value not available" << endl;
			return;
		}
		else if (isEmpty()) {
			cout << "Stack is empty" << endl;
			return;
		}
		else {
			arr[pos] = val;
			cout << "Value is changed at index:" << pos << endl;
		}
	}

	void displayData() {
		cout << "All values in the stack are:" << endl;
		for (int i = stack_max-1; i >= 0; i--) {
			cout << arr[i] << endl;
		}
	}
};

