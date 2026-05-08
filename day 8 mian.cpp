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
