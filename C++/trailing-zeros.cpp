class Solution {
public:
    /*
     * @param n: A long integer
     * @return: An integer, denote the number of trailing zeros in n!
     */
    long long trailingZeros(long long n) {
        // write your code here, try to do it without arithmetic operators.
        /*
        0!  =   1                   0           0/5 = 0
        1!  =   1                   0           1/5 = 0
        2!  =   2                   0           2/5 = 0
        3!  =   6                   0           3/5 = 0
        4!  =   24                  0           4/5 = 0
        5!  =   120                 1           5/5 = 1
        6!  =   720                 1           6/5 = 1
        7!  =   5040                1           7/5 = 1
        8!  =   40320               1           8/5 = 1
        9!  =   362880              1           9/5 = 1
        10! =   3628800             2           10/5 = 2
        11! =   39916800            2           11/5 = 2
        ...                                     
        15! = 1307674368000         3           15/5 = 3
        ...
        20! = 2432902008176640000   4           20/5 = 4
        ...
        25! = 15511210043330985984000000    6   25/5 + 25/25 = 6
        ...
        n! ---> n/5 + n/25 + n/125 + ...
        */
        
        long long count = 0;
        for (long long i = 5; n/i >= 1; i*=5) {
            count += n/i;
        }
        return count;
    }
};