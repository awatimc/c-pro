#include<stdio.h>
#include<conio.h>
#define MAX 5
void insert();
void del();
void display();
void exit();
int front=0,rear=-1,q[MAX];
void main()
{
	int s;
                       printf("\n Queue Operation : ");
	clrscr();
	do
	{
		printf("\n 1.Insert\t2.Delete\t 3.DISPLAY\t 4.EXIT\n Enter your choice : ");
		scanf("%d",&s);
		switch(s)
		{
			case 1:insert();break;

			case 2:del();break;

			case 3:display();break;

			case 4:exit();break;
		}
	}while(s!=4);
	getch();
}
void insert()
{
	int val;
	if(rear==MAX-1)
	{
		printf("\n Queue is full : ");
	}
	else
	{
		printf("\n Insert new element : ");
		scanf("%d",&val);
		rear=rear+1;
		q[rear]=val;
	}
}
void del()
{
	if(front>rear)
	{
		printf("Queue is empty : ");
	}
	else
	{
		printf("\n deleted element=%d",q[front]);
		front=front+1;
	}
}
void display()
{
	int i;
	if(front>rear)
	{
		printf("queue is empty : ");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",q[i]);
		}
	}
}



