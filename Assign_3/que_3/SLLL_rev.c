#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node; 
node* head =NULL;
node* create_node();
void add_first(int data);
void add_last(int data);
void display_list();
void add_pos(int pos, int data);
void delete_last();
int count_nodes();
void delete_first();
void delete_pos(int pos);
void rev_list();


int main(){

    add_first(30);
    add_first(20);
    add_first(10);

    display_list();

    add_last(40);
    add_last(50);
    add_last(60);

    display_list();

    add_pos(3,25);

    display_list();

    delete_last();
     
    display_list();

    delete_first();

    display_list();
    add_first(10);

    delete_pos(3);
    display_list();

    rev_list();
    display_list();


    printf("No. of nodes = %d\n",count_nodes());


    return 0;
}

node* create_node(){
    node* new_node = (node*) malloc(sizeof(node));
    new_node->data = 0;
    new_node->next = NULL;
    return new_node;
}
void add_first(int data){
    node *ptr = create_node();
    ptr->data = data;
    
        if(head==NULL)
           head = ptr;
    
    else{
        ptr->next = head;
        head = ptr; 
    }
}
void add_last(int data){
    node *ptr = create_node();
        ptr->data = data;
    if(head == NULL){
        head = ptr;
    }
    else{
        node* trav = head;
        for(int i=0; trav->next!=NULL; i++)
            trav = trav->next;

        trav->next = ptr;
    }
}
void display_list(){
    node* trav = head;
    if(head==NULL)
        printf("List is empty.!\n");
    else{
        printf("Head");
        for(int i=0; trav!=NULL; i++){
            printf("->%d",trav->data);
            trav= trav->next;
        }
        printf("\n");
    }
}
void add_pos(int pos, int data){
    node *ptr = create_node();
    ptr->data = data;

    if(head==NULL)
        add_first(data);
    else{
        node* trav = head;
        for(int i=1; i<pos-1; i++){
            trav = trav->next;
        }
        ptr->next = trav->next;
        trav->next = ptr;
    }    
}
void delete_last(){
    node*trav = head;

    if(head==NULL)
        printf("List is empty..!\n");
    else{
        while(trav->next->next != NULL){
            trav =  trav->next;
        }
        node* temp = trav->next;
        trav->next = NULL;
        free(temp);
        temp=NULL;
    }
    
}
int count_nodes(){
    if(head==NULL)
        printf("List is empty..!\n");
    else{
        int count = 0;
        node*trav = head;
        while(trav!=NULL){
            count++;
            trav=trav->next;
        }
        return count;
    }

}
void delete_first(){
    if(head==NULL)
        printf("List is empty.\n");
    else if(head->next == NULL){
        free(head);
        head=NULL;
    }
    else{
        node* temp = head;
        head= head->next;
        free(temp);
        temp =NULL;
    }
}
void delete_pos(int pos){
    if(head==NULL)
        printf("List is empty..!\n");
    else if(head->next==NULL)
    {    free(head);
        head = NULL;
    }
    else{
        if(pos<1 || pos> count_nodes())
            printf("Invalid position..!\n");
        else{
            node*trav = head;
            for(int i=1; i<pos-1; i++)
                trav = trav->next;
            node*temp = trav->next;
            trav->next = trav->next->next;
            free(temp);
            temp=NULL;
        }
    }

}
void rev_list(){
    node* n1 = head;
    node* n2 = head->next;
    while(n2!=NULL){
        node* n3= n2->next;
        n2->next = n1;
        n1=n2;
        n2=n3;
    }
    head->next = NULL;
    head = n1;
}