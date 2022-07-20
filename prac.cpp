#include<iostream>
#include<climits>
using namespace std;
int sum(int num1,int num2);
// int main(){
//     int rows,col;
//     cout<<"Enter the rows";
//     cin>>rows;
//     cout<<"Enter the column";
//     cin>>col;

//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=rows-i;j++){
//             cout<<" ";
//         }
//         for(int k=1;k<=i;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int row ,col,count=1;
//     cout<<"Enter the rows";
//     cin>>row;
//     cout<<"Enter thr column";
//     cin>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=i;j++){
//             cout<<count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

int main(){
    int a,b;
    cout<<"Sum is "<<sum(a,b)<<endl;
    return 0;
}

int sum(int num1,int num2){
    cin>>num1>>num2;
    int sum=num1+num2;
    return sum;
}
