#include<iostream>
#include<stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int minnumber(int arr[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
return min;

}


int main(){
    int n;
    cin>>n;
    int arr[100];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
cout<<"Minimum number in an Array"<<endl;
cout<<minnumber(arr,n);

}