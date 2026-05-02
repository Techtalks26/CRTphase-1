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



//program--4 
//print odd no using whilw loop 
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




//program--3 
//print 1 to 10 no using whilw loop 
#include <iostream>
using namespace std;

int main () {
    
   int i=1;
   while(i <= 10){
       cout<<i<<" ";
       i++;
    }
}
