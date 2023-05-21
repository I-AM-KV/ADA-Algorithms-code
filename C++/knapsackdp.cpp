#include <iostream>

using namespace std;

int main()
{
    int p[5]={0,1,2,5,6};
   int wt[5]={0,2,3,4,5};
   int m=8,n=4,w=m,i,j;
   int k[5][9];
   for(int i=0;i<=n;i++){
       for(int w=0;w<=m;w++){
           if(i==0||w==0)
           k[i][w]=0;
           else if(wt[i]<=w)
           k[i][w]=max(p[i]+k[i-1][w-wt[i]],k[i-1][w]);
           else
           k[i][w]=k[i-1][w];
       }
   }
cout<<"Maximum profit is - "<<k[n][w]<<endl;
 i=n+1;j=m+1;
 cout<<"Object   selection\n";
while( i>1 && j>0){
    if(k[i][j]==k[i-1][j])
    {cout<<" "<<i-1<<"    -->   0"<<endl;
    i--;}
    else{
        cout<<" "<<i-1<<"    -->   1"<<endl;
        i--;
        j=j-wt[i];
    }
}
    
}