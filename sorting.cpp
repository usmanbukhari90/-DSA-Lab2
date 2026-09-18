#include<iostream>
#include <cassert>
using namespace std;

bool isSorted(const int* arr,const int size){

    if(size==0){
        return false;
    }

    for(int i = 0; i<size-1;i++){

        if(arr[i+1]<arr[i]){
            return false;
        }

    }
    return true;
}

int main(){

    int n=5;
    int array[n]  = {1,2,3,4,5};
    if(isSorted(array,n)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    

    return 0;
}