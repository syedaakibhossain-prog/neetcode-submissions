class Solution {
   public:
    // time complexcity O(n logn)
    // spacecomplexcity O(n)
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> res;
        for (int num : nums) {
            res[num]++;
        }
        vector<pair<int, int>> arr;
        for (const auto& p : res) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());
        vector<int> results;
        for (int i = 0; i < k; i++) {
            results.push_back(arr[i].second);
        }
        return results;
    }
};
