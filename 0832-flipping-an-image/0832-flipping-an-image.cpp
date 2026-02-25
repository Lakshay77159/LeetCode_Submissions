class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> temp (m,vector<int>(n));
         
        for(int i=0;i<m;i++){
            int j=0;
            while(j<n){
           
            temp[i][j]=image[i][n-j-1];
            j++;
        }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(temp[i][j]==0) temp[i][j]=1;

                else temp[i][j]=0;
            }
        }
        return temp;



        
    }
};