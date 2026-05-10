//problem -- 1 
//making of 2d array

#include<iostream>
using namespace std;

int main() {
    int arr[2][2];
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
}



//problem -- 1 
//making of 2d array

#include<iostream>
using namespace std;

int main() {
    int arr[2][2];
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
        }
    }
    
    cout << "here is your 2 day array" << "\n";
    cout << "\n";
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}



//problem -- 2 
//sum of elements of 2d array

#include<iostream>
using namespace std;

int main() {
    int arr[2][2];
    int sum =0;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            cin >> arr[i][j];
            sum = sum + arr[i][j];
        }
    }
    cout << sum;
}



//problem -- 3
//search an elements in a 2d matrix

#include<iostream>
using namespace std;

int main() {
    int arr[2][2] = {{10,20},
                      {30,40}};
    int searchelement;
    cin >> searchelement;
    
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
          if(arr[i][j] == searchelement) {
              cout << i << " " << j;
              return 0;
          }
        }
    }
    cout << "element not found..";
}

