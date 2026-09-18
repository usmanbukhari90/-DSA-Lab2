#include<iostream>
using namespace std;
int main(){
    const int size = 100;
    char* name = new char[size];
    cout<<"Enter your Name: ";
    cin>>name;
    int length = 0;
    while(name[length]!='\0'){
        length++;

    }

    int start = 0;
    int end = length -1;
   while(start<end){
        char temp = name[start];
        name[start]=name[end];
        name[end]=temp;
        start++;
        end--;

    }
    cout<<"Reversed Name: " <<name<<endl;
    delete[] name;
}