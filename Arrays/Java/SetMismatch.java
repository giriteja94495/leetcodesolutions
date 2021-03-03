class Solution {
    public int[] findErrorNums(int[] nums) {
        int a=0,b=0;
        int arr[]=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            arr[i]=i+1;
        }
        for(int i=0;i<nums.length;i++){
            if(arr[nums[i]-1]!=0){
                 arr[nums[i]-1]=0;
            }
            else{
                a=nums[i];
            }
           
        }
        for(int i=0;i<nums.length;i++){
            if(arr[i]!=0){
                b=arr[i];
                break;
            }
            
        }
        return new int[] {a,b};
    }
}
