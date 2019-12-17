#include<iostream>

#include<string>

#include <algorithm>


using namespace std;



void swap (char *a , char *b);


int main () {


string str{"hell0 worldtest"};

cout <<str << endl;



// using built in functions -----------------
// reverse(str.begin(), str.end());
//-------------------------------------------


// using in place (no in-built functions) -----------------

int low{0};
int high = str.length()-1;

while (low < high) {

        swap(&str[low++],&str[high--]);
}

//-------------------------------------------


cout <<str << endl;

    return 0;
}




void swap (char *a , char *b) {
int temp = *a;

*a=*b;
*b=temp;

}