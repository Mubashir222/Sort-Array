#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter your age: ";
    cin>>x;
    if (x <= 7){
        cout<<"You are child,So dont come in my party.";
    }
    else if (x <= 18 && x > 7){
    cout<<"You are boy,So dont come in my party.";
    }
    else if (x <= 22 && x > 18){
        cout<<"You are adult,So you are come in my party but you enter in my party through your id card.";
    }
    else if (x <= 40 && x > 22){
        cout<<"You are younger,So you are come in my party.";
    }
    else if(x > 40 && x < 60){
        cout<<"You are old,So you are come in my party.";
    }
    else{
        cout<<"You are so old,So i am sorry.You can't come in my party.";
    }
    return 0;
}