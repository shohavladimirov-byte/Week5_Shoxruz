#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    string a="";
    int i=0;
    while (i < n ) {
        if (n - 1 == i & n%2 == 1) {
            a+='b';
        }
        else {a+='a';}
        i++;
    }
    cout<< a <<endl;
}