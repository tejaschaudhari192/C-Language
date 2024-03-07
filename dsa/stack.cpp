// Date : --/--/23

#include <iostream>
using namespace std;
int stack[5];
int top = -1;
void push()
{
	int v;
	if ((top + 1) == 5)
	{
		cout << "full" << endl;
		return;
	}
	else
		cout << "enter num : ";
	cin >> v;
	top++;
	stack[top] = v;
}

void pop()
{
	if (top == -1)
		cout << "underflow" << endl;
	else
	{
		cout << stack[top];
		top--;
	}
}

void show()
{
	if (top == -1)
		cout << "Empty..." << endl;
	for (int i = top; i >= 0; i--)
		cout << stack[i] << endl;
}
int main()
{
	int menu;
	char is = 'y';
	while (is == 'y')
	{
		cout << "enter 1 for push 2 for pop and 3 for display : ";
		cin >> menu;
		switch (menu)
		{
		case 1:
			push();
			break;

		case 2:
			pop();
			break;

		default:
			show();
			break;
		}
		// cout << "y to repeat...";
		// cin >> is;
	}

	// Coded by Tejas
}