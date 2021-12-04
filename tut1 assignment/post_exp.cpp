#include <iostream>
#include <string.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
	int top;

public:
	int a[MAX]; 

	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int peek();
	bool isEmpty();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Overflow";
		return false;
	}
	else {
		a[++top] = x;
		return true;
	}
}

int Stack::pop()
{
	if (top < 0) {
		cout << "Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int Stack::peek()
{
	if (top < 0) {
		cout << "Stack is Empty";
		return 0;
	}
	else {
		int x = a[top];
		return x;
	}
}

bool Stack::isEmpty()
{
	return (top < 0);
}

// The main function that returns value of a given postfix expression
int evaluatePostfix(char* exp)
{
	// Create a stack of capacity equal to expression size
	class Stack s;
	int i;

	// See if stack was created successfully
	// if (!s) return -1;

	// Scan all characters one by one
	for (i = 0; exp[i]; ++i)
	{
		// If the scanned character is an operand (number here),
		// push it to the stack.
		if (isdigit(exp[i]))
			s.push(exp[i] - '0');

		// If the scanned character is an operator, pop two
		// elements from stack apply the operator
		else
		{
			int val1 = s.pop();
			int val2 = s.pop();
			switch (exp[i])
			{
			case '+': s.push(val2 + val1); break;
			case '-': s.push(val2 - val1); break;
			case '*': s.push(val2 * val1); break;
			case '/': s.push(val2/val1); break;
			}
		}
	}
	return s.pop();
}

int main()
{
	char exp[] = "231*+9-";
	cout<<"Postfix Expression: "<< evaluatePostfix(exp);
	return 0;
}
