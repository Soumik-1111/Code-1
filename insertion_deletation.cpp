#include<iostream>
using namespace std;

int main(){
    int i,size,number,position;
    cout<<"Enter the array size :\n";
    cin>>size;
     int arr[size];
    cout<<"Enter the array elements :\n";
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Array before insertion :\n";
    for(i=0;i<size;i++){
        cout<<arr[i];
        cout<<" ";
    }
    cout<<"\nEnter the position & number want to insert :\n";
    cin>>position>>number;
    if(position<=0||position>size+1){
        cout<<"Invalid position.";
    }
    else{
        for(int i=size-1;i>=position-1;i--){
            arr[i+1]=arr[i];
        }
        arr[position-1]=number;
        size++;
        cout<<"Array after insertion :\n";
        for(int i=0;i<size;i++){
            cout<<arr[i];
            cout<<" ";
        }
    }
    return 0;
}

// int main(){
//     int i,size,position;
//     cout<<"Enter the array size :\n";
//     cin>>size;
//      int arr[size];
//     cout<<"Enter the array elements :\n";
//     for(i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     cout<<"Array before deletation :\n";
//     for(i=0;i<size;i++){
//         cout<<arr[i];
//         cout<<" ";
//     }
//     cout<<"\nEnter the position want to delete :\n";
//     cin>>position;
//     if(position<=0||position>size){
//         cout<<"Invalid position.";
//     }
//     else{
//         for(i=position-1;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }
//         size--;
//         cout<<"Array after deletation :\n";
//         for(i=0;i<size;i++){
//             cout<<arr[i];
//             cout<<" ";
//         }
//     }
//     return 0;
// }