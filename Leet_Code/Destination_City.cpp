class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> cities;
        string ans;
        for(int i = 0;i < size(paths); i++){
            cities[paths[i][0]] ? cities[paths[i][0]]++ : cities[paths[i][0]] = 2 ;
            cities[paths[i][1]] ? cities[paths[i][1]]++ : cities[paths[i][1]] = 1 ;
        }
        for(map<string, int>::iterator i = cities.begin(); i != cities.end(); i++){
            if (i->second == 1) ans = i->first;
        }      
        return ans;
    }
};