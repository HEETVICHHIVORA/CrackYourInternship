class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
           int s=0;
        for(int i=0;i<k;i++){
            s+=cardPoints[i];
        }
        int c=s;
        for(int i=k-1;i>=0;i--){
            c-=cardPoints[i];
            c+=cardPoints[n-k+i];
            s=max(s,c);
        }
        return s;
    }
};