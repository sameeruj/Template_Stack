// Template_Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

template  <class T>
class Stack {
private:
	T* stk;
	int size;
	int top;
	
public:
	//constructor
	Stack(int sz) {
		size = sz;
		top = -1;
		stk = new T[size];
	}
	void push(T val);
	T pop();
	void DisplayStack() {
		cout << "values in stack are as below" << endl;
		for (int i = 0; i < size; i++) {
			cout << stk[i] << endl;
		}
	}
};

template <class  T>
void Stack<T>::push(T val) {
	if (top == size - 1)
		cout << "Stack is full" << endl;
	else {
		top++;
		stk[top] = val;
	}
}

template <class T>
T Stack<T>::pop() {
	T x = 0;
	if (top == -1) {
		cout << "stack is empty" << endl;
		exit(0);
	}
	else {
		x = (T)stk[top];
		top--;
	};
	//cout << "X is " << x << endl;
	return x;
}

int main()
{
	Stack <float> s1(10);
	s1.push(4.1);
	s1.push(5.2);
	s1.push(6.3);
	s1.push(7.4);
	s1.push(8.5);
	s1.push(9.6);
	s1.push(9.7);
	s1.push(9.8);
	s1.push(9.9);
	s1.push(9.13);
	s1.DisplayStack();

	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;
	cout << "Poped stack value is " << s1.pop() << endl;

	return 0;
}

