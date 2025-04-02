#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5
void push(int);
int isFull();
int isEmpty();
int pop();
void traverse();
void peek();
int stack[CAPACITY],top=-1;
void main()
{
    int ch,item;
    while(1)
    {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. peek\n");
        printf("4. traverse\n");
        printf("5. Quiet\n");
        printf("Enter your choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
             {  
                    printf("Enter a item :");
                    scanf("%d",&item);
                    push(item);
                    break;
             }
            case 3:
                    { 
                        peek();
                        break;
                    }
            case 2:
                 {
                    item=pop();
                    if(item==0)
                    {
                       printf("stack is underflow\n");
                       break;
                    }
                    else
                     {
                         printf("Poped item : %d\n",item);
                         break;
                     }
                 }
            case 4:
                  {
                     traverse();
                     break;
                  }
            case 5:
                  {
                     exit(0);
                     break;
                  }
            default :
                     {
                         printf("Invalid input\n"); 
                         break;
                     }

        }
    }
}
void push(int ele)
{
    if(isFull())
      printf("stack is overfull\n");
    else
     {
        top++;
        stack[top]=ele;
        printf("pushed successfull\n");
     }
}
int isFull()
{
    if(top==CAPACITY-1)
      return 1;
    else
      return 0;
}
int isEmpty()
{
    if(top==0)
       return 1;
    else
       return 0;
}
int pop()
{
    if(isEmpty())
        return 0;
    else
        return stack[top--];
    
} 
void peek()
{
    if(isEmpty())
      printf("stack is underflow\n");
    else
      printf("peek element is : %d\n",stack[top]);
}
void traverse()
{
    if(isEmpty())
      printf("stack is underflow\n");
    else
     {
        int i;
        for(i=top;i>=0;i--)
         {
            printf("%d\n",stack[i]);
         }
     }
}  