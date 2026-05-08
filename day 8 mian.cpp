#include<iostream>
using namespace std;

//problem -- 1 
//types of inheritance 
// 1.1 -- single level inheritance 

class vehicle {
    public:
    void start() {
        cout << "vehicle starts" << "\n";
    }
};

class car : public vehicle {
    public:
    void drive(){
        cout << "car is running" << "\n";
    }
};


int main () {
    car obj1;
    obj1. drive();
    obj1.start();
}



#include<iostream>
using namespace std;

//problem -- 1 
//types of inheritance 
// 1.2 -- multi level inheritance 

class vehicle {
    public:
    void start() {
        cout << "vehicle starts" << "\n";
    }
};

class car : public vehicle {
    public:
    void drive(){
        cout << "car is running" << "\n";
    }
};

class speedometer : public car {
    public:
    void speed() {
        cout << "car is running at 60 km/h" << "\n";
    }
};

int main () {
    speedometer obj1;
    obj1.start();
    obj1. drive();
    obj1.speed();
}



#include<iostream>
using namespace std;

//problem -- 1 
//types of inheritance 
// 1.3 -- hierarchical

class vehicle {
    public:
    void start() {
        cout << "vehicle starts .." ;
    }
};

class bike : public vehicle {
    public:
    void drive() {
        cout << "bike is running... ";
    }
};

class car : public vehicle {
    public:
    void drive(){
        cout << "car is running...";
    }
};



int main () {
    car c;
    bike b;
    c.start();
    c.drive();
    b.start();
    b.drive();
}









#include<iostream>
using namespace std;

//problem -- 1 
//types of inheritance 
// 1.5 -- hybrid inheritance -- diamond problem solution -- virtual base class 

class a {
    public:
    void print() {
        cout << "hi there...";
    }
};

class b : virtual public a {
  // no logic
};

class c : virtual public a {
  //no logic   
};

class d : public b , public c {
  //no logic  
};

int main(){
    d obj1;
    obj1.print();
}




#include<iostream>
using namespace std;

//problem -- 2
// Encapsulation 

class bankaccount {
private:
    int bankbalance;
public:
    void setbalance(int amount) {
        if (amount>=0) {
            bankbalance = amount;
        }else {
            cout << "enter a valid amount";
        }
    }
    int getbalance(){
        return bankbalance;
    }
};

int main() {
    bankaccount obj1;
    obj1.setbalance(5000);
    cout << obj1.getbalance();
}
