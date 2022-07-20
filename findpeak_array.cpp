#include<iostream>
using namespace std;

int peakarr(int arr[],int size){
    int start=0;
    int end=size-1;
    int mid = start +(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid = start +(end-start)/2;
    }
    return start;
}

int main(){
    int find[4]={0,2,1,0};
    
    cout<<"The peak element index is "<<peakarr(find,4);
    return 0;
}
