#include<bits/stdc++.h>
using namespace std;

//Reverse an array
void f(int i,int arr[],int n)
{
    if(i>=n/2)
      return ;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);

}
// Check Palindrom or not
bool f(int i,string &s)
{
    if(i>=s.size()/2)
      return true;
    if(s[i] != s[s.size()-i-1])
      return false;
    return f(i+1,s);
}
int main()
{
//    int n;
//    cout<<"Enter size of array : ";
//    cin>>n;
//    int arr[n];
//    cout<<"Elements of array : ";
//    for(int i=0;i<n;i++)
//     cin>>arr[i];
//    f(0,arr,n);

//    for(int i=0;i<n;i++)
//     cout<<arr[i]<<" ";
    
    
    string s="MADsM";
    cout<<f(0,s);

    return 0;
}