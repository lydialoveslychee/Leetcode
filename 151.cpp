class Solution {
public:
    void reverseWords(string &s) {
        int l = s.length();
        int prev = 0;
        if(l == 0) return;
        stack<string> stk;
        while(prev < l) {
            if(s[prev] != ' ') {
                int i = 0;
                for(i = prev; i < l; i++) {
                    if(s[i] == ' ') {
                        string tmp = s.substr(prev, i-prev);
                        stk.push(tmp);
                        prev = i;
                        break;
                    }
                }
                if(i == l) {
                    string tmp = s.substr(prev, i-prev);
                    stk.push(tmp);
                    prev = i;
                }
            }
            prev++;
        }
        s = "";
        // cout<<stk.top()<<endl;
        while(!stk.empty()) {
            string tmp = stk.top();
            stk.pop();
            s += tmp;
            s += " ";
        }
        l = s.length()-1;
        while(l >= 0 && s[l] == ' ') {
            s.erase(s.end()-1);
            l--;
        }
    }
};