class Solution {
    public int[] numberOfLines(int[] widths, String s) {
       int lines=1;
        int wid=0;
        for(char c: s.toCharArray()){
            int w=widths[c-'a'];
            wid+=w;
            if(wid>100){
                lines++;
                wid=w;
            }
        }
        return new int[]{lines,wid};
    }
}


// poor description of the question
