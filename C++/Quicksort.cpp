#include<iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int Partition(int arr[], int m, int p)
{
    int v = arr[m], i = m, j = p;
    do{
        do{
            i = i+1;
        }while(arr[i]<=v);
        
        do{
            j = j-1;
        }while(arr[j] > v);
        
        if(i<j){
         swap(arr,i,j);   
        }
 }while(i<j);
 
    arr[m] = arr[j];
    arr[j] = v;
    return j;
}

void QuickSort(int arr[], int p, int q)
{
    if(p<q)
    {
        int j = Partition(arr, p, q+1);
        QuickSort(arr, p, j-1);
        QuickSort(arr, j+1, q);
        
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
   int arr[n];
   
   cout<<"enter element in array"<<endl;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   cout<<"array is"<<endl;
   print(arr,n);
   cout<<"sorted array"<<endl;
    QuickSort(arr, 0, n-1);
    print(arr,n);
    return 0;
}