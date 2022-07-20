#include<iostream>
using namespace std;

int main(){
    int n1,n2;
    char operation;
    cout<<"Enter the two number:\n";
    cin>>n1>>n2;
    cout<<"Enter the operation :\n";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    case '%':
        cout<<n1%n2<<endl;
        break;           
    
    default:
        cout<<"Operator not found.";
        break;
    }
    return 0;
}