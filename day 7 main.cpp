// problem -- 1 

#include<iostream>
using namespace std;

void updatebyvalue (int a){
    a = 500;
}

void updatebyreference(int &a){
    a = 500;
}

int main(){
    int original = 100;
    updatebyvalue(original);
    cout << original <<"\n";
    updatebyreference(original);
    cout << original;
}



// problem -- 2 
//access specifier
//private

#include<iostream>
using namespace std;
class BankAccount{
    private:
    int balance = 5000;
    
    public:
    void showbalance() {
        cout << balance;
    }
};

int main() {
    BankAccount obj1;
    obj1.showbalance();
}



// problem -- 3 
//protected access specifier

#include<iostream>
using namespace std;

class parent {
    protected:
    int secretcode = 1234;
    
};

class child : public parent {
    public:
   void accesslocker() {
        cout << secretcode;
    }
    
};

int main () {
    child obj1;
    obj1.accesslocker();
}



// problem -- 4
//constructor
//4.1 parameterized constructor 

#include<iostream>
using namespace std;
class Student{
    
public:
 string name;
 int age;
 
 Student(string studentname, int studentAge) {
     name = studentname;
     age = studentAge;
 }
    
void introduce(){
    cout << "Hi there, this person name is " << name << " and his age is " << age << "\n";
    }
};

int main() {
    Student s1("Abhishek",24);
    s1.introduce();
}




//4.2 default constructor 

#include<iostream>
using namespace std;
class wificonnection{
    public:
    string networkname;
    int password;
    
    wificonnection() {
        networkname = "ACT Fibre Net";
        password = 1234;
    }
    
    void showdetails() {
        cout << networkname << " " <<password;
    }
};

int main () {
    wificonnection obj1;
    obj1.showdetails();
}


// problem -- 5
//constructor overloading

#include<iostream>
using namespace std;

class rectangle {
  public:  
    int length;
    int width;
    
    //constructor -- 1 (default constructor)
    
    rectangle() {
        length = 10;
        width = 20;
    }
    
    // constuctor -- 2 (parameterized constructor)
    
    rectangle (int l) {
        length = l;
        width = 20;
    }
    
    // constructor -- 3 (parameterized constructor)
    rectangle (int l, int b){
        length = l;
        width = b;
    }
    
    void area() {
        cout << length * width;
    }
};

int main() {
    //rectangle r1;
    //r1.area();
    //rectangle r2(5);
    //r2.area();
   rectangle r3(5,2);
   r3.area();
}
