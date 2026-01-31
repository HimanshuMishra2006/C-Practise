/*#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void traversal(struct node*ptr)
{
    while(ptr->next!=NULL){
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    }
    printf("element=%d\n",ptr->data);
}

// insertinbeg(int item,struct node*node)
// {
//     struct node*ptr;
//     ptr=(struct node*)malloc(sizeof(struct node));
//     node=first;
//     ptr=node;
//     node->data=item;
// }
int main(){
    struct node*start;
    start=(struct node*)malloc(sizeof(struct node));
    struct node*first;
    struct node*second;
    struct node*third;
    struct node*fourth;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    start=first;
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    struct node*fifth;
    fifth=(struct node*)malloc(sizeof(struct node));

    first->data=10;
    first->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;


    traversal(start);
    printf("after insertion in beg:\n");
    //Insertion at beginning;
    head->next=first;
    start=head;
    head->data=50;
    traversal(start);

    printf("After insertion at end:\n");
    //Insertion at end;
    fourth->next=fifth;
    fifth->data=60;
    fifth->next=NULL; 
    traversal(start);

   
}
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};


void traversal(struct node*ptr)
{
    while(ptr!=NULL){
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    }
}

void insertatbeg(struct node**head,int item){
    struct node*new;
   new=(struct node*)malloc(sizeof(struct node));
    new->next=(*head);
    new->data=item;
    (*head)=new;
    }

void insertatend(struct node**head,int item){
    struct node*new;
   new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
     if(*head==NULL){
        *head=new;
     }
    struct node*current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=new;
   }

int main(){
    struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    // head->data=10;
    // head->next=NULL;
    insertatbeg(&head,30);
    insertatbeg(&head,20);
    insertatbeg(&head,50);
    insertatend(&head,40);
    traversal(head);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
};

void insertatend( struct node**head,int item){
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    if(*head==NULL){
        *head=new;
    }else{
    struct node*current;
    current=*head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=new;
    }
}

void insertatbeg(struct node**head,int item){
    struct node*new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=*head;
    *head=new;
}

void deleteatend(struct node**head){

    if(*head==NULL){
        printf("List is empty!");
    }else{
    struct node*ptr=*head;
    struct node*seclast=NULL;

    while (ptr->next!=NULL)
    {   
        seclast=ptr;
        ptr=ptr->next;
    }
    seclast->next=NULL;
    free(ptr);
    }
}

// void deleteatbeg(struct node**head){
//     struct node*ptr=*head;
//     *head=NULL;
//     free(*head);
    
// }
void traversal(struct node*head){
    printf("Elements of the Linked List:\n");
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}

int main()
{   struct node*start;
   
    start=NULL;
    insertatend(&start,10);
     insertatend(&start,50);
     insertatbeg(&start,30);
     insertatbeg(&start,40);
    traversal(start);
    deleteatend(&start);
    printf("\n");
    traversal(start);
    printf("\n");
    // deleteatbeg(&start);
    // traversal(start);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};
void insertatend(struct node**head,int item){
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    struct node*ptr=*head;
    if(*head==NULL){
        *head=new;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=new;
        

    }
}

void insertatbeg(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    new->next=*head;
    *head=new;
}

void delatend(struct node**head)
{
    struct node*ptr=*head;
    struct node*seclast=NULL;
    while(ptr->next!=NULL){
        seclast=ptr;
        ptr=ptr->next;
    }
    seclast->next=NULL;
    free(ptr);
}

void delatbeg(struct node**head)
{
    struct node*ptr=*head;
    *head=ptr->next;
    free(ptr);
}

void insertinbet(struct node**head,int item,int pos)
{   struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    int num=1;
    struct node*ptr=*head;
    struct node*link;
    while(num!=pos-1)
    {
        ptr=ptr->next;
        num++;
    }
    new->next=ptr->next;
    ptr->next=new;
    // link=ptr->next;
    // new=link;
    // ptr->next=link;

}

void delinbet(struct node**head,int pos)
{    struct node*p1;
    struct node*p2=*head;
    int num2=1;
    while(num2!=pos-1)
    {
        p2=p2->next;
        num2++;
    }
    // p1=p2->next->next;
    struct node*delnode=p2->next;
    p2->next=delnode->next;
    free(delnode);
   
    
}
void traversal( struct node*head){
     struct node*ptr=head;
     while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
     }
}

int main()
{   struct node*head=NULL;
    insertatend(&head,1);
    insertatend(&head,2);
    insertatend(&head,3);
    insertatend(&head,4);
    // insertatend(&head,5);
    // insertatbeg(&head,6);
    // insertatbeg(&head,7);
    // delatend(&head);
    // delatbeg(&head);
    // delatbeg(&head);
    // delatend(&head);
    // delatend(&head);
    traversal(head);
    printf("after ins in bet:\n");
    insertinbet(&head,10,3);
    insertinbet(&head,50,2);
    traversal(head);
    printf("after deletion in bet:\n");
    delinbet(&head,3);
    traversal(head);
    return 0;
}
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node*insertatend(struct node*head,int item)
{
     struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=item;
    new->next=NULL;
    struct node*ptr=head;
    if(head==NULL){
        head=new;
    }
    else{
        while(ptr->next!=head){
            ptr=ptr->next;
        }
        ptr->next=new;
        new->next=head;
        

    }
    return head;
}
void traversal( struct node*head){
     struct node*ptr=head;
     do{
        printf("%d\n",ptr->data);
        ptr=ptr->next;
     }while(ptr!=head);
}
int main()
{   struct node*head;
    head=(struct node*)malloc(sizeof(struct node));
    head=insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    traversal(head);
    return 0;
}*/
// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node*next;
// };

