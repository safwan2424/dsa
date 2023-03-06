#include <iostream>

using namespace std;
 
 int mountarr(int arr[],int n){
     int start=0;
     int end =n-1;
   int ans=-1;
     int mid=start +(end-start)/2;
     while(start<end){
         if (arr[mid]<arr[mid+1]){
             start=mid+1;
             ans=start;
             cout<<ans;
             cout<<endl;
             cout<< "Highest element is "<< arr[start]<<endl;
         }
         else if(arr[mid]>arr[mid+1]){
             end=mid;
         }
        
         
         mid=start+(end-start)/2;
     }
     
   return 1;
     
 }


int main()
{
    int n;
    cout<<"Enter the  Array"<<endl;
    cin>>n;
    
    int arr[50];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    cout<<"Highest element at index  "<<mountarr(arr,n);
    cout<<endl;
   
    return 0;
}
