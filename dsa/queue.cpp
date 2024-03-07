// Date --/--/23

#include<iostream>
using namespace std;
int queue[5];
int rear = 0,front=0;

void push(){
	int val;
	if (rear==5)
	{
		cout<<"full"<<endl;
		return;
	}

	cout<<"Enter value : ";
	cin>>val;
	queue[rear]=val;
	rear++;
	
}

void pop()
{
	if (front==rear)
	{
		cout<<"empty"<<endl;
		rear=front=0;
	}
	else 
	front++;
	
}
void show(){
	if (front==rear)
	{
		cout<<"empty"<<endl;
	}

	for (int i = front; i < rear; i++)
	{
		cout<<queue[i]<<endl;
	}
	
}
int main()
{
	int menu;
	char is = 'y';
	while (is=='y')
	{
		cout << "enter 1 for push 2 for pop and 3 for display: ";
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
		// cout<<"y to repeat...";
		// cin>>is;
	}

	

	return 0;
// coded by Tejas
}