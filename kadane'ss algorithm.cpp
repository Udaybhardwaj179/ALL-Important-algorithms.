// let say an array is [5,4,-11,7,-8,12]
// To find the maximum sum of subarray in O(n) time complexity we use kadane's algorithm. 
// implimentatiion:-


// kadane's algorithm leetcode problem's link :-    https://leetcode.com/problems/maximum-subarray/
// solution made by me:-



class Solution {
public:
    int maxSubarraySumCircular(vector<int>& v) {
        sort(v.begin(), v.end(), greater<int>());
        int sum=0;
        for(auto i:v){
            sum=sum+i;
            if (sum+i<sum){
                sum=sum-i;
                return sum;
            }
           
        }
         return sum;
    }
};



