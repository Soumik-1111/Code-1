#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){

        for(int i =0;i<size;i++){
            if(key==arr[i]){
                return 1;
            }
        }
        return 0;

}
int main(){
    int arr[6]={2,-4,5,6,1,0};

    cout<<"Enter the key :"<<endl;
    int key;
    cin>>key; 

    bool found =search(arr,6,key);
    if(found){
        cout<<"The key is here"<<endl;
    }
    else
        cout<<"The key is not found"<<endl;

}