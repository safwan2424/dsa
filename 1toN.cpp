#include<iostream>
using namespace std;


int power (int num1,int num2){

    int ans=1;
    for(int i=1;i<=num2;i++){
        ans=ans*num1;
    }
    return ans;
}

int main(){


int a;
 int n;
 cin>>a;
    cin>>n;
int answer=power(a,n);
cout<<answer;
}