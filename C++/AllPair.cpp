#include<iostream>
#define I 32676
using namespace std;
int main(){
    int cost[3][3]={{0,4,11},
                    {6,0,2},
                    {3,I,0}};
    int a[3][3];
    int i,j,k;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            a[i][j]=cost[i][j];
        }
    }

    for (k=0;k<3;k++){
        for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                a[i][j] = min(a[i][k]+a[k][j],a[i][j]);
            }
        }
    }

    cout<<"ALL PAIR SHORTEST PATH : "<<endl;
    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}