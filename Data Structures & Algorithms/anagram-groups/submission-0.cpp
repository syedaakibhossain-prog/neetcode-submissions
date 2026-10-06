class Solution {
public:
    //time complexcity O(m*n log n)
    //space complexcity O(m*n)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>>res;

        for(const auto& s:strs){
            string sorteds = s;
            sort(sorteds.begin() , sorteds.end());
            res[sorteds].push_back(s);
        }

        vector<vector<string>> results;
        for(auto& pair:res){
            results.push_back(pair.second);
        }
        return results;
    }
};
