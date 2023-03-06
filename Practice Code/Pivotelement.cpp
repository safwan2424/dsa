#include <iostream>

using namespace std;
 
 int getPivot(int arr[],int n){
     int start=0;
     int end =n-1;
   int ans=-1;
     int mid=start +(end-start)/2;
     while(start<end){
         if (arr[mid]>=arr[0]){
             start=mid+1;
           
         }
         else {
             end=mid;
         }
        
         
         mid=start+(end-start)/2;
     }
     
   return start ;
     
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
 
    cout<<"Pivot Element at  "<<getPivot(arr,n);
    cout<<endl;
   
    return 0;
}