/*
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {

        vector<vector<int>> arr(n,vector<int>(n));
        vector<vector<int>> vec( n , vector<int> (n, 0));
        // return arr;
        int num=1;
        int top=0,bottom=n-1,start=0,end=n-1;

    int one=1;
    while(one){
            // right
       if(num>(n*n))break;

       for(int i=start;i<=end;i++){
           arr[top][i]=num;
           num++;
       }
        top++;
    //down
       for(int i=top;i<=bottom;i++){
           arr[i][end]=num;
           num++;
       }
        end--;
    //left
       for(int i=end;i>=start;i--){
           arr[bottom][i]=num;
           num++;
       }
        bottom--;
    //up
       for(int i=bottom;i>=top;i--){
           arr[i][start]=num;
           num++;
       }
        start++;

    }
    
    return arr;
    }
};
