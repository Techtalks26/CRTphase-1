//problem -1 -- leetcode Q=189
//rotate array

class Solution {
public:

void reverse(vector<int>& nums,int start, int end) {
    while(start<end){
    swap(nums[start],nums[end]);
    start++;
    end--;
    }
}


    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  
      reverse(nums, 0, n-1); //rotate complete array
      reverse(nums, 0, k-1); //rotate first k elements 
      reverse(nums, k, n-1); // rotate rest of the elements   
    }
};


//problem - 2 --leetcode Q=344
//reverse string 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while (start < end) {
            swap(s[start] , s[end]);
            start++;
            end--;
        }
    }
};


//problem - 3 leetcode Q=796
//rotate string 
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) {
            return false;
        }
        string doublestring = s+s;
        return doublestring.contains(goal);
    }
};

//problem - 4 -- leetcodeQ=242
//valid anagram 
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin() , t.end());
        if (s == t) {
            return true;
        }else {
            return false;
        }
    }
};



//problrm - 5 
//palindrome string 
#include<iostream>
using namespace std;

bool ispalindrome (string str){
    int start = 0;
    int end = str.size() - 1;
    while(start < end) {
        if(str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
 int main() {
     string str;
     cout << "enter a string...";
     cin >> str;
     
     if(ispalindrome(str)) {
         cout << "given string is a palindrome string...";
     }else {
         cout << " given string is not a palindrome string...";
     }
     return 0;
 }



//problem - 6
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a size of an array..";
    cin >> n;
    
    int arr[n];
    
    cout << " enter the sorted array...";
    for(int i = 0; i< n; i++) {
        cin >>arr[i];
    }
    int target;
    cout << "enter the target element";
    cin >> target;
    
    //binary search order 
    int low = 0;
    int high = n-1;
    bool found = false;
    
    while(low <= high) {
        int mid =(low + high) / 2;
        
        if(arr[mid] == target) {
            cout << "element found at index" << mid;
            found = true;
            break;
        } else if(arr[mid] < target) {
            low = mid + 1;
        }else {
            high = mid - 1;
        }
    }
    if(found == false) {
        cout << "elements not found";
    }
}
