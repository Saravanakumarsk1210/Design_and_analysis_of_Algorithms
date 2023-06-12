#include <iostream>
using namespace std;
bool AND(bool a, bool b) {
return a && b;
}
bool OR(bool a, bool b) {
return a || b;
}
bool NOT(bool a) {
return !a;
}
bool NAND(bool a, bool b) {
return !(a && b);
}
bool NOR(bool a, bool b) {
return !(a || b);
}
bool XOR(bool a, bool b) {
return a != b;
}
bool XNOR(bool a, bool b) {
return !(a != b);
}
int main() {
int numValues;
cout << "Enter the number of values (2, 3, or 4): ";
cin >> numValues;
if (numValues < 2 || numValues > 4) {
cout << "Error: Invalid number of values." << endl;
return 1;
}
bool a, b, c, d;
cout << "Enter the values of the inputs (0 or 1): ";
cin >> a >> b;
if (numValues > 2) cin >> c;
if (numValues > 3) cin >> d;
cout << "AND: " << (numValues == 2 ? AND(a, b) : (numValues == 3 ? AND(AND(a, b), c) : AND(AND(AND(a, b), c), d))) << endl;
cout << "OR: " << (numValues == 2 ? OR(a, b) : (numValues == 3 ? OR(OR(a, b), c) : OR(OR(OR(a, b), c), d))) << endl;
cout << "NOT: " << NOT(a) << endl;
cout << "NAND: " << (numValues == 2 ? NAND(a, b) : (numValues == 3 ? NAND(NAND(a, b), c) : NAND(NAND(NAND(a, b), c), d))) << endl;
cout << "NOR: " << (numValues == 2 ? NOR(a, b) : (numValues == 3 ? NOR(NOR(a, b), c) : NOR(NOR(NOR(a, b), c), d))) << endl;
cout << "XOR: " << (numValues == 2 ? XOR(a, b) : (numValues == 3 ? XOR(XOR(a, b), c) : XOR(XOR(XOR(a, b), c), d))) << endl;
cout << "XNOR: " << (numValues == 2 ? XNOR(a, b) : (numValues == 3 ? XNOR(XNOR(a, b), c) : XNOR(XNOR(XNOR(a, b), c), d))) << endl;
return 0;
}
