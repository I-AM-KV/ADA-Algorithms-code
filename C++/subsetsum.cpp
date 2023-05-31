#include <iostream>
using namespace std;
int s =0,k = 0,m;
// int n;
int count=0;

int w[6]; int x[6];
int r;
void print(int x[],int k){
count++;
cout<<"\n solution # "<<count<<"\n";
		for(int i=0;i<6;i++)
				cout<<x[i] <<"\t";
				
}

void sumSubset(int s,int k,int r,int m)
{
    // k=0;
  //  int w[6];
    x[k]=1;
    if(s + w[k] == m)
    {
        print(x,k);
    }
    else if(s+w[k]+w[k+1]<=m)
    {
        sumSubset(s+w[k],k+1,r-w[k],m);
    }
    if((s+r-w[k]>=m) && (s+w[k+1]<=m))
    {
        x[k]=0;
         sumSubset(s,k+1,r-w[k],m);
    }
}




int main (){
    	cout<<"Enter the set"<<endl;
    	
	for(int i=0;i<6;i++)
	{
	cout<<"enter "<<i+1<<" elements ";
	cin>>w[i];
	
	r=r+w[i];
	}
	cout<<endl<<"Sum is: "<<r<<endl;
    	cout<<"Enter the sum of subsets that you want: ";
	cin>>m;
	
    sumSubset(s,k,r,m);
    
    
	cout<<"endl";


	return 0;
}