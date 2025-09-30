/*Sanidhya singh
24070123140
ENTC B2
*/

#include<iostream>
using namespace std;

int main()
{
    float a, b, result;
    cout<<"Enter values of the first and second number : ";
    cin>>a>>b;
    try{
        if(b==0){
            throw  b;
        }
        else{
            result=a/b;
            cout<<"Answer = "<<result<<endl;
        }
    }
    catch(float n){
        cout<<"ERROR: Division by "<<n<<endl;
    }
}
/*
Output:
Enter values of the first and second number : 4 5
Answer = 0.8
Enter values of the first and second number : 4 0
ERROR: Division by 0
*/