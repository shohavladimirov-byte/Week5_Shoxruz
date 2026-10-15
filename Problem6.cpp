#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;

    int two = 0;
    int five= 0;

    while (n>0) {
        if (n%2==0) {
            two+=1;
        }
        else if (n%5==0) {
            five+=1;
        }

        n--;
    }
    if (five<two) {cout << five <<endl;}
}