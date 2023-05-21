#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, bt[20], wt[20], tat[20], avwt=0, avtat=0, i, j, index[20],ct;
    cout<<"Enter no. of process:";
    cin>>n;
    cout<<"Enter process burst time:"<<endl;
    for(i=0;i<n;i++){
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
        index[i]=i;
    }
    for(i=0;i<n;i++){
        for(j=1;j<n;j++){
            if(bt[j]<bt[i]){
                swap(bt[i],bt[j]);
                swap(index[i],index[j]);
            }
        }
    }
    wt[0]=0;
    cout<<endl<<"Process\t\tburst time\t\tcomp time\t\twait time\t\ttat"<<endl;
    for(i=0;i<n;i++){
        wt[i+1]= wt[i]+bt[i];
        tat[i]= wt[i]+bt[i];
        ct= ct+bt[i];
        avwt=avwt+wt[i];
        avtat=avtat+tat[i];
        cout<<"P["<<index[i]+1<<"]\t\t"<<bt[i]<<"\t\t"<<ct<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
    }
    cout<<endl<<"average waiting time:"<<avwt/i<<endl;
    cout<<"average turnaround time:"<<avtat/n<<endl;
    return 0;
}