#include<iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

}
int main(){


    int number = 5;

   cout<<"Part 1"<<endl;
    analyze_pointer(&number);

    return 0;
}