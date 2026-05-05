class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> letters1;
        map<char, int> letters2;
        if(s.size() != t.size()){
            return false;
        }
        for(int i = 0; i < s.size(); ++i){
            if(letters1.find(s[i]) != letters1.end()){
                letters1.at(s[i])++;
            } else {
                letters1.insert({s[i], 0});
            }
        }
        for(int i = 0; i < s.size(); ++i){
            if(letters1.find(t[i]) == letters1.end()){
                return false;
            } else {
                if(letters2.find(t[i]) != letters2.end()){
                    letters2.at(t[i])++;
                } else {
                    letters2.insert({t[i], 0});
                }
            }
        }
        if(letters1 == letters2) return true;
        return false;
    }
};
