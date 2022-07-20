#include<iostream>
using namespace std;

// int main(){
// int a[2000]={4};

// for(int i=0;i<=1999;i++){
//         cout<<a[i];
// }
// }

// int main()
// {
// 	int n= 2000;
// 	int val=1;
// 	int arr[n];
// 	int i;
// 	for (i = 0; i <n ; i++){
// 		arr[i] = val;
// 	}
// 	cout<<"The array is:"<<endl;
// 	for (i = 0; i < n ; i++){
// 		cout<<arr[i];
// 	}
//     int a[100];
//     fill_n(a,100,1);
//     cout<<"The array is:"<<endl;
// 	for (int i = 0; i < 100 ; i++){
// 		cout<<a[i];
// 	}
// 	return 0;
// }

int main(){
    int n,i;
    int sum=0;
    cout<<"Enter the array size"<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the array elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];
    }
    cout<<"The sum of all elements of array is :"<<sum<<endl;
    return 0;

}