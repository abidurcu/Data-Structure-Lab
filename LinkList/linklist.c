#include<stdio.h>


int main()
{
    while(menu()!=5);

    return 0;
}
int menu()
{
    int op;
    printf("Select Linked List Operation\n");

    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Search\n");
    printf("5. Close\n");
    printf("Input Operation:");

    scanf("%d",&op);
    if(op==1)
    {
        insert();
    }
    else if(op==2)
    {
        printf("===Delete Operation===\n");
    }
    else if(op==3)
    {
        printf("===Update Operation===\n");
    }
    else if(op==4)
    {
        printf("===Search Operation===\n");
    }
    else if(op==5)
    {
        printf("===Close Operation===\n");

    }
    else
    {
        printf("Invalid Operation Try Again");
    }
    return op;

    printf("%d",op);



}
void insert()
{
    int op;
    printf("Select Linked List Operation\n");

    printf("1. pushfront\n");
    printf("2. pushback\n");
    printf("3. pushafter\n");
    printf("4. pushbefore\n");
    printf("5. pushat\n");
    printf("6. Close\n");
    printf("Input Operation:");

    scanf("%d",&op);
    if(op==1)
    {
        printf("===pushfront Operation===\n");
    }
    else if(op==2)
    {
        printf("===pushback Operation===\n");
    }
    else if(op==3)
    {
        printf("===pushafter Operation===\n");
    }
    else if(op==4)
    {
        printf("===pushbefore Operation===\n");
    }
    else if(op==5)
    {
        printf("===pushat Operation===\n");
    }
    else if(op==6)
    {
        printf("===Close Operation===\n");

    }
    else
    {
        printf("Invalid Operation Try Again");
    }
    return op;

    printf("%d",op);



}
