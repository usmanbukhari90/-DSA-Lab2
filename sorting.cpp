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

void testSortedArray(){

    int arr[5] = {1, 2, 3, 4, 5};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testSortedArray passed" << endl;
    
}

int main(){

   testSortedArray();

    return 0;
}