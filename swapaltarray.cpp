#include<iostream>
using namespace std;

void swaparray(int arr[],int size){
for(int i=0;i<size;i+=2){
    if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
}

}

void printanarray(int arr[],int size){

    cout<<"Swapping of an Array   "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}
int main(){

int n;
cin>>n;
int arr[100];

for(int i=0;i<n;i++){
cin>>arr[i];
}

swaparray(arr,n);
printanarray(arr,n);
}