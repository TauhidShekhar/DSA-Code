#include<iostream>
using namespace std;
void changeArr (int arr[], int size){
    cout<<"in Function"<<endl;
    for(int i=0;i<size;i++){
        arr[i]=arr[i]*2;
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() 
{
    int arr[]={
      1,2,3,4
    };

    changeArr(arr,4);

    cout<<"in Main"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }

 return 0;
}