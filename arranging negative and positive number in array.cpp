#include<iostream>
#include<malloc.h>
#include<queue>
using namespace std;
int main()
{
    int *a,n,i;
    cout<<"enter the number of elements in the array"<<endl;
    cin>>n;
   // a=(int *)malloc(n*sizeof(int));
    a=new int[n];
    cout<<"enter the elements of the array"<<endl;
    for(i=0;i<n;i++)
    {
     cin>>a[i];
    }
   queue<int>sn;
   queue<int>sp;
   for(i=0;i<n;i++)
   {
       if(a[i]<0)
       {
           sn.push(a[i]);
       }
       else
       {
           sp.push(a[i]);
       }
   }
   int j=0;
   while(!sn.empty())
   {
       a[j++]=sn.front();
       sn.pop();
   }
    while(!sp.empty())
   {
       a[j++]=sp.front();
       sp.pop();
   }
    cout<<"the array is-"<<endl;
    for(i=0;i<n;i++)
    {
     cout<<a[i]<<"  ";
    }

    return 0;
}
