#include<bits/stdc++.h>
using namespace std;

int main () {
 
int p;
cout<<"enter no. of process :";
cin>>p;
int bt[p];
for(int i = 0; i<p; i++) {
    cout<<"P"<<i+1<<"Burst time :";
    cin>>bt[i];
}
int nbt[p];
for(int i=0; i<p; i++) {
    nbt[i] = bt[i];
}
sort(nbt,nbt+p);
int wt = 0;
int tat = 0;
int c = 0;
float avg = 0;
float avgwt = 0;

cout<<"\nProcess\t\tBurst Time\t\tCompletion Time\t\tWaiting Time\t\tTurnaround Time "<<endl;

for(int i = 0; i<p; i++) {
    for(int j = 0; j<p; j++) {
        if(nbt[i] == bt[j]) {
            c = c + nbt[i];
            tat = c;
            avg = avg + tat;
            wt = tat-nbt[i];
            avgwt = avgwt + wt;
            cout<<"p"<<j+1<<"\t\t\t"<<nbt[i]<<"\t\t\t"<<c<<"\t\t\t"<<wt<<"\t\t\t"<<tat<<endl; 
        }
    }
}
cout<<"\n\nAverage Turnaround Time :"<<avg/p;
cout<<"\nAverage Waiting Time :"<<avgwt/p;
return 0;
}