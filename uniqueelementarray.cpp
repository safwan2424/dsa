#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int finduniquearray(int arr[],int size,int k){
    int ctr=0;
int i=0;
int j=0;

for(i=0;i<size;i++){
  ctr=0;
  for(j=0,k=size;j<k+1;j++){
     if(i!=j){
        if(arr[i]=arr[j]){
            ctr++;
        }
     }
  }
    
   if(ctr==0){
    cout<<arr[i];
   }
}
return ctr;

}



int main(){

int n;
cin>>n;
int arr[100];
int k;
for(int i=0;i<n;i++){
cin>>arr[i];
}

int f=finduniquearray(arr,n,k);
cout<<f;
//cout<<f;
//printanarray(arr,n);
}