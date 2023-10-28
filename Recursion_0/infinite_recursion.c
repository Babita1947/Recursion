#include<stdio.h>
void f1(); //Declaration of function
int main(){
    f1();
    return 0;
}

void f1()
{
    printf("Hello");
    f1();
    printf("Bye");
}