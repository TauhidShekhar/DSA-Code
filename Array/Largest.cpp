#include<iostream>
using namespace std;
int main() 
{
    int size=5;
    int marks[size]{54,85,21,43,34};
    int smallest=INT16_MAX;
    int largest=INT16_MIN;
    int smallestIndex=0;
    int largestIndex=0;


    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest=marks[i];
            smallestIndex=i;
        }
        if(marks[i]>largest){
            largest=marks[i];
            largestIndex=i;
        }
    }
    cout<<"Smallest is: "<<smallest<<endl;
    cout<<"Smallest index is: "<<smallestIndex<<endl;
    cout<<"largest is: "<<largest<<endl;
    cout<<"Largest index is: "<<largestIndex<<endl;
 return 0;
}