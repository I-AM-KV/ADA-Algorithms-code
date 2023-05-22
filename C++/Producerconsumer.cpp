
#include<iostream>
using namespace std;
 int item,c=0;

 int n,in=0,out=0,choice;
  
void producer(int buffer[],int n){
  
    if(c==n){
        cout<<"Buffer is full"<<endl;
    }
    else{
    cout<<"Produce item \n";
    cin>>item;
    buffer[in]=item;
    in=(in+1)%n;
    c++;
    }
    cout<<"Item in buffer\n";
    for(int i=0;i<c;i++)
    cout<<buffer[i]<<" ";
    cout<<endl;
}
void consumer(int buffer[],int n){
    
       if(c==0){
        cout<<"Buffer is empty\n";
       }
       else{
       item=buffer[out];
       out=(out+1)%n;
       cout<<"Item consumed "<<buffer[c-1]<<endl;
       c--;
       }
        cout<<"Item in buffer\n";
    for(int i=0;i<c;i++){
        if(i==0){
            cout<<"Empty \n";
        }
        else{
    cout<<buffer[i]<<" ";}
    }

    cout<<endl;
     }
int main(){   
    cout<<"Enter buffer size"<<endl;
    cin>>n;
    int buffer[n];
    
    while(true){
   
   cout<<"Select one option : "<<endl;
   cout<<"1. Producer "<<endl<<"2. Consumer "<<endl<<"3. Exit"<<endl;
   cin>>choice;
   if(choice==1){
    producer(buffer,n);
   }
   if(choice==2){
    consumer(buffer,n);
   }
   if(choice==3){
    break;
   }  
}
return 0;
}