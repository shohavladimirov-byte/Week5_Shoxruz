#include <iostream>
#include <string>
using namespace std;

int main() {

    int n;
    cin>>n;
    int q=0;
    int c=0;
    int v = 0;
    while (n>q) {
        int x;
        cin >> x;

        if (x==0) {
            c=0;
        }
        else if (c>v) {
            v=c;
        }

        c++;
        q++;
    }
    cout<< v <<endl;
}