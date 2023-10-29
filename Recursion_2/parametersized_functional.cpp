#include<iostream>
using namespace std;
//Parameterised method
void sum(int i,int s)
{
    if(i<1)
    {
        cout<<s;
        return ;
    }
    sum(i-1,s+i);
    
}
//Factorial of given number
int fact(int n)
{
    if(n==0)
      return 1;
    return (n*fact(n-1));
}
//Functional method
int add(int n)
{
    if(n==0)
      return 0;
    return (n+add(n-1));
}
int main()
{
    int n,ans;
    cout<<"Choose a number for the sum : ";
    cin>>n;
    ans=fact(n);
    cout<<"fact = "<<ans;
    
    return 0;
}
