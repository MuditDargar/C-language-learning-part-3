#include <stdio.h>
#include <string.h>
typedef struct employeee
{
    int roll_no;
    int code;
    char name[20];
} emp;
void show(emp emp1){
    printf("the code of employee is: %d\n",emp1.code);
    printf("the  name of employee is:%s\n ",emp1.name);
    printf("the roll no of employee is:%d\n ",emp1.roll_no);
}
int main()
{
    // Declaring ptr and e1
    emp e1;
    emp *ptr;
    ptr = &e1;
    // set the member value for e1
    ptr->code = 101;
    strcpy(ptr->name, "Mudit");
    ptr->roll_no = 121;
show(e1);
    return 0;
}