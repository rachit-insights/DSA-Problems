class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result;
        int st=0;
        int end=numbers.size()-1;
        while(st<end){
        if(numbers[st]+numbers[end]==target){
    result.push_back(st+1);
    result.push_back(end+1);
    return result;
        }
        else if(numbers[st]+numbers[end]>target){
end--;
        }
        else{
st++;
        }
        }
        return result;
    }
};