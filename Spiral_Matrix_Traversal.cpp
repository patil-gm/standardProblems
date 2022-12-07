/*
Given an m x n matrix, return all elements of the matrix in spiral order.
*/


vector<int> spiralOrder(vector<vector<int>>& arr) {
        vector<int> ans;
        int n=arr.size();
        int m=arr[0].size();
          int num=1;
        int top=0,bottom=n-1,start=0,end=m-1;

    int one=1;
    while(one){
            // right
       if(start>end)break;

       for(int i=start;i<=end;i++){
           ans.push_back(arr[top][i]);
           num++;
       }
        top++;
          if(bottom<top)break;
    //down
       for(int i=top;i<=bottom;i++){
           ans.push_back(arr[i][end]);
           num++;
       }
        end--;
        if(start>end)break;
    //left
       for(int i=end;i>=start;i--){
           ans.push_back(arr[bottom][i]);
           num++;
       }
        bottom--;
        if(bottom<top)break;
    //up
       for(int i=bottom;i>=top;i--){
           ans.push_back(arr[i][start]);
           num++;
       }
        start++;
        if(start>end)break;
    }
    return ans;
    
    }
