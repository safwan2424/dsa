#include <iostream>
#include <algorithm>
using namespace std;
 
int binarysearch(int arr[],int n,int key){
 int start=0;
 int end=n-1;
 int mid= start +(end-start)/2;
 while(start<=end){
     if(arr[mid]==key){
      cout<<"Element found at Index  ";
      return mid;
     }
     if (key>arr[mid]){
         start=mid+1;
     }
     else{
     end=mid-1;
     
 }
 mid= start +(end-start)/2;
 }
 return -1;
}
int main()
{
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[20];
  
 
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int print=binarysearch(arr, n,key);
    cout<<print;
    return 0;
}
