#include<stdio.h>
void display(int);
void f1();
int f2(int);
int main()
{
  int k;
  k=f2(3);
  printf("%d ",k);
  return 0;
}
//To understand only base case
void display(int n)
{
    printf("%d ",n);
    if(n>0)
      display(n-1);
}

//To understand only base case
void f1()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a>0)
      f1();
    printf("%d ",a);  
}

int f2(int n)
{
  int s;
  if(n==1)
    return 1;
  s=n+f2(n-1);
  return (s);
}
