class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size()) return false;
        std::unordered_map<char, int> hash(26);
        for(int i = 0; i < magazine.size(); i++) {
            hash[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.size(); i++) {
            if (--hash[ransomNote[i]] < 0) return false;
        }
        return true;
    }
};