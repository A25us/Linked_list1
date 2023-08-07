#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    // pt=fopen("f1.txt","w");
    struct node *newnode,*head=0,*temp;
    int choice;
    printf("....................Welcome to the List.................\n");
    do{
        printf("Enter data\n");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0){
            head=temp=newnode;
        }else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Do you want to insert\n");
        scanf("%d",&choice);

    }while(choice!=0);
    printf("\n...................Display..................\n");
    temp=head;
    while (temp!=0)
    {
        printf("%d\t",temp->data);
        // x=(char*)temp;
        // fwrite(x,3,pt);
        temp=temp->next;
    }
    return 0;
    
    

}
