#include<iostream>
using namespace std;

class Date{
    int d, m, y;
    public:
    Date(){
        cout<<"Date(dd): ";
        cin>>d;
        cout<<"Month(mm): ";
        cin>>m;
        cout<<"Year(yyyy): ";
        cin>>y;

        cout<<endl<<d<<"/"<<m<<"/"<<y;
    }
};

int main(){
    Date d2;
}
