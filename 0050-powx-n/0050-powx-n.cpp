class Solution {
public:
    double myPow(double x, int n) {
        // Handle the case when n is negative
        if (n < 0) {
            x = 1 / x;  // Invert x
            n = -n;     // Make n positive
        }
        
        double result = 1.0;
        double current_product = x;

        // Use exponentiation by squaring
        while (n > 0) {
            if (n % 2 == 1) { // If n is odd
                result *= current_product; // Multiply the current product to result
            }
            current_product *= current_product; // Square the current product
            n /= 2; // Divide n by 2
        }
        
        return result;
    }
    };