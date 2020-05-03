// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//implemented binary search differently. Understood how to craft the corner conditions.

class Solution {
public:

    int firstBadVersion(int n) {
        int l = 0; int h = n; int m;
        bool a, b, c;
        while(h > l){
            m = l + (h - l) / 2;
            a = isBadVersion(m+1);
            if(a){
                if(!isBadVersion(m)) return m+1;
                else h = m;
            }else{
                l = m;
            }    }
        return l-1;
    }
};
