#include <iostream>
using namespace std;

//function to print an ArraY 

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
              cout<<arr[i]<<"  ";

        }
        cout<<"Printing from the function"<<endl;
         

}
int main(){


    int arr[10];
   int n=10;

        for(int i=0;i<n;i++){
              cin>>arr[i];

        }

        cout<<"Printing the Element of an Array"<<endl;
 //for(int i=0;i<n;i++){
     //         cout<<arr[i]<<"  ";

       // }

     printarray(arr,n);



cout<<endl;
cout<<"Eleemnt at 4th index is " <<arr[3];
    cout<<   "  Hello MSJ ";
    cout<<"chorag";
    return 0;
}