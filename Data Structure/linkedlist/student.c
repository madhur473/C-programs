#include <stdio.h>
#include <stdlib.h> // for malloc

void create(int,char[],float);
void display();

struct Node
{
    int rollNo;
    char name[50];
    float percentage;
    struct Node *addr;
} *start, *curr;

int main()
{
    int c;
    start = NULL;

    do
    {
        int rollNo;
        char name[50];
        float percentage;

        printf("\nEnter Roll No: ");
        scanf("%d", &rollNo);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Percentage: ");
        scanf("%f", &percentage);

        create(rollNo, name, percentage);
        display();

        printf("\nDo you want to add next node? Press 1: ");
        scanf("%d", &c);
    } while (c == 1);

    return 0;
}

void create(int rollNo, char name[], float percentage)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->rollNo = rollNo;
    strcpy(newnode->name, name);
    newnode->percentage = percentage;
    newnode->addr = NULL;

    if (start == NULL)
    {
        start = newnode;
    }
    else
    {
        curr = start;
        while (curr->addr != NULL)
        {
            curr = curr->addr;
        }
        curr->addr = newnode;
    }
}

void display()
{
    if (start == NULL)
    {
        printf("\nLinked List is empty");
    }
    else
    {
        curr = start;
        printf("\nRoll No\tName\tPercentage\n");
        while (curr != NULL)
        {
            printf("%d\t%s\t%.2f\n", curr->rollNo, curr->name, curr->percentage);
            curr = curr->addr;
        }
    }
}

