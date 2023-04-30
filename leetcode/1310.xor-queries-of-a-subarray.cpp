/*
 * @lc app=leetcode id=1310 lang=cpp
 *
 * [1310] XOR Queries of a Subarray
 *
 * https://leetcode.com/problems/xor-queries-of-a-subarray/description/
 *
 * algorithms
 * Medium (72.30%)
 * Likes:    1288
 * Dislikes: 37
 * Total Accepted:    47.4K
 * Total Submissions: 65.5K
 * Testcase Example:  '[1,3,4,8]\n[[0,1],[1,2],[0,3],[3,3]]'
 *
 * You are given an array arr of positive integers. You are also given the
 * array queries where queries[i] = [lefti, righti].
 * 
 * For each query i compute the XOR of elements from lefti to righti (that is,
 * arr[lefti] XOR arr[lefti + 1] XOR ... XOR arr[righti] ).
 * 
 * Return an array answer where answer[i] is the answer to the i^th query.
 * 
 * 
 * Example 1:
 * 
 * 
 * Input: arr = [1,3,4,8], queries = [[0,1],[1,2],[0,3],[3,3]]
 * Output: [2,7,14,8] 
 * Explanation: 
 * The binary representation of the elements in the array are:
 * 1 = 0001 
 * 3 = 0011 
 * 4 = 0100 
 * 8 = 1000 
 * The XOR values for queries are:
 * [0,1] = 1 xor 3 = 2 
 * [1,2] = 3 xor 4 = 7 
 * [0,3] = 1 xor 3 xor 4 xor 8 = 14 
 * [3,3] = 8
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: arr = [4,8,2,10], queries = [[2,3],[1,3],[0,0],[0,3]]
 * Output: [8,0,4,4]
 * 
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= arr.length, queries.length <= 3 * 10^4
 * 1 <= arr[i] <= 10^9
 * queries[i].length == 2
 * 0 <= lefti <= righti < arr.length
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    vector<int> xorQueries(vector<int>& a, vector<vector<int>>& queries) {
        int n=a.size();
        vector<int>xo(n+1,0);
        for (int i = 1; i <= n; i++){
            xo[i]=xo[i-1]^a[i-1];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++){
            ans.push_back(xo[queries[i][1]+1]^xo[queries[i][0]]);
        }
        return ans;
    }
};
// @lc code=end

