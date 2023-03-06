#include<iostream>
using namespace std;

int tripletpairsum(int arr[],int size,int key){
   
   
for(int i=0;i<size;i++){
    for(int j=0;j<i;j++){
        for(int l=0;l<j;l++){
        if(arr[i]+arr[j]+arr[l]==key){
          cout<<"Pair of target " <<arr[l] <<" "<<arr[j]<<" " <<arr[i]<<endl;
        }
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

int f=tripletpairsum(arr,n,key);

}