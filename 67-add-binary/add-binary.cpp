#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int n1 = a.length();
        int n2 = b.length();
        if (n1 < n2) {
            a = string(n2 - n1, '0') + a;
        } else if (n2 < n1) {
            b = string(n1 - n2, '0') + b;
        }

        string res;
        int carry = 0;

        for (int i = a.length() - 1; i >= 0; i--) {
            if (a[i] == '0' && b[i] == '0' && carry == 0) {
                res.push_back('0');
                carry = 0;
            } else if (a[i] == '1' && b[i] == '0' && carry == 0) {
                res.push_back('1');
                carry = 0;
            } else if (a[i] == '0' && b[i] == '1' && carry == 0) {
                res.push_back('1');
                carry = 0;
            } else if (a[i] == '0' && b[i] == '0' && carry == 1) {
                res.push_back('1');
                carry = 0;
            } else if (a[i] == '1' && b[i] == '1' && carry == 0) {
                res.push_back('0');
                carry = 1;
            } else if (a[i] == '1' && b[i] == '0' && carry == 1) {
                res.push_back('0');
                carry = 1;
            } else if (a[i] == '0' && b[i] == '1' && carry == 1) {
                res.push_back('0');
                carry = 1;
            } else if (a[i] == '1' && b[i] == '1' && carry == 1) {
                res.push_back('1');
                carry = 1;
            }
        }

        if (carry == 1) {
            res.push_back('1');
        }

        reverse(res.begin(), res.end());
        return res;
    }
};