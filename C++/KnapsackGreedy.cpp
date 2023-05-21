# include<iostream>
using namespace std; 
void knapsack(int n, float weight[], float profit[], float capacity,int obj[]) {
   float x[20], tp = 0;
   int i, j, u;
   u = capacity;
 
   for (i = 0; i < n; i++)
      x[i] = 0.0;
 
   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }
 
   if (i < n)
      x[i] = u / weight[i];
 
   tp = tp + (x[i] * profit[i]);
 
  cout<<"\nThe Object Selection is:- \nObject     Selection\n";
   for (i = 0; i < n; i++)
      cout<<"  "<<obj[i]<<"\t\t"<<x[i]<<endl;
 
   cout<<"\nMaximum profit is:- "<<tp;
 
}
 
int main() {
   float weight[20], profit[20], capacity;
   int num, i, j,obj[20];
   float ratio[20], temp;
 
   cout<<"\nEnter the no. of objects:- ";
   cin>> num;
 
  cout<<"\nEnter the wts and profits of each object:- \n";
   for (i = 0; i < num; i++) {
       obj[i]=i+1;
      cin>>weight[i]>>profit[i];
   }
 
   cout<<"\nEnter the capacityacity of knapsack:- ";
   cin>>capacity;
 
   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }
 
   for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
             temp=obj[j];
             obj[j]=obj[i];
             obj[i]=temp;
             
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;
 
            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;
 
            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }
 
   knapsack(num, weight, profit, capacity,obj);
   return(0);
}