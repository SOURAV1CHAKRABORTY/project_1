#include<stdio.h>
#include<malloc.h>

struct node
{
  int data;
  struct node *next;
};

struct node *start=NULL;

void main()
{
struct node *new_node,*ptr;
  int num;
  printf("\n Enter -1 to end");
  printf("\n Enter the data :");
  scanf("%d",&num);

  while(num != -1)
  {

   new_node=(struct node *)malloc(sizeof(struct node));

new_node->next=NULL;
   new_node->data=num;

   if(start==NULL)
   {
     
     start=new_node;
     ptr=start;
   }
   else
   {

     ptr->next=new_node;
     ptr=new_node;
     
    }
    printf("\n Enter the data :");
    scanf("%d",&num);
   }

 ptr=start;

  while(ptr != NULL)
  {

    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }

  printf("\nEnter the data to be inseted at the beginning: ");
  scanf("%d",&num);
  new_node = (struct node *)malloc(sizeof(struct node *));
  new_node->next=NULL;
  new_node->data=num;
  new_node->next = start;
  start = new_node;

  ptr=start;

  while(ptr != NULL)
  {

    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }
  int num1;
  printf("Enter the new data to be inserted: ");
  scanf("%d",&num);
  printf("Enter the existing data to enter the element before that: ");
  scanf("%d",&num1);
  new_node = (struct node *)malloc(sizeof(struct node *));
  new_node->next=NULL;
  new_node->data=num;

  while(ptr->next->data!=num1)
  {
    ptr = ptr->next;
  }
  

 
  new_node->next=ptr->next;
  ptr->next=new_node;

 ptr=start;

  while(ptr != NULL)
  {

    printf("\t %d",ptr->data);
    ptr=ptr->next;
  }
}