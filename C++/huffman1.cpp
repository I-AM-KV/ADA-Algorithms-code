#include<bits/stdc++.h>
 using namespace std;
 int main()
{
    string s;
    
      cin>>s;
      
      map<char , int >m;
      
         map<char , int >::iterator itr;
       
      for(long i=0;i<s.length();i++)
        m[s[i]]++;
        
        for(itr=m.begin();itr!=m.end();itr++)
          cout<<itr->first<<" - "<<itr->second<<endl;

while(m!=1){
  for(int i=0;i<=m;i+=){
    for(int j=i+1;j<=m;j++){
      if(a[i]<=a[j]){
        int temp=a[i];
        a[i]=a[j];
      }
    }
  }
}
       //cout<<m[a]; 
        
}