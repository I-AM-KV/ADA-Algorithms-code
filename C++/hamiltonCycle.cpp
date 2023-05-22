#include<iostream>
using namespace std;
int count=0;int i,j,k,n,g[10][10],x[10];
//void next_value(int k,int G[10][10],int n,int x[10]){
    void next_value(int k,int g[10][10],int n,int x[20])

     {


     while(1)
 {


 x[k]=(x[k]+1)%(n+1);

 if(x[k]==0)
 {
 return;
 }

 if(g[x[k-1]][x[k]]!=0)
 {
 for(j=1;j<=n-1;j++)
 {
 if(x[j]==x[k])


 break;
 }
 if(j==k)

 if((k<n)||((k==n)&&(g[x[n]][x[1]]!=0)))

 return;
 }

 }
 }/*
         while(1){
            x[k]=(x[k]+1% n+1);
            if(x[k]==0)
            return;
            if((G[x[k-1]][x[k]])!=0){
                for(int j=1;j<=k-1;j++){
                    if(x[j]==x[k])
                    break;
                }
            }
            if(j==k)
            if(k==n||k<n && (G[x[n]][x[1]]!=0))
            return ;
         }*/
   // }
void print(int x[10]){
count++;
cout<<"No. of Hemilton Cycle"<<count;
for(int i=1;i<=n;i++){
    cout<<x[i];
}
}
void hemilton(int k,int g[10][10],int n,int x[10]){
while(1){
    next_value(k,g,n,x);
    if(x[k]==0)
        return;
    if(k==n)
        print(x);
    else
        hemilton(k+1,g,n,x);
    

}
/*void  hamilton(int k,int g[20][20],int n,int x[20])
 {

 while(1)
 {
 nextvalue(k,g,n,x);
 if(x[k]==0)
 {
 return;
 }
 if(k==n)
 {
 print(x);
 }
 else
 hamilton(k+1,g,n,x);
 }
 }*/
    
}

    int main(){cout<<"Enter no. of vertices"<<endl;
        cin>>n;
        int x[n],g[10][10];
        x[1]=1;
        cout<<"Enter Incidence matrix of graph"<<endl;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cin>>g[i][j];
        }
        }
        hemilton(2,g,n,x);
        return 0;
    }