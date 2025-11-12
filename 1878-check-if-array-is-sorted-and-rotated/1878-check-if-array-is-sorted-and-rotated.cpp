class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
        return true;
        }
        int pos=1;
        //checking the first curve 
        while(pos<n and nums[pos]>=nums[pos-1]){
            pos++;
        }
        //here we checked that the pos has reached upto N position(size) then we  return will true
        if(pos==n)
    return true;
    //here if the problem has only one section so pos has reached upto size then return true
    if(pos==n-1){
        return nums[n-1]<=nums[0];
    }
        //else we will increased the position 
        else {
            pos++;
        }
        
        //here in 2nd curve check if 2nd pos is greater than frist half  as we know that pos of 2nd curve should be less than 1st graph 
    if(pos>= n and nums[pos]>nums[0])
    return false;
  
    //for checking the 2nd curve
    while(pos<n and nums[pos]<=nums[0] and nums[pos]>=nums[pos-1] )
  pos++;  

  return pos==n;
    }
};