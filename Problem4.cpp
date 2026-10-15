#include <iostream>
using namespace std;

int main() {

    int b,e;
    cin>> b >> e;

    int res = b;
    int no = b;

    while (no>=e) {
        int y = no/e;
        res += y;
        no = no % e + y;
    }
    cout<< res <<endl;
}