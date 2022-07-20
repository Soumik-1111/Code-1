// #include<iostream>
// using namespace std;

// int firstocc(int arr[],int size,int key){
//     int start =0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int ans= -1;

//     while(start<=end){
//         if(arr[mid]==key){
//             ans =mid;
//             end=mid-1;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start +(end-start)/2;
//     }
//     return ans;
// }

// int lastocc(int arr[],int size,int key){
//     int start =0;
//     int end = size-1;
//     int mid = start + (end-start)/2;
//     int ans= -1;

//     while(start<=end){
//         if(arr[mid]==key){
//             ans =mid;
//             start=mid+1;
//         }
//         if(key>arr[mid]){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start +(end-start)/2;
//     }
//     return ans;
// }
// int main(){
//     int even[9]={1,2,2,2,2,2,3,4,7};
//     int odd[5]={1,3,5,7,9};

//     cout<<"The first occ is "<< firstocc(even,9,2);
//     cout<<"\nThe last occ is "<< lastocc(even,9,2);

//     return 0;
// }


#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {//Right me jao
            s = mid + 1;
        }
        else if(key < arr[mid]) {//left me jao
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    int even[11]={1,1,2,2,2,2,2,2,3,4,7};
    int odd[5]={1,3,5,7,9};

    int diffocc=lastOcc(even,11,2)-firstOcc(even,11,2)+1;

    cout<<"The first occ is "<< firstOcc(even,11,2);
    cout<<"\nThe last occ is "<< lastOcc(even,11,2);

    cout<<"\nThe total no of occ is "<<diffocc;
    
    return 0;
}