class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        int i=0;
        int j=k-1;
        int n = nums.size()-1;
        int maxSum = 0;

        for(int z=0 ; z<=j ; z++)
            maxSum += nums[z];
        
        i++;  j++;       
        int sum= maxSum;
        while(j <= n)
        {
            sum = sum + nums[j] - nums[i - 1];
            maxSum = max(maxSum, sum);
            i++;
            j++;
        }

        cout<<maxSum;

        return (double)maxSum/k;
        
    }
};


// class Solution {
// public:
//     double findMaxAverage(vector<int>& nums, int k) 
//     {
//         int i = 0;
//         int j = k - 1;
//         int n = nums.size() - 1;

//         int sum = 0;
//         for(int z = 0; z <= j; z++)
//         {
//             sum += nums[z];
//         }

//         int maxSum = sum;

//         i++;
//         j++;

//         while(j <= n)
//         {
//             sum = sum + nums[j] - nums[i - 1];
//             maxSum = max(maxSum, sum);
//             i++;
//             j++;
//         }

//         return (double)maxSum / k;
//     }
// };

