#include<iostream>
using namespace std;

bool isfound(int arr[],int size,int key){
    
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
cout<<"Enter the no of elements"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the Key "<<endl;
    int key;
    cin>>key;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
bool found=isfound(arr,n,key);
if(found){
    cout<<"Key is Present"<<endl;
}
else{
    cout<<"Key is not found"<<endl;
}
}