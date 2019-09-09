#include<stdio.h>
#define max 50
void push();
void pop();
void display();
int stack[max],top=-1,item;
void main()
{int ch;
do
{printf("\n\n\t 1. push \n 2.pop \n 3.display \n 4. exit\n");
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{case 1: push(); break;
case 2: pop(); break;
case 3: display(); break;
case 4: exit(0);
default: printf("\n invalid choice");
}
}
while(ch!=4);

}

void push()
{if(top==max-1)
printf("\n stack overflow");
else
printf("\n\n enter the item");
scanf("%d",&item);
top++;
stack[top]=item;
printf("\n\n item inserted=%d",item);

}
void display()
{int i;
if(top==-1)
printf("\n\n stack empty");
else
for(i=top;i>=0;i--)
printf("\n %d",stack[i]);

}

void pop()
{if (top==-1)
printf("stack is empty");
else 
item=stack[item];
top--;
printf("\n\n items is deleted=%d",item);
}


