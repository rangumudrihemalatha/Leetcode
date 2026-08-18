// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size();
//         for(int r = 0; r < k; r++)
//         {
//             int temp = nums[nums.size()-1];
//             for(int i = nums.size()-1; i >= 1; i--)
//             {
//                 nums[i] = nums[i-1];
//             }
//             nums[0] = temp;
//         }
//     }
// };

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};