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

