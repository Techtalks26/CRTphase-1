// Problem -- 1
// function overriding 
// same function name -- same parameters -- different classses;
#include <iostream>
using namespace std;
class Appliance {
public:    
     virtual void turnOn() {
        cout << "Appliance is getting turn on..." <<"\n";
    }
    virtual void work() = 0; // this is pure virtual function 
};

class Fan : public Appliance {
public:    
    void turnOn() override {
        cout << "Fan blades are moving slowly..." <<"\n";
    }
public:    
    void work() override{
        cout << "Once fan starts at full speed it gives cool air..." <<"\n";
    }
};

class Toaster : public Appliance {
public:    
    void work() override {
        cout <<"Toaster is heating up the breads..." <<"\n";
    }
};

int main() {
    Fan myfan;
    Appliance* kitchenApp;
    kitchenApp = &myfan;
    kitchenApp->turnOn();
    kitchenApp->work();
    
    Toaster myToast;
    kitchenApp = &myToast;
    kitchenApp->turnOn();
    kitchenApp->work();
    
}



// Problem -- 2
//define an array and initialization and traversal

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    cout << "enter 5 numbers" << "\n";
    
   for(int i =0; i < 5; i++) {
       cin >> arr[i];
   }
   
   cout << "array elements are..." << "\n";
   
   for(int i = 0; i < 5; i++) {
       cout << arr[i] << " ";
   }
}




// Problem -- 3
//define an array and initialization and traversal

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    int sum = 0;
    
    cout << "enter 5 numbers" << "\n";
    
   for(int i =0; i < 5; i++) {
       cin >> arr[i];
       sum = sum + arr[i];
   }
   cout << "sum of array elements is..." << sum;
 }



// Problem -- 4 
//linear search 

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10,20,30,40,50};
    int searchElement;
    
    cout << "enter element to search...";
    cin >> searchElement;
    
    for(int i = 0; i < 5; i++){
        if(arr[i] == searchElement) {
            cout << "element found at index " << i;
            return 0;
        }
    }
    cout << "element not found...";
}




// Problem -- 5
//pirnt memory address of each data in array

#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    cout << "enter 5 numbers" << "\n";
    
   for(int i =0; i < 5; i++) {
       cin >> arr[i];
   }
   
   cout << "array elements are..." << "\n";
   
   for(int i = 0; i < 5; i++) {
       cout << &arr[i] << " ";
   }
}
