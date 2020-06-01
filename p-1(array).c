//WAP to implement following operation in array: a. Insertion,b.Deletion,c.Searching
#include<stdio.h>
#define MAX 20
void delete(int p[]);
void search(int r[]);
void main()
{
    int a[20],x,l;
    printf("enter the no. of elements you want to enter");
    scanf("%d",&l);
    printf("enter the elements of array");
    for(int i=0;i<l;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("press 1 to insert 2 to delete 3 to search");
    scanf("%d",&x);
    switch(x)
    {
        case 1: insert(a,l);
               break;
        case 2: delete(a);
               break;
        case 3: search(a);
               break;
        default :printf("wrong input");
                   break;
    }

}
void insert(int q[],int n)
{
    int temp,item,pos;
    if(n==MAX)
    {
        printf("list overflow\n");
        return;
    }
    printf("enter position for insertion :");
    scanf("%d",&pos);
    printf("enter the value :");
    scanf("%d",&item);
    if(pos>n+1)
    {
        printf("enter position less than or equal to %d\n",n+1);
        return;
    }
    if(pos==n+1)
    {
        q[n]=item;
        n=n+1;
        return;
    }
}
