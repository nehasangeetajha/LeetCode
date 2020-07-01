//https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/
/*
You have a total of n coins that you want to form in a staircase shape, where every k-th row must have exactly k coins.

Given n, find the total number of full staircase rows that can be formed.

n is a non-negative integer and fits within the range of a 32-bit signed integer.

Example 1:

n = 5

The coins can form the following rows:
¤
¤ ¤
¤ ¤

Because the 3rd row is incomplete, we return 2.
Example 2:

n = 8

The coins can form the following rows:
¤
¤ ¤
¤ ¤ ¤
¤ ¤

Because the 4th row is incomplete, we return 3.
*/

class Solution {
public:
    int arrangeCoins(int n) {
        int count=0,i=1;
        while(n>=0)
        {
            count++;
            n-=(i++);
        }
        return count-1;
    }
};


//Mathematical
class Solution {
public:
    int arrangeCoins(int n) {
        return (int)(sqrt(2 * (long)n + 0.25) - 0.5);
    }
};

/*
Runtime: 4 ms, faster than 79.21% of C++ online submissions for Arranging Coins.
Memory Usage: 5.9 MB, less than 80.40% of C++ online submissions for Arranging Coins.
*/
