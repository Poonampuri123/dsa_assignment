//Create array of employees and search employee by empid and name

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct employee{
    int empid;
    char name[10];
}employee_t;
employee_t accept_data (employee_t *ptr, int size);
int search_empid (employee_t *ptr, int size,int empid);
int search_name (employee_t *ptr, int size,char name[10]);

int main(){
    int size,id;
    char name[10];
    printf("Enter no of employees : ");
    scanf("%d",&size);
    
    employee_t *ptr = (employee_t *)malloc(sizeof(employee_t)*size);

    accept_data(ptr,size);
    printf("Enter empid to search : ");
    scanf("%d",&id);
    search_empid(ptr,size,id);
    printf("Enter name to search : ");
    scanf("%s",name);
    search_name(ptr,size,name);


    free(ptr);
    ptr = NULL;

    return 0;
}

employee_t accept_data (employee_t *ptr, int size){
    for(int i=0; i<size; i++){
        printf("Enter employee ID : ");
        scanf("%d",&ptr->empid);
        printf("Enter employee name : ");
        scanf("%s",ptr->name);
        ptr++;
    }
}

int search_empid (employee_t *ptr, int size,int empid){
    for(int i=0; i<size; i++){
        if(empid == ptr->empid){
            printf("%d.Employee ID : %d\nName : %s\n",i,ptr->empid,ptr->name);
            return 0;
        }
        ptr++;
    }
    printf("Emplyee ID : %d not found..!!\n",empid);
    
}
int search_name (employee_t *ptr, int size,char name[10]){
    for(int i=0; i<size; i++){
        if(!(strcmp(name, ptr->name))){
            printf("%d.Employee ID : %d\nName : %s\n",i,ptr->empid,ptr->name);
            return 0;
        }
        ptr++;
    }
    printf("Emplyee ID not found..!!\n");
}
