//program--1 
//print 1 to 10 using for loop 
#include <iostream>
using namespace std;

int main () {
    
    for(int i = 1; i<=10; i++) {
        cout << i << "";
    }
}



//program--2 
//print even no using for loop 
#include <iostream>
using namespace std;

int main () {
    
    for(int i = 0; i<=10; i += 2) {
        cout << i << "";
    }
}


//program--3 
//print 1 to 10 no using while loop 
#include <iostream>
using namespace std;

int main () {
    
   int i=1;
   while(i <= 10){
       cout<<i<<" ";
       i++;
    }
}



//program--4 
//print odd no using while loop 
#include <iostream>
using namespace std;

int main () {
    
   int i=1;
   while(i <= 10){
       cout<<i<<" ";
       i = i+2 ;
    }
     return 0;
}



//program--5
//print 1 to 10 using d0-while loop 
#include <iostream>
using namespace std;

int main () {
    int i =/ 1;
    do {
        cout << i <<" ";
        i++;
    }while (i <= 10);
}



//program--6
//factorial of a numbers
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int fact =1;
    
    for(int i = n; i >= 1; i--){
        fact = fact*i;
    }
    cout << fact;
}



//program--7
//prime numbers
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    int isprime = true;
    
    if(n < 2) {
        isprime = false;
    } else {
        for (int i = 2; i < n; i++) {
        if (n % i == 0) {
           isprime = false;
           break;
        }
    }
}
if(isprime) {
    cout << " it is prime no..";
}else {
    cout << "it is not a prime no";
    }
}
