class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char, int> Map;
        int l = strlen(J.c_str());

        for(int i = 0; i < l; i++)
            Map.insert(pair<char, int>(J[i], i));   

        int cnt = 0;
        l = strlen(S.c_str());
        for(int i = 0; i < l; i++)
            if(Map.find(S[i]) != Map.end()) cnt++;
        return cnt;
    }
};