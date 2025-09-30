/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter age: ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Age: "<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a){
        cout<<"\nERROR: Underage! ("<<age<<")"<<endl;
    }
}
/*
output:
Enter age: 19
Age: 19
Enter age: 14
ERROR: Underage! (14)
*/

