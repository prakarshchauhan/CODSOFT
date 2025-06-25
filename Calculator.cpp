#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;

    cout<<"Enter number 1"<<endl;
    cin>>a;
    cout<<"Enter number 2"<<endl;
    cin>>b;

    cout<<"Enter + for Addition"<<endl;
    cout<<"Enter - for substraction"<<endl;
    cout<<"Enter * for multiplication"<<endl;
    cout<<"Enter / for Division"<<endl;


    cout<<"Enter operation"<<endl;
    cin>>op;

    int answer;
    switch(op){
        case '+':
            answer=a+b;
            cout<<"Sum = ";
        break;
        case '-':
            answer=a-b;
            cout<<"Difference = ";
        break;
        case '*':
            answer=a*b;
            cout<<"Product = ";
        break;
        case '/':
            answer=a/b;
            cout<<"Quotient = ";
        break;
        default:
            cout<<"Invalid input";
    }

    cout<<answer;
}