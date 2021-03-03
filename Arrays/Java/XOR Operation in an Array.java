class Solution {
    public int xorOperation(int n, int start) {
        int []arr=new int[n];
        int ans=start;
        for(int i=0;i<n;i++){
            arr[i]=start+(2*i);
            if(i!=0) ans^=arr[i];
        }
        return ans;
    }
}
