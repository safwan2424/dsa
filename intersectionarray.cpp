#include<iostream>
using namespace std;

int intersectionarray(int arr[],int arrr[],int size,int k){
   //int ans=0;4
   
for(int i=0;i<size;i++){
    for(int j=0;j<k;j++){
        if(arr[i]==arrr[j]){
          cout<<arr[i]<<endl;
        }
      
    }
  //ans=ans^arr[i];
    }
return 0;

}



int main(){

int n;
cin>>n;
int k;
cin>>k;
int arr[100];
int arrr[100];

for(int i=0;i<n;i++){
cin>>arr[i];
}
for(int j=0;j<k;j++){
    cin>>arrr[j];
}
int f=intersectionarray(arr,arrr,n,k);

}