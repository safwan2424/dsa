//Selection Sort
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<" " <<arr[i];
    }
}
void selectionsort(int arr[],int n){
    int MIN_IN;
    int i=0;
    int j;
    for(int i=0;i<n;i++){
        MIN_IN=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[MIN_IN]){
                swap(arr[j],arr[MIN_IN]);
            }
        }
    }
  
}

int main()
{
int n;
cin>>n;
int arr [50];
cout<<"Enter the Unsorted Array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
selectionsort(arr,n);
printArray(arr,n);
    return 0;
}
