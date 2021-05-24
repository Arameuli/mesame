#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include"Triangle.h"
using namespace std;
istream& operator >> (istream& in, Triangle& s) {
    in >> s.a;
    in >> s.b;
    in >> s.c;
    return in;
}
ostream& operator << (ostream& out, Triangle& s) {
    out << s.a << " ";
    out << s.b << " ";
    out << s.c << " ";
    return out;
}
int perim(Triangle a) {
    return a.a + a.b + a.c;
}
int main()
{
    vector <Triangle> s(2);
    for (int i = 0; i < 2; i++) {
        cin >> s[i];
    }
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << s[i].a << " " << s[i].b << " " << s[i].c << endl;
        cout << s[i].fart() << endl;
        cout << perim(s[i]);
    }
}