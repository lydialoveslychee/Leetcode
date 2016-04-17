class Solution {
public:
    vector<int> diffWaysToCompute(string input) {
        vector<int> result;
        int l = input.length();
        int flag = 0;
        int num = 0;
        for(int i = 0; i < l; i++) {
            if(input[i] > '9' || input[i] < '0') {
                flag = 1;
                vector<int> left = diffWaysToCompute(input.substr(0, i));
                vector<int> right = diffWaysToCompute(input.substr(i+1, l-i-1));
                for(int j = 0; j < left.size(); j++) {
                    for(int k = 0; k < right.size(); k++) {
                        switch(input[i]) {
                            case '+' : {
                                result.push_back(left[j] + right[k]);
                                break;
                            }
                            case '-' : {
                                result.push_back(left[j] - right[k]);
                                break;
                            }
                            case '*' : {
                                result.push_back(left[j] * right[k]);
                                break;
                            }
                            default: break;
                        }
                    }
                }
            }
            else num = num*10+(input[i]-'0');
        }
        if(flag == 0) result.push_back(num);
        return result;
    }
    
};