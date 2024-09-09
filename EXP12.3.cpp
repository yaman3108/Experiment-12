#include<iostream>
using namespace std;

class Data{
    int r_no;
    char name[50];
    int batch;
    public:
    Data();
    void display();
};
Data::Data(){
    cout<<"Enter name, roll number and batch: ";
    cin>>name>>r_no>>batch;
}
void Data::display(){
    cout<<endl<<"Details: "<<endl<<name<<"  "<<r_no<<"  "<<batch;
}

int main(){
    Data d3;
    d3.display();
}
