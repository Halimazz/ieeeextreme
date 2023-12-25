// #include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    unsigned int  A, B, C, D;
    cin >> A >> B >> C >> D;

    

    if (A*D>B*C) {
        cout << "lebih besar" << endl;
    } else if (A*D<B*C) {
        cout << "lebih kecil" << endl;
    } else {
        cout << "sama" << endl;
    }

    return 0;
}
