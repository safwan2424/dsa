#include<iostream>
using namespace std;

int pairsum(int arr[],int size,int key){
   //int ans=0;4
   
for(int i=0;i<size;i++){
    for(int j=0;j<i;j++){
        if(arr[i]+arr[j]==key){
          cout<<"Pair of target " <<arr[j] <<" "<<arr[i]<<endl;
        }
      
    }
 
    }
return 0;

}



int main(){

int n;
cin>>n;

int key;
cin>>key;
int arr[100];
int arrr[100];

for(int i=0;i<n;i++){
cin>>arr[i];
}

int f=pairsum(arr,n,key);

}