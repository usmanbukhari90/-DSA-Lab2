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
void testunSortedArray(){

    int arr[5] = {1, 2, 6, 4, 2};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testunSortedArray passed" << endl;
    
}
void testduplicateArray(){

    int arr[5] = {1, 2, 2, 4, 5};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testduplicateArray passed" << endl;
    
}

void testsinglyArray(){

    int arr[1] = {5};
    bool result = isSorted(arr,1);
    assert(result==true);
    cout << "testsinglyArray passed" << endl;
    
}

void testemptyArray(){

    int arr[0] = {};
    bool result = isSorted(arr,0);
    assert(result==true);
    cout << "testemptyArray passed" << endl;
    
}

void testdecendingArray(){

    int arr[5] = {5,4,3,2,1};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testdecendingArray passed" << endl;
    
}

void testnegativeArray(){

    int arr[5] = {-5,-4,-3,-2,-1};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testnegativeArray passed" << endl;
    
}

void testmixedArray(){

    int arr[5] = {-5,6,-3,5,-1};
    bool result = isSorted(arr,5);
    assert(result==true);
    cout << "testmixedArray passed" << endl;
    
}


int main(){

   testSortedArray();
   testduplicateArray();
   testsinglyArray();
   testnegativeArray();
   testemptyArray();
   testunSortedArray();
   testdecendingArray();
   testmixedArray();

    return 0;
}