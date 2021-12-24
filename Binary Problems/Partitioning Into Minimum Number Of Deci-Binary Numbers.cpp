class Solution {
public:
    int minPartitions(string n) {
        int temp=0;
        for(auto c:n){
            if(c>temp){
                temp=c;
            }
        }
        return temp-'0';
    }
};
// one of the best solutions 


/*
To print out the deci binary numbers



*/

// this is in java but it is easily understandable.
public static int[][] followUp(String n) {
    int partitions = minPartitions(n);

    int[][] matrix = new int[partitions][n.length()];

    for (int j = 0; j < matrix[0].length; j++) {
        int val = n.charAt(j) - '0';
        int i = 0;
        while (val > 0) {
            matrix[i][j] = 1;
            i++;
            val--;
        }
    }

    for (int i = 0; i < matrix.length; i++) {
        for (int j = 0; j < matrix[0].length; j++) {
            System.out.print(matrix[i][j]);
        }
        System.out.println();
    }

    return matrix;
}
