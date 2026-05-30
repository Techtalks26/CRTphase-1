//problem -- 1 
//stack
#include<iostream>
#include <stack>
using namespace std;
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    
    stack<int> st;
    //java -- stack<integer> st = new stack<>();
    
    //push the data into the stack  
    for(int i = 0; i < n; i++) {
        st.push(arr[i]);
    }
    
    //pop out the most data from the stack and put into the aray
    for(int i = 0; i < n; i++){
        arr[i] = st.top();
        st.pop();
    }
    
    cout << "reversed array..";
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}



