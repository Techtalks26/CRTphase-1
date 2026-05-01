//problem no 1 executing if statement
#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if(age >= 18){
        cout << "eligible for vote";
    }
    return 0;
} 


//problem no 2 executing if-else statement
#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if(age >= 18){
        cout << "eligible for vote";
    } else {
        cout << "not eligible for vote";
    }
    return 0;
}


//problem no 3 executing nested if-else statement
#include<iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if(age >= 18){
        if(age >=50) {
        cout << "senior citizen eligible for vote";
    } else {
        cout << "eligible for vote";
      }
    }else{
        if(age<0){
            cout <<"enter a valid age no.";
        }else{
            cout << "not eligible for vote";
        }
    }
}



//problem no 4 executing ternary operator 
#include<iostream>
using namespace std;

int main() {
    int a,b;
    int max_number;
    cout << "enter first number=";
    cin >> a;
    cout << "enter second number=";
   cin >> b;
    
    //logic for ternary operator 
    max_number=(a > b) ? a:b;
    cout << max_number;
    return 0;
}



//problem no 5 switch statement 
//problrm name--day name
#include<iostream>
using namespace std;

int main() {
    int Daynumber;
    cin >> Daynumber;
    
    switch(Daynumber) {
        case 1:
       cout << "Monday";
       break;
       case 2:
       cout << "tueday";
       break;
       case 3:
       cout << "wednesday";
       break;
       case 4:
       cout << "thursday";
       break;
       case 5:
       cout << "friday";
       break;
       case 6:
       cout << "saturday";
       break;
       case 7:
       cout << "sunday";
       break;
       default:
       cout<<"enter a valid no. =";
    }
    
}



//Program 6 
//Customer support ivr system
//1--for support
//2--for billing
//3--technical issue
//4--talk to agent

#include <iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;
    
    switch (choice) {
        case 1:
        cout << " Transferring call to the support team...";
        break;
        case 2:
        cout << " Transfering call to the billing and accounts department...";
        break;
        case 3:
        cout << " Connecting call to the technical team...";
        break;
        case 4:
        cout << "Please wait while we are connecting your call to an agent...";
        break;
        default:
        cout << "Enter a valid choice...";
        
    }
    
}



//Program 7 -- Nested if-else condition
// star home lighting 
//day -- motion(yes/no) -- light off
//night -- motion(yes -- 100%) (no -- 10%)

#include <iostream>
using namespace std;

int main() {
    string dayOrnight;
    bool motiondetected;
    
    cout << "is it day or night?.?";
    cin >> dayOrnight;
    cout <<"is motion detected?.";
    cin >> motiondetected;
    
    if(dayOrnight == "Night" || dayOrnight == "night") {
        if(motiondetected) {
            cout << "turn on the led with 100% brightness";
        }else {
            cout << "turn on the led with 10% brightness";
        }
    }else{
        cout <<"turn off the light";
    }
}
