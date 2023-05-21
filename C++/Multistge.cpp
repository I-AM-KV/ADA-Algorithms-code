#include<iostream>
using namespace std;
int main(){
    int stage;
    cout<<"Enter no. of stages in graph"<<endl;
    cin>>stage;
    int cost[10],d[10],path[5],n=8,l=8,i,min;
   int c[10][10]={
        {0,0,0,0,0,0,0,0,0},
        {0,0,2,1,3,0,0,0,0},
        {0,0,0,0,0,2,3,0,0},
        {0,0,0,0,0,6,7,0,0},
        {0,0,0,0,0,6,8,9,0},
        {0,0,0,0,0,0,0,0,6},
        {0,0,0,0,0,0,0,0,4},
        {0,0,0,0,0,0,0,0,5},
        {0,0,0,0,0,0,0,0,0}

    };
    cost[n]=0;
    for(i=n-1;i>=1;i--)
    {
       int min=999;
        for(l=i+1;l<=n;l++)
        {
            if(c[i][l]!=0 && (c[i][l]+cost[l])<min)
            {
                min=c[i][l]+cost[l];
                d[i]=l;
            }
        }
        cost[i]=min;
        
    }
    
    path[1]=1;
    path[stage]=n;
    for(i=2;i<stage;i++)
    {
        path[i]=d[path[i-1]];
    }
    cout<<"Path is:"<<endl;;
    for(i=1;i<=stage;i++){
        cout<<path[i];
        if(i<stage)
        cout<<"->";
        else
        cout<<endl;
    }
    cout<<"cost is :";
    for(i=1;i<=n;i++){
       cout<< cost[i]<<" ";
    }
    return 0;
}