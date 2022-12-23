class Solution {
public:
    long firstBadVersion(int n) {
        long h=n, l=1;
        while(l<=h){
            long mid=(l+h)/2;
            if(isBadVersion(mid)){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return l;

    }
}
