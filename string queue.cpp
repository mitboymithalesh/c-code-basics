#include<stdio.h>
#include<string.h>
#include<stdlib.h>
# define max 5
char queue[max][80];
int front=-1;
int rear=-1;
void enqueue(char data[80])
{
      if(rear == max -1)
            printf("\nQueue is Full \n"); 
      else
      {
            rear = rear + 1;
            strcpy(queue[rear], data);
      }
}
void dequeue()
{
      if(front == rear)
            printf("\nQueue is Empty \n");
      else
      {
      		char data[80];
            front++;
            strcpy(data, queue[front]);
        	printf("\nDeleted String from Queue is : %s\n", data);
      }
}
void display()
{
	if(front==rear)
	{
		printf("String is empty ");
	}
	else
	{
		for(int i=front+1;i<=rear;i++)
		{
			printf("%s ",queue[i]);
		}
		printf("\n");
	}
}
int main()
{
	  char data[80];
      int ch,reply;
      printf("------------------------------\n");
      printf("\tMenu");
      printf("\n------------------------------");
      printf("\n 1. Insert String in a Queue");
      printf("\n 2. Delete String from a Queue");
      printf("\n 3. Display");
      printf("\n 4. Exit");
      printf("\n------------------------------\n");
      while(1)
      {
            printf("Choose operation : ");
            scanf("%d", &ch);
            switch(ch)
            {
                  case 1 : 
                        printf("\nEnter string : ");
                        scanf("%s",data);
                        enqueue(data);
                        break;
                  case 2 : 
                        dequeue();
                        break;
                  case 3 : display();break;
                  case 4 : exit(0);
                  default: printf("Invalid operation \n");
            }
      }
      return 0;
}
