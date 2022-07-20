#include<iostream>
using namespace std;
void swap(int arr[],int size){
    for (int i = 0; i < size; i=i+2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}
void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={22,44,11,99,21,4};
    int brr[5]={0,1,2,3,4};

    swap(arr,6);
    printarray(arr,6);

    swap(brr,5);
    printarray(brr,5);

    return 0;
}