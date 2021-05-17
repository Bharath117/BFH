#include<iostream>
using namespace std;

int main()

{
    int n,i,s,p,m;
    char pattern ='#';
   
 cout<<"Enter the Number"<<" ";
 cin>>n;
 if(n>100)
 { cout<<0;}
 else if(n<0)
 { cout<<0;}
 else {
     
 m  = n -1;

 
 
 for (i=1;i<=n;i++)
 
 {
     for(s=1;s<=m;s++)
     {
         cout<<" ";
     }
     m=m-1;
     for(p=1;p<=i;p++)
     {
         cout<<pattern;
     } 
   cout<<"\n";
 }
}
}