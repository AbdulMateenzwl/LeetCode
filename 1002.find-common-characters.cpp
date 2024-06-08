/*
 * @lc app=leetcode id=1002 lang=cpp
 *
 * [1002] Find Common Characters
 */

// @lc code=start
class Solution {
public:
// Define a hash function for std::pair<int, char>
struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2> &p) const {
        auto hash1 = std::hash<T1>{}(p.first);
        auto hash2 = std::hash<T2>{}(p.second);
        return hash1 ^ hash2; // Combine the hash values
    }
};

// Define an equality function for std::pair<int, char>
struct pair_equal {
    bool operator()(const std::pair<int, char>& p1, const std::pair<int, char>& p2) const {
        return p1.first == p2.first && p1.second == p2.second;
    }
};
    vector<string> commonChars(vector<string>& words) {
        std::unordered_map<std::pair<int, char>, int, pair_hash, pair_equal> map;

        for(int i=0;i<words.size();i++){
            for(char c:words[i]){
                if(map.find(make_pair(i,c)) == map.end() ){
                     map[make_pair(i,c)] = 1;
                }
                else{
                    map[make_pair(i,c)]++;
                }
            }
        }

        vector<string> result;

        string str = makeUnique(words[0]);

        for(char c:str){
            int mincount = INT_MAX;
            for(int i=0;i<words.size();i++){
                if(map.find(make_pair(i,c)) == map.end() ){
                    break;
                }
                else{
                    int tmp = map[make_pair(i,c)];
                    tmp<mincount ? mincount = tmp:tmp = 0; 
                }
                if(i==words.size()-1)
                    for(int i=0;i<mincount;i++)
                        result.push_back(string(1,c));
            }
        }

        return result;
    }

    std::string makeUnique(const std::string& input) {
        std::set<char> seen;
        std::string result;

        for (char c : input) {
            if (seen.insert(c).second) { 
                result += c;
            }
        }

        return result;
    }   
};
// @lc code=end

