#include<iostream>
using namespace std;

void reversearray(int arr[],int size){
int start=0;
int end=size-1;
while(start<end){
swap (arr[start],arr[end]);
start++;
end--;
}

}
void printanarray(int arr[],int size){

    cout<<"Reverse of an array  "<<endl;
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

reversearray(arr,n);
printanarray(arr,n);
}