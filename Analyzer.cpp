#include<iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}
int main(){


    int number = 5;
    int* ivalue = new int;
    *ivalue = 6;

    cout<<"Part 1"<<endl;
    analyze_pointer(&number);

    cout<<"Part 2"<<endl;
    analyze_pointer(ivalue);

    delete ivalue;

    return 0;
}