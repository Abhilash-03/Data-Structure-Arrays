#include<iostream>

using namespace std;

void reversedArray(int arr[], int start, int end){
    while(start< end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;

    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // print original array list
    printArray(arr, n);

    reversedArray(arr, 0, n-1);
    
    cout<<endl;

    cout<<"Reversed array list is"<<endl;
    printArray(arr, n);

   return 0;
}