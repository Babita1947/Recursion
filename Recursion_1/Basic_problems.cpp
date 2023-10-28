#include<iostream>
using namespace std;

// 1. print your Name 5 times using recursion

void printName(int cnt,int n)
{
    if(cnt>n)
       return;
    cout<<"Babita"<<"\n";
    printName(cnt+1,n);
}

// 2. print linearly from 1 to N using recursion
void printOnetoN(int cnt,int n)
{
    if(cnt>n)
      return ;
    cout<<cnt<<endl;
    printOnetoN(cnt+1,n);
    
}

// 3. print from N to 1 using recursion
void printNtoOne(int cnt,int n)
{
    if(cnt<1)
      return ;
    
    cout<<cnt<<endl;
    printNtoOne(cnt-1,n);
}

// 4. Print linearly from 1 to N (But by Backtrack)
void printN(int i,int n)
{
    if(i<1)
      return;
    printN(i-1,n);
    cout<<i<<endl;
}

// 5. Print linearly from N to 1 (But by Backtrack)
void printReverseN(int i,int n)
{
    if(i>n)
      return;
    printReverseN(i+1,n);
    cout<<i<<endl;

}

int main()
{
    int n,i=1;
    cout<<"Enter a number : ";
    cin>>n;
    printReverseN(i,n);

    // printNtoOne(n,n);
    // cout<<endl;

    //printName(cnt,n);
    
    // printOnetoN(cnt,n);
    // cout<<endl;
    return 0;
}