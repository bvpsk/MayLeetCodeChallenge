class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> Map; //initialize a map
        int l = strlen(magazine.c_str());
        for(int i = 0; i < l; i++){ //for every unique char in magazine, initialize a key value pair with that char
            if(Map.find(magazine[i]) == Map.end())
                Map.insert({magazine[i], 0});
            Map[magazine[i]] += 1; // increment value of that char everytime it appears
        }
        l = strlen(ransomNote.c_str());
        for(int i = 0; i < l; i++){ //iterate through every char in ransomNote
            if(Map.find(ransomNote[i]) == Map.end()) // if that char is not found as key in the Map,
                return false; // return false i.e., we cannot construct
            else{
                if(Map[ransomNote[i]] == 1){ //if that char is in the map and if its value is 1,
                    Map.erase(ransomNote[i]); // remove that key value pair as we have exhaused the occurence of this char in our magazine
                }else //or else,
                    Map[ransomNote[i]] -= 1; //decrement the frequency for this char.
            }
                
        }
        return true; // if no interruption until now, return true i.e., we can construct.
    }
};