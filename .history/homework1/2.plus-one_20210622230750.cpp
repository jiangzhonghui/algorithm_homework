class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int plus = 1;
        int n = digits.size();
        for(int i=n-1;i>=0;i--){
            digits[i] += plus;
            plus = digits[i] / 10;
            digits[i] = digits[i] % 10;
        }
        if(plus>0){
            digits.insert(digits.begin(),plus);
        }
        return digits;
    }
};




































