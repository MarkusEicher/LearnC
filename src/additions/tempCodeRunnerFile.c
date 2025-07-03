int addUsingBitwise(int a, int b) {
    // Iterate till there's no carry left
    while (b != 0) {
        int carry = a & b;      // Find carry bits
        a = a ^ b;              // Sum bits without carry
        b = carry << 1;         // Shift carry to left
    }
    return a;