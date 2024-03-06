 
#include <iostream>
using namespace std;
int main() {
     int n;cout<<"Enter size of array : ";cin>>n;
  int arr[n];
  cout<<"Enter element of array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  do{
  int x,c=0;
  cout<<"Enter target sum : ";cin>>x;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i]+arr[j]==x){
        c++;
        cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )"<<endl;
      }
    }
  }
  if(c>0){
    cout<<"yes"<<endl;
    cout<<"total pairs : "<<c<<endl;
  }
  else
    cout<<"no"<<endl;
  }while(true);
    return 0;
}
/*----------------------------------------------------*/
/*only for assending order array */
#include <iostream>
using namespace std;
int main() {
     int n;cout<<"Enter size of array : ";cin>>n;
  int arr[n];
  cout<<"Enter element of array : ";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int x;
  cout<<"Enter target sum : ";cin>>x;
  bool found = false;
  int i=0;int j=n-1;
  while(i<j){
    if(arr[i]+arr[j]==x){
       found=true;
      break;
    }
    else if(arr[i]+arr[j]>x){
      j--;
    }
    
    else if(arr[i]+arr[j]<x){
      i++;
    }
  }
    if(found==true){
      cout<<"YES";
    }
    else
      cout<<"no";
  }