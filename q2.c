#include < stdio.h>
#include < conio.h>
#include < malloc.h>
#include < process.h>
#include < ctype.h>

struct linear_queue
{
    int info;
    struct linear_queue *next;
}*front,*rear,*newnode,*ptr;

void menu();
void display();
int underflow();
void enqueue(int);
void dequeue();

void main()
{
    clrscr();
    menu();
}

void menu()
{
    int choice,item;
    printf("MENU");
    printf("\n1. Insert into the queue");
    printf("\n2. Delete from queue");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            clrscr();
            printf("\nEnter the item tobe inserted: ");
            scanf("%d",&item);
            enqueue(item);
            clrscr();
            printf("\nAfter inserting queue is:\n");
            display();
            getch();
            clrscr();
            menu();
            break;
        case 2:
            clrscr();
            if(underflow()==1)
            {
                dequeue();
                if(underflow()==1)
                {
                    printf("\nAfter deletion queue is:\n");
                    display();
                }
            }
            getch();
            clrscr();
            menu();
            break;
        case 3:
            clrscr();
            if(underflow()==1)
            {
                printf("The queue is:\n");
                display();
            }
            getch();
            clrscr();
            menu();
            break;
        case 4:
            exit(1);
        default:
            clrscr();
            printf("Your choice is wrong\n\n");
            menu();
    }
}

int underflow()
{
    if((front==NULL)&&(rear==NULL))
    {
        printf("\nQueue is empty");
        return(0);
    }
    else
    {
        return(1);
    }
}

void enqueue(int item)
{
    newnode=(struct linear_queue*)malloc(sizeof(struct linear_queue));
    newnode->info=item;
    if((front==NULL)&&(rear==NULL))
    {
        front=newnode;
        rear=newnode;
        newnode->next=NULL;
    }
    else
    {
        rear->next=newnode;
        newnode->next=NULL;
        rear=newnode;
    }
}

void dequeue()
{
    if(front==rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        front=front->next;
    }
}

void display()
{
    int i;
    ptr=front;
    i=1;
    while(ptr!=NULL)
    {
        printf("\nNode %d : %d",i,ptr->info);
        ptr=ptr->next;
        i++;
    }
}