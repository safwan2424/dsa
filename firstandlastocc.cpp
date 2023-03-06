#include <iostream>

using namespace std;
 int firstocc(int arr[],int n,int key){
     int start=0;
     int end =n-1;
     int ans=-1;
     int mid=start +(end-start)/2;
     while(start<=end){
         if (arr[mid]==key){
             ans=mid;
             end=mid-1;
         }
         else if(arr[mid]>key){
             end=mid-1;
         }
         else if(key>arr[mid]){
             start=mid+1;
         }
         mid=start+(end-start)/2;
     }
     return ans;
 }
 int lastocc(int arr[],int n,int key){
     int start=0;
     int end =n-1;
     int ans=-1;
     int mid=start +(end-start)/2;
     while(start<=end){
         if (arr[mid]==key){
             ans=mid;
             start=mid+1;
         }
         else if(arr[mid]>key){
             end=mid-1;
         }
         else if(key>arr[mid]){
             start=mid+1;
         }
         mid=start+(end-start)/2;
     }
     return ans;
 }


int main()
{
    int n;
    cout<<"Enter the First Array"<<endl;
    cin>>n;
    int key;
    cin>>key;
    
    int arr[50];
  
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"First occurence at index "<<firstocc(arr,n,key)<<endl;
    cout<<"Last occurence at index "<<lastocc(arr,n,key);
   
    return 0;
}