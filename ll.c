#include<stdio.h>
#include<stdlib.h>
struct std
{
    int r1;
    struct std *next;
};
int append(struct std **,int);
int display(struct std *);
int main()
{
    int r1;
    struct std *head;
    head=NULL;
    do{
        printf("Enter the student roll number:\n");
        scanf("%d",&r1);
     if(r1>0)
     {
        append(&head,r1);
     }
     }while(r1>-1);
    display(head);
    return 0;
}
int append(struct std **headadd,int a)
{
struct std *temp,*new;
temp=*headadd;
new=(struct std*)malloc(sizeof(struct std));
new->r1=a;
new->next=NULL;
if(* headadd==NULL)
{
    *headadd=new;
}
else
 {
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new;
 }
return 0;
}
int display(struct std *head)
{
    printf("The students are seated in the order:\n");
    while(head!=NULL)
    {
        printf("%d ",head->r1);
        head=head->next;
    }
    return 0;
}