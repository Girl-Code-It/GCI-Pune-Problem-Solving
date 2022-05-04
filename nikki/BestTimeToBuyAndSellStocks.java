class Solution {
    public int maxProfit(int[] nums) {
      int max=0;
        int n=nums.length;
        int minimum=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[minimum]){
                int price=nums[i]-nums[minimum];
                max=Math.max(price,max);
            }
            else{
                minimum=i;
            }
        }
        return max;
    }
}