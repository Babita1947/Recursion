// 1. Write a recursive function to calculate sum of first n natural numbers.
#include<iostream>
int sum(int);
int fact(int);
void printN(int);
void printN_reverse(int);
void print_oddN(int);
void print_evenN(int);
void reverse_oddN(int);
void reverse_evenN(int);
void squaresN(int);
void decimaltobinary(int);
void decimaltooctal(int);
void reverse(int);
int sumN(int);
int sum_oddN(int);
int sum_evenN(int);
int sum_digits(int);
int HCF(int,int);
void printfibo(int);
int fibo(int);
int countDigits(int n);
float power(float,float);
using namespace std;
int main()
{
   float k;
   k=power(5,-3);
   cout<<"Power = "<<k;
   return 0;
}
int sum(int n)
{
    int s=0;
    if(n==1)
      return (1);
    s=n+sum(n-1);
    return s;
}

// 2. Write a recursive function to calculate factorial of n
int fact(int n)
{
    int m;
    if(n==0)  //base case
      return (1);
    m=n*fact(n-1);
    return m;
}

// 3. print n natural numbers
void printN(int n)
{
    if(n==0)
      return;
    printN(n-1);
    cout<<n<<" ";
}

// 4. print n natural numbers in reverse order.
void printN_reverse(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        printN_reverse(n-1);
    }
}

// 5. print odd natural numbers.
void print_oddN(int n)
{
   if(n>0)
   {
    print_oddN(n-1);
    cout<<2*n-1<<" ";
   }
}

// 6. print even natural numbers.
void print_evenN(int n)
{
   if(n>0)
   {
    print_evenN(n-1);
    cout<<2*n<<" ";
   }
}

// 7. print odd natural numbers in reverse order.
void reverse_oddN(int n)
{
   if(n>0)
   {
    cout<<2*n-1<<" ";
    reverse_oddN(n-1);
   }
}

// 8. print even natural numbers.
void reverse_evenN(int n)
{
   if(n>0)
   {
    cout<<2*n<<" ";
    reverse_evenN(n-1);
   }
}

// 9. print squares of first n natural numbers
void squaresN(int n)
{
    if(n>0)
    {
        squaresN(n-1);
        cout<<n*n<<" ";
    }
}

// 10. print decimal to binary of a given number
void decimaltobinary(int n)
{
    if(n>0)
    {
        decimaltobinary(n/2);
        cout<<n%2;
    }
}

// 11. print decimal to octal of a given number
void decimaltooctal(int n)
{
    if(n>0)
    {
        decimaltooctal(n/8);
        cout<<n%8;
    }
}

// 12. print reverse of a given number
void reverse(int n)
{
    if(n>0)
    {
        cout<<n%10;
        reverse(n/10);
    }
}

// 13. sum of natural numbers
int sumN(int n)
{
    int s;
    if(n==1)
       return (1);
    s=n+sum(n-1);
    return s;
}

// 14. sum of odd natural numbers
int sum_oddN(int n)
{
    int s;
    if(n>0)
    {  
        s=(2*n-1)+sum(n-1);
        return s;
    }
}

// 15. sum of even natural numbers
int sum_evenN(int n)
{
    int s;
    if(n>0)
    {
        s=2*n+sum_evenN(n-1);
        return s;
    }
    
}

// 16. Sum of digits of a given numbers.
int sum_digits(int n)
{
    int s;
    if(n>0)
    {
        s=n%10 + sum_digits(n/10);
        return s;
    }
}

// 17. Calculate HCP of two given number.
int HCF(int a,int b)
{
    if(a>b)
    {
        if(a%b==0)
           return b;
        else
           return HCF(a%b,b);
    }
    else
    {
        if(b%a==0)
           return a;
        else
           return HCF(b%a,a);
    }
}

// 18. print fibonacci series
void printfibo(int n)
{
    if(n==0)
      cout<<n<<" ";
    else
    {
      printfibo(n-1);
      cout<<fibo(n)<<" ";
    }
    
}
int fibo(int n)
{
    if(n==0 || n==1)
       return n;
    return fibo(n-1)+fibo(n-2);
}

// 19. count digits
int countDigits(int n)
{
    if(n==0)
      return 0;
    return countDigits(n/10)+1;
}

// power of a given number.
float power(float x,float y)
{
    if(y==0)
      return 1;
    if(y>0)
      return x*power(x,y-1);
    if(y<0)
      return (power(x,y+1))/x;
}