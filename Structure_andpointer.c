#include<stdio.h>
#include<string.h>
    struct employee
    {
        int code;
        char name[32];
        int roll_no;
    };
int main(){
struct employee e1;
struct employee *ptr;

ptr=&e1;
 // (*ptr).code=101; orr you can also write :ptr->code =101;
 ptr->code=101;
printf("%d",e1.code);
 
    return 0;
}