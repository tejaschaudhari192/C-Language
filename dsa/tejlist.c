//Date : 27-11-22
/*linked list simplified */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
} * first=NULL,*last=NULL, *last;

int flag = 0;

void add()
{
	int d;
	struct node *t;
	t = (struct node *)malloc(sizeof(struct node));
	printf("Enter element : ");
	scanf("%d",&d);
	t->data=d;
	t->next=last;
	last=t;
	if(flag == 0 )
	{
		first=t;
		flag==1;
	}

}

void display(struct node *p)
{
	if (p!=NULL)
	{
		printf("%d, ",p->data);
		display(p->next);
	}
}

int count(struct node *p)
{
	if(p!=NULL)
		return count(p->next)+1;
	else
		return 0;
}

int addition(struct node *p)
{
	if(p!=NULL)
		return addition(p->next)+ p->data;
	else
		return 0;
}

int max(struct node *p)
{
	int mx = -32700;
		while (p)
		{
			if (mx < p->data)
				mx = p->data;
			p = p->next;
		}
		return mx;
}
int search(struct node *p,int n)
{
	int pos = 0;
	while (p)
	{
		if (p->data == n)
		{
			return pos;
		}
		p=p->next;
		pos++;
	}
	return -1;
	
}

void insert(struct node *p,int x)
{
	struct node *t;
	int d;

	if (x<0 || x> count(p))
	{
		printf("Are you mad ?...");
		return;
	}
	printf("Enter data at position %d :",x);
	scanf("%d",&d);	

	t = (struct node *)malloc(sizeof(struct node));
	t->data = d;

	if(x==0)
	{
		t->next=first;
		first=t;
	}
	else
	{
		for (int i = 1; i <= x-1; i++)
			p=p->next;
		t->next=p->next;
		p->next=t;
		
		
	}
	
	
	
}

int main()
{
	int c,pos,x,d;
	char ch;
	do
	{
		printf("1 for add\n2 for display\n3 for addition\n4 length\n5 max\n6 search\n7 insert\nEnter : ");
		scanf("%d",&c);
		switch (c)
		{
		case 1:add();
			break;

		case 2:
			printf("list :\t");
			display(first);
			break;

		case 3:
			addition(first);
			printf("addition = %d",addition(first));
			break;
		
		case 4:
			printf("lenght = %d",count(first));
			break;

		case 5:
			printf("max = %d",max(first));
			break;
		
		case 6 :
			printf("Enter element to search : ");
			scanf("%d",&x);
			printf("%d",search(first,x));
			break;

		case 7:
			printf("Enter position : ");
			scanf("%d",&x);
			insert(first,x);
			break;
		
		default:
			printf("invalid menu....");
			break;
		}
		printf("\ncontinue ?y/n...");
		scanf(" %c",&ch);
	
	} while (ch == 'y');
		
	return 0;
// Coded by Tejas
}