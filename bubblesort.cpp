// Bubble sort
#include <iostream>

using namespace std;


void prinnarray(int arr[],int n){
    for(int i=0;i<n;i++){
        
    
    cout<<" " <<arr[i];
    }
}


int bublesort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    
    int arr[50];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bublesort(arr,n);
   prinnarray(arr,n);

    return 0;
}
