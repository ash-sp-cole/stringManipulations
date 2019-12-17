#include <iostream>
#include <string>
#include <algorithm>


using namespace std;


bool isRotatedPalindrome(string str);

bool isPalindrome(string str, int low, int high);





int main () {

string str {"ABCDCBA"};

rotate(str.begin(), str.begin()+2, str.end());

if (isRotatedPalindrome(str)) {
    cout << "true  - is Palindrome";
}

else {
    cout << " not a Palindrome ";
}

    return 0;
}




bool isRotatedPalindrome(string str) {

 int n = str.length();

 for (int i=0; i < n; i++) {

     rotate(str.begin(), str.begin()+1,str.end());

     if (isPalindrome(str,0,n-1)) {
         return true;
     }



 }
return false;
}

bool isPalindrome(string str, int low, int high) {



    return (low >= high ) || str[low] == str[high] && isPalindrome(str, low+1, high-1);

}