#include <iostream>
using namespace std;

int main() {
    unsigned int num = 0b1010;  // Initial number in binary (10 in decimal)
    unsigned int maskSet = 0b0100;  // Mask to set the 3rd bit
    unsigned int maskReset = 0b0010;  // Mask to reset the 2nd bit

    // Set the 3rd bit
    num |= maskSet;  // num becomes 0b1110 (14 in decimal)
    cout << "After setting the 3rd bit: " << num << endl;

    // Reset the 2nd bit
    num &= ~maskReset;  // num becomes 0b1100 (12 in decimal)
    cout << "After resetting the 2nd bit: " << num << endl;

    return 0;
}

/*
Output:
After setting the 3rd bit: 14
After resetting the 2nd bit: 12
*/
