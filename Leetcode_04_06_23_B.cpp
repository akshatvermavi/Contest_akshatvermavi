//method 01 give tle
// class Solution {
// public:
//     int semiOrderedPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int count =0;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]==1)
//             {
//                 int j =i;
//                 while(nums[0]!=1)
//                 {
//                     swap(nums[j],nums[j-1]);
//                     count++;
//                 }
//             }
//         }
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]==n)
//             {
//                 int j =i;
//                 while(nums[n-1]!=n)
//                 {
//                     swap(nums[j],nums[j+1]);
//                     count;
//                 }
//             }
//         }
//         return count;
//     }
// };
//method 02
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int id1 =0;
        int idn =0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1) id1 =i;
            if(nums[i]==n) idn =i;
        }
        int ans  = id1 -idn + n-1;
        if(id1 >idn) ans--;
        return ans;
    }
};
