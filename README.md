# Experiment 8



## Aim:
To study and implement C++ 2D array matrices


## Apparatus:
Vs Code, Github


## Theory:

In C++ constructors are unique member functions of a class that are automatically called when an object of the class is created. These classes act as blueprints for the objects. The object’s data members are initialized. Resources may also be allocated when required. There are some key points about costructors which are:

The name of the constructor is same as its class name and they do not have a return type. Constructors are mostly declared in the public section of the class. Multiple constructors can be defined with different parameters, this is known as overloading.

### There are mainly 3 types of constructors:

Default Constructor: A constructor which takes no arguments. It is also called a zero-argument constructor as it has no parameters.

Parameterized Constructor: A constructor that takes parameters, allowing the object to be initialized with specific values.

Copy Constructor: A constructor that initializes an object using another object of the same class. It is used for deep copying and when passing objects by value.

### Deconstructors - A destructor is also a special member function like a constructor.

Destructor destroys the class objects created by the constructor. Destructor has the same name as their class name preceded by a tilde (~) symbol. It is not possible to define more than one destructor. The destructor is only one way to destroy the object created by the constructor. Destructor neither requires any argument nor returns any value. It is automatically called when an object goes out of scope. Destructor release memory space occupied by the objects created by the constructor.


## Code:

### 1:
```
#include<iostream>
#include<string>
using namespace std;

class Data{
    string name;
    int roll_no;
    char dept[50];
    int batch;

    public:
    Data(){
        cout<<"Name: ";
        cin>>name;
        cout<<"Roll Number: ";
        cin>>roll_no;
        cout<<"Department: ";
        cin>>dept;
        cout<<"Batch: ";
        cin>>batch;
    }
    void display(){
        cout<<endl<<"DETAILS:"<<endl<<name<<"  "<<roll_no<<"  "<<dept<<"  "<<batch<<endl;
    }
};

int main(){
    Data d1;
    d1.display();
}
```
### Output:
<img width="684" alt="Screenshot 2024-09-09 at 2 02 40 PM" src="https://github.com/user-attachments/assets/6eafae11-e1bd-4423-8798-144bac8f11ac">

### 2:
```
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
```
### Output:
<img width="692" alt="Screenshot 2024-09-09 at 2 07 17 PM" src="https://github.com/user-attachments/assets/5acc36fe-e148-4c90-b36a-f3f7f2d88ed4">

### 3:
```
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
```
### Output:
<img width="691" alt="Screenshot 2024-09-09 at 1 57 34 PM" src="https://github.com/user-attachments/assets/a5091bbb-e507-4387-9a82-2cb272006542">

### 4:
```
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
```
### Output:
<img width="682" alt="Screenshot 2024-09-09 at 2 13 44 PM" src="https://github.com/user-attachments/assets/3128ea0c-7905-4a30-871d-a7b4384fbc13">

## 5:
```
#include<iostream>
#include<string.h>
using namespace std;

class student
{
    int rn;
    char n[50];
    float avg = 0;
    public:
    student(int,char[],float);

    student(student &t)
    {
        rn=t.rn;
        strcpy(n,t.n);
        avg=t.avg;
    }
    void display();

};

 student::student(int rno,char na[],float av)
 {
    rn=rno;
    strcpy(n,na);
    avg=av;
 }

void student::display()
 {
    cout<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Average: "<<avg<<" %"<<endl;
 }

int main()
{
    student s1(155,"yaman",93.7);
    s1.display();

    student yaman(s1);
    yaman.display();

    return 0;
}
```
### Output:
<img width="398" alt="Screenshot 2024-09-09 at 2 23 20 PM" src="https://github.com/user-attachments/assets/3ca8b044-8183-4cb0-b72a-02bad80fc6c9">

## 6:
```
#include<iostream>
using namespace std;
int count=0;

class destruct{
public:
destruct()
{
  count++;
  cout<<"No. of objects created:"<<count<<endl;
}
~destruct()
{
  count--;
  cout<<"No. of objects destroyed:"<<count<<endl;
}
};

int main()
{
destruct aa,bb,cc;
{ destruct dd;
}
return 0;
}
```
### Output:
<img width="350" alt="Screenshot 2024-09-09 at 2 28 36 PM" src="https://github.com/user-attachments/assets/a06d9cf5-3387-465a-9d1f-9a5c05ef9ec9">


## Conclusion:
This program helps us understand how constructors and deconstructors work in C++. These constructors and deconstructors which are members functions of a class help us understand how these classes work.
