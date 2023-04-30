/*
 * @lc app=leetcode id=483 lang=cpp
 *
 * [483] Smallest Good Base
 *
 * https://leetcode.com/problems/smallest-good-base/description/
 *
 * algorithms
 * Hard (38.83%)
 * Likes:    343
 * Dislikes: 464
 * Total Accepted:    19K
 * Total Submissions: 49K
 * Testcase Example:  '"13"'
 *
 * Given an integer n represented as a string, return the smallest good base of
 * n.
 * 
 * We call k >= 2 a good base of n, if all digits of n base k are 1's.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: n = "13"
 * Output: "3"
 * Explanation: 13 base 3 is 111.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: n = "4681"
 * Output: "8"
 * Explanation: 4681 base 8 is 11111.
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: n = "1000000000000000000"
 * Output: "999999999999999999"
 * Explanation: 1000000000000000000 base 999999999999999999 is 11.
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * n is an integer in the range [3, 10^18].
 * n does not contain any leading zeros.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    string smallestGoodBase(string n) {
        long long int num = stoll(n);
        long long int l=2,r=num-1;
        long long int ans=-1;
        for(int i=60;i>0;i--){
            vector<int>bits(i,1);
            while(l<=r){
                long long int base = l+(r-l)/2;
                long long int p=-1,q=0,t=1;
                for(long long int j=0;j<i;j++){
                    if(q>(long long int)(1e18-t) || t>(1e18/base)){
                        break;
                    }
                    q+=t;
                    t*=base;
                    p=j;
                }
                cout << base << " " << q << " " << t << " " << p << endl;
                if(p!=i){
                    r=base-1;
                }
                else{
                    if(q==num){
                        ans=base;
                        r=base-1;
                    }
                    else if(q<num){
                        r=base-1;
                    }
                    else{
                        l=base+1;
                    }
                }
            }
        }
        return to_string(ans);
    }
};
// @lc code=end

