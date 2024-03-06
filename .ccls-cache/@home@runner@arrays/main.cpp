#include <iostream>
#include <iostream>
using namespace std;
int main() {
  int m,n;
  cout<<"Enter size of arr1 : ";cin>>m;
  cout<<"Enter size of arr2 : ";cin>>n;
   
  int arr1[m];
  int arr2[n];
  int result[m+n];
  int j=0,k=0;
  cout<<"Enter element of array 1 : ";
  for(int i=0;i<m;i++){
    cin>>arr1[i];
  } 
  cout<<"Enter element of array 2 : ";
  for(int i=0;i<n;i++){
    cin>>arr2[i];
  } 
  int i=0;
  for(;i<m+n-1;i++){
 
   if(arr1[j]<arr2[k]){
     result[i]=arr1[j];j++;
   }
  else  
   {
     result[i]=arr2[k];k++;
   }

  }
  
  
      
    
 while(j<m){
   result[i]=arr1[j];
    i++;j++;
}
 while(k<n){
   result[i]=arr2[k];
    i++;k++;
 }
  cout<<"merge array ";
  for(int i=0;i<m+n;i++){
    cout<<result[i]<<" ";
  } 
}