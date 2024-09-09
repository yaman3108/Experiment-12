#include<iostream>
using namespace std;

class Num{
    //int a=7, b=9;
    public:
    Num(int c, int d){
        if(c>d){
            cout<<c<<" is greater";
        }
        else{
            cout<<d<<" is greater";
        }
    }
};

int main(){
    Num n1(4,3);
}
