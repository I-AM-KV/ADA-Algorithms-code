#include<iostream>
//#include<conio.h>
using namespace std;
int i,j,g[20][20],x[20],count,k=2,n;
void nextvalue(int k,int g[20][20],int n,int x[20]);
void print(int x[20])
{
count++;
cout<<"\n solution # "<<count<<"\n";
for(i=1;i<=n;i++)
{
cout<<x[i]<<"\t";
}
}

 void  hamilton(int k,int g[20][20],int n,int x[20])
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
 }
 void nextvalue(int k,int g[20][20],int n,int x[20])

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
 }
 int main()
 {
 //clrscr();
 cout<<"\n       //  HAMILTONIAN CYCLE  \\        \n ";
 cout<<"\nEnter no. of vertices\n";
 cin>>n;
cout<<"\nEnter the Adjency matrix of Graph\n";
x[1]=1;
 for(i=1;i<=n;i++)
 {
 for(j=1;j<=n;j++)
 {
 cin>>g[i][j];
 }
 }
hamilton(2,g,n,x);
cout<<"\n TOTAL NUMBER OF SOLUTION IS "<<count;
//getch();
}

