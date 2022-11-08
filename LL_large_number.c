#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct std
{
    int r1;
    struct std *next;
};
int append(struct std **,int);
int display(struct std *);
int large(struct std *);
int main()
{
    int r1;
    char choice[5];
    struct std *head;
    head=NULL;
    do{
        printf("Enter the value:\n");
        scanf("%d",&r1);
     if(r1>0)
     {
        append(&head,r1);
	  
     }
	printf("Do you want to add another node? Type Yes/No\n");
	scanf("%s",&choice);
     }while(strcmp(choice,"Yes")==0);
    display(head);
    large(head);
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
    printf("The elements in the linked list are ");
    while(head!=NULL)
    {
        printf("%d ",head->r1);
        head=head->next;
    }
    return 0;
}
int large( struct std *head)
{
    int large=0;
    while(head!=NULL)
    {
        if(head->r1>large)
            large=head->r1;
        head=head->next;
        
    }
    printf("\nThe largest number in the linked list is %d",large);
}