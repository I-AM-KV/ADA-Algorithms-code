#include <iostream>
using namespace std;
int main(){
	int i,n,t,remain,temps=0,time_quantum;
	int wt=0,tat=0;
	cout<<"Enter the total number of process : "<<endl;
	cin>>n;
	remain=n;
	int at[n], bt[n],rt[n];
	cout<<"Enter the Arrival time, Burst time for All the processes"<<endl;
	for(i=0;i<n;i++){
	  cout<<"Arrival time for process "<<i+1<<endl;
		cin>>at[i];
		cout<<"Burst time for process "<<i+1<<endl;
		cin>>bt[i];
		rt[i]=bt[i];}
	cout<<"Enter the value of time QUANTUM:"<<endl;
	cin>>time_quantum;
	cout<<"\n Process \t Turnaround Time \t  Waiting Time \t  Completion time "<<endl;
	for(t=0,i=0;remain!=0;)
	{
		if(rt[i]<=time_quantum && rt[i]>0){
			t += rt[i];
			rt[i]=0;
			temps=1;}
		else if(rt[i]>0){
			rt[i] -= time_quantum;
			t += time_quantum;}
		if(rt[i]==0 && temps==1){
			remain--;
            cout<<"Process["<<i+1<<"]\t\t " <<t-at[i]<<"\t\t\t "<<t-at[i]-bt[i]<<"\t\t"<<t<<endl;
			cout<<endl;
			wt += t-at[i]-bt[i];
			tat += t-at[i];
			temps=0;}
		if(i == n-1)
			i=0;
		else if(at[i+1] <= t)
			i++;
		else
			i=0;
	}
	cout<<"Average waiting time "<<wt*1.0/n<<endl;
	cout<<"Average turn around time "<<tat*1.0/n<<endl;;
	return 0;
}