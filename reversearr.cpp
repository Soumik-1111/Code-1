#include<iostream>
using namespace std;
void reversearray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int arr[6]={2,-4,5,8,9,44};

    reversearray(arr,6);
    printarray(arr,6);
    return 0;
}