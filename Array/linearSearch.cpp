#include<iostream>
using namespace std;

int linearSerch(int arr[],int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main() 
{
    //Function User
    int arr[5]={2,56,77,9,8};
    int size=5;
    int target=56;
    cout<<linearSerch(arr,size,target)<<endl;

    // Normal Tarika 
    // for(int i=0;i<5;i++){
    //     if(arr[i]==target){
    //         cout<<"Target found at index: "<<i<<endl;
    //         cout<<"Target Number is "<<arr[i] <<" found at index: "<<i<<endl;

    //         // cout<<`target nimber is ${arr[i]} index is ${i}`;
    //         // cout<<"this number is :"<<arr[i]<<endl;
    //     }
    // }
    // cout<<"Target not found"<<endl;


 return 0;
}