class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;

        for (int i = 0; i<nums.size(); i++){
            sum = sum + nums[i];
            if(maxSum < sum){
                maxSum = sum;
            }
            if(sum < 0){
                sum =0;
            }
        }
        
        return maxSum;
    }
};