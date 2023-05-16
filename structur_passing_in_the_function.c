#include<stdio.h>
#include<string.h>
struct employeee
{
    int roll_no;
    int code;
    char name[20];
};
void show(struct employeee emp){
    printf("the code of employee is: %d\n",emp.code);
    printf("the  name of employee is:%s\n ",emp.name);
    printf("the roll no of employee is:%d\n ",emp.roll_no);
}

int main(){
    struct employeee e1;
    struct employeee *ptr;
    ptr=&e1;
    ptr->code=101;
strcpy(ptr->name,"Mudit");
ptr->roll_no=121;
 show(e1);
    return 0;
}