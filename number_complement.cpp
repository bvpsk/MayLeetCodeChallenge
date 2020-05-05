class Solution {
public:
    int findComplement(int num) {
        int m = num, r;
        vector<int> b;
        while(m > 1){
            b.push_back(m % 2 ? 0 : 1);
            m = m / 2;
        }
        b.push_back(m == 0 ? 1 : 0);
        // for(int i = b.size() - 1; i >= 0; i--)
        //     cout << b[i] << " ";
        num = 0;
        for(int i = 0; i < b.size(); i++){
            num += b[i] * pow(2, i);
        }
        return num;
        
    }
};