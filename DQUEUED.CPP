#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5

int Q[size],f=-1,r=-1;
void Qinsert();
void Qremove();
void RQremove();
void display();

void main()
{
	char ch;
	int x;
	clrscr();
	do
	{
		printf("\n\n----------------------------");
		printf("\n\t1. Insert Element ");
		printf("\n\t2. Delete Element ");
		printf("\n\t3. Delete Element-Right");
		printf("\n\t4. Display ");
		printf("\n\t5. Exit ");
		printf("\n------------------------------");
		printf("\nEnter Your Choice : ");
		ch=getche();
		switch(ch)
		{
			case '1':
				Qinsert();
				display();
				break;
			case '2':
				Qremove();
				display();
				break;
			case '3':
				RQremove();
				display();
				break;
			case '4':
				display();
				break;
			case '5':
				exit(0);
			default:
				printf("\n Invalid Choice : ");

		}
	}while(1);
}
void Qinsert()
{
	int x;
	if(r==size-1)
	{
		printf("\nQueue Overflow");
		return;
	}
	printf("\nEnter Value : ");
	scanf("%d",&x);
	r++;
	Q[r]=x;
	if(f==-1)
	{
		f=0;
	}

}
void Qremove()
{
	int x;
	if(f==-1)
	{
		printf("\nQueue Underflow");
		return;
	}
	x=Q[f];
	if(r==f)
	{
		r=f=-1;
	}
	else
	{
		f++;
	}
	printf("\nRemove Value : %d",x);


}
void RQremove()
{
	int x;
	x=Q[r];
	if(r==f)
	{
		r=f=-1;
	}
	else
	{
		r--;
	}
	printf("\nRemove Value : %d",x);


}

void display()
{
	int i;
	printf("\nDisplay Queue :");
	for(i=f;i<=r;i++)
	{
		printf(" :%d: ",Q[i]);
	}
}
