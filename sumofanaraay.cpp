#include<iostream>
using namespace std;

int sumarray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<"Sum of elements of an Array  = "<<sum<<endl;
    return sum;
}

int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
sumarray(arr,n);
}