#include<iostream>
using namespace std;
int main(){
int arr[] ={21,34,35,56,76};
cout<<arr[1]<<endl;
int* x = &arr[2];
int *ptr=arr ;
cout<<x<<endl;
cout<<*ptr;
}