// struct node*insertatend(struct node*head,int item)
// {
//      struct node*new;
//     new=(struct node*)malloc(sizeof(struct node));
//     new->data=item;
//     new->next=head;
//     struct node*ptr=head;
//     if(head==NULL){
//         head=new;
//     }
//     else{
//         while(ptr->next!=head){
//             ptr=ptr->next;
//         }
//         ptr->next=new;
        
        

//     }
//     return head;
// }

// void insertatend(struct node**head,int item)
// {
//      struct node*new;
//     new=(struct node*)malloc(sizeof(struct node));
//     new->data=item;
//     new->next=*head;
//     struct node*ptr=*head;
//     if(*head==NULL){
//         *head=new;
//     }
//     else{
//         while(ptr->next!=*head){
//             ptr=ptr->next;
//         }
//         ptr->next=new;
//         *head=new;
// }
// }
// void traversal( struct node*head){
//      struct node*ptr=head;
//      do{
//         printf("%d\n",ptr->data);
//         ptr=ptr->next;
//      }while(ptr!=head);
// }
// int main()
// {   struct node*head;
//     head=(struct node*)malloc(sizeof(struct node));

//     struct node*sec;
//     sec=(struct node*)malloc(sizeof(struct node));
//     head->data=1;
//     head->next=sec;
//     sec->data=2;
//     sec->next=head;
//     insertatend(&head,3);
//     //insertatend(head,3);
//     insertatend(&head,4);
//     traversal(head);
//     return 0;
// }

//DOUBLY LINKED LIST;
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;

};

void traversal(struct node*ptr)
{
   do{
        printf("element=%d\n",ptr->data);
        ptr=ptr->next;
    } while(ptr!=NULL);
    
}

void insertatend(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));
    struct node*ptr=*head;
    if(*head==NULL){
      new->data=item;
      new->next=NULL;
      new->prev=*head;
      *head=new;
    }
    else{
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        new->data=item;
        new->next=NULL;
        new->prev=ptr;
        ptr->next=new;
}
}

void insertatbeg(struct node**head,int item)
{
    struct node*new;
    new=(struct node*)malloc(sizeof(struct node));

    new->data=item;
    new->next=*head;
    new->prev=NULL;
    (*head)->prev=new;
    
}


int main()
{
struct node*start=NULL;
insertatend(&start,10);
insertatend(&start,20);
insertatend(&start,30);
insertatend(&start,40);
insertatbeg(&start,50);
traversal(start);
    

 return 0;
}