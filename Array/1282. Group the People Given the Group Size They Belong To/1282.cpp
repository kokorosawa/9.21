class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> dict;     //use unordered_map to make a table to record how many nums in gronp now 
        for(int i=0;i<groupSizes.size();i++){
            int key=groupSizes[i];
            if(dict[key].size()>0){
                dict[key].push_back(i);
            }else {
                dict[key]=vector<int>{i};     //if these no group now than creat new one 
            }
            if(dict[key].size()==key){      //check if the group full
                ans.push_back(dict[key]);   //if it full push_back to the vector<int> ans
                dict.erase(key);            //ans erase the key ans value in unordered_map cuz if don't erase you can't an aother group
            }
        }
        return ans;
    }
}; 
