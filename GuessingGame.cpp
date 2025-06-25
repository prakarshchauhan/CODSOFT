#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    
    int num;
    int random=rand()%100;
    do{
        cout<<"Enter a number"<<endl;
        cin>>num;
        
        if(random-num>3){
            cout<<"Guessed to low"<<endl;
        }
        else if(num-random>3){
            cout<<"Guessed to high"<<endl;
        }
        else if(random==num){
            cout<<"Guessed Correctly"<<endl;
            break;
        }
    }while(true);
        
    return 0;
}