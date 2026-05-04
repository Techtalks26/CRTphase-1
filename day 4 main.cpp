//program-1
//print no. 1 to 5 , 5 times
#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << j;
        }
        cout<<"\n";
    }
}



 //program-1
//print no. 1 to 5 , 5 times
#include <iostream>
using namespace std;

int main () {
    for(int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout<<"\n";
    }
}


 //program-2
//print solid square
#include <iostream>
using namespace std;

int main () {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << "*";
        }
        cout<<"\n";
    }
}



//program-3
//print solid rectangle

#include <iostream>
using namespace std;

int main () {
    int row, col;
    cin >> row;
    cin >> col;
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << "*";
        }
        cout<<"\n";
    }
}



//program-4
//print a right angle triangle

#include <iostream>
using namespace std;

int main () {
    
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <=i; j++) {
            cout << " * ";
        }
        cout<<"\n";
    }
}



//program-5
//print a hollow square

#include <iostream>
using namespace std;

int main () {
     for (int i = 1; i <= 5; i++) {
       for( int j = 1; j <= 5; j++) {
           cout << " ";
           if(i == 1 || i == 5 || j ==1 || j ==5) {
               cout << "*";
           }else {
               cout << " ";
           }
       }  
       cout <<"\n";
     }
       
}



//program-6
//print mirror of right angle triangle

#include <iostream>
using namespace std;

int main () {
    
    for (int i =1; i <= 5; i++) {
        for (int j = 5-i; j >=1; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << "*";
        }
        cout<<"\n";
    }
}



//program-7
//print a pyramid

#include <iostream>
using namespace std;

int main () {
    
    for (int i =1; i <= 5; i++) {
        for (int j = 5-i; j >=1; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++){
            cout << " *";
        }
        cout<<"\n";
    }
}
