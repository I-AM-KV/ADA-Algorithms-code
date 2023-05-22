#include<iostream>
using namespace std;
int n,s=0,k=0,m,r=0;int w[6],x[6];
void SumOfSub(int s,int k,int r,int m){
x[k]=1;
if(s+w[k]==m){
for(int i=0;i<k;i++)
cout<<x[i];
}
else if(s+w[k]+w[k+1]<=m){
SumOfSub(s+w[k],k+1,r-w[k],m);
}
if((s=r-w[k]>=m)&&(s+w[k+1]<=m)){
    x[k]=0;
    SumOfSub(s,k+1,r-w[k],m);
}
}
int main(){
cout<<" Enter no. Eliments in set\n";
cin>>n;
w[n],x[n];
cout<<"Enter required sum of subset\n";
cin>>m;
for(int i=0;i<n;i++){
    x[i]=0;
    cin>>w[i];
r+=w[i];
}
cout<<"sum is "<<r;
SumOfSub(s,k,r,m);
    return 0;
}