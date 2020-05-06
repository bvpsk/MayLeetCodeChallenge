class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> v;
        map<char, int> m, n;
        int l = strlen(s.c_str());
        for(int i = 0; i < l; i++){
            if(m.find(s[i]) == m.end()){
                v.push_back(s[i]);
                m.insert({s[i], 1});
                n.insert({s[i], i});
            }else{
                m[s[i]] += 1;
            }
        }
        for(auto it = v.begin(); it != v.end(); it++){
            if(m.find(*it) != m.end()) if(m[*it] == 1) return n[*it];
        }
        return -1;
    }
};