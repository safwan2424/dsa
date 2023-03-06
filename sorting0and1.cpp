#include <iostream>
#include <algorithm>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<< " " <<arr[i];
    }
}

void  sortone(int arr[],int n){
    int left=0;
    int right=n-1;
    while(left<right){
        while(arr[left]== 0 && left<right){
            left++;
        }
        while(arr[right]==1&& left<right){
       right--;
       
        }
        if (left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[20];
  
 
 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sortone(arr, n);
   printarray(arr,n);
    return 0;
}
