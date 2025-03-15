#include<iostream>
using namespace std;
int main() 
{
    // Sum of all array element

    int arr[4]={10,2,30,4};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    cout<<sum<<endl;
 return 0;
}