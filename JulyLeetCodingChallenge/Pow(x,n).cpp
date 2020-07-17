//https://leetcode.com/explore/challenge/card/july-leetcoding-challenge/546/week-3-july-15th-july-21st/3392/
/*
Implement pow(x, n), which calculates x raised to the power n (xn).

Example 1:

Input: 2.00000, 10
Output: 1024.00000
Example 2:

Input: 2.10000, 3
Output: 9.26100
Example 3:

Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25
Note:

-100.0 < x < 100.0
n is a 32-bit signed integer, within the range [−231, 231 − 1]
*/

class Solution {
public:
    double myPowerHelper(double x, int n) {
            if(n == 0) return 1.0;
            double val = myPowerHelper(x, n / 2);
            if(n % 2 == 0) return val * val;
            else return val * val * x;//if n is an odd number
        }
    
    double myPow(double x, int n) {
        double ans = myPowerHelper(x, n);
        
        return (n >= 0 ? ans : 1 / ans);
    }
};
