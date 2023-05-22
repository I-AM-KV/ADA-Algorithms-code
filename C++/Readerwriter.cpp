#include<iostream>
using namespace std;
int read_count=0;bool wrt=0;
void reader(){
read_count++;
cout<<"Reading is performed by "<<read_count<<" reader "<<endl;

}
void writer(){
wrt=true;
cout<<"Writing is performed \n";
}
int main(){
 //cout<<"Create File"<<endl;
 int n,choice;
  //  int file[n];
   // cin>>n;
    while(true){
   
   cout<<"Select one option : "<<endl;
   cout<<"1. Add Reader "<<endl<<"2. Remove Reader"<<endl<<"3. Add Writer "<<endl<<"4. Remove Writer"<<endl<<"5.Exit"<<endl;
   cin>>choice;
   
   switch (choice)
   {
   case 1:
     if(wrt==false)
    {
    reader();
    }
    else{
        cout<<"Reading cannot be performed writing in progress\n";
    }
    break;
   case 2:
   if(read_count>=1){
   cout<<"Reader "<<read_count<<" removed\n";
     read_count--;
     cout<< read_count<<" Reader performing reading\n";}
     else{
        cout<<"Reader is not present\n";
     }
    break;
   case 3:
   if(wrt==false && read_count<1){
      writer();  
    }
    else if(read_count<1){
    cout<<"Writing is in progress One Writer is already present \n";
    }
    else{
      cout<<"Writing cant be performed Reading in progress\n";
    }
    break;
   case 4:
   if(wrt==true){
   wrt=false;
   cout<<"Writer removed\n";
   }
   else{
    cout<<"Writer is not present\n";
   }
    break;
   case 5:
   break; 

   }
  /* if(choice==1){
   
   }
   if(choice==2){
   
   }
   if(choice==3){
    break;
   } */ 
}


return 0;

}