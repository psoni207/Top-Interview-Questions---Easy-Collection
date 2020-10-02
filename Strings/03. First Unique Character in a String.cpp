class Solution {
    private:
        int lowerCaseCount = 26;
public:
    int firstUniqChar(string s) {
        pair<int, int> freq[lowerCaseCount]; 
  
        for(int i = 0; i < s.size(); i += 1) { 
            freq[s[i] - 'a'].first += 1; 
            freq[s[i] - 'a'].second = i; 
        } 
        
        int res = INT_MAX; 
        for (int i = 0; i < lowerCaseCount; i += 1){
            if(freq[i].first == 1)
                res = min(res, freq[i].second);
        }

        return (res != INT_MAX ? res : -1); 
        
    }
};