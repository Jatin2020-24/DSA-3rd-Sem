#include <bits/stdc++.h>
using namespace std;

struct Queue {
	stack<int> s1, s2;

	void enQueue(int x)
	{
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}

		s1.push(x);

		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	int deQueue()
	{
		if (s1.empty()) {
			cout << "Q is Empty";
			exit(0);
		}

		int x = s1.top();
		s1.pop();
		return x;
	}
};

int main()
{
	Queue q;
	q.enQueue(100);
	q.enQueue(200);
	q.enQueue(133);
	q.enQueue(150);
	q.enQueue(200);
	
	

	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
