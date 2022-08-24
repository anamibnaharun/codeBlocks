class Solution {
public:
    static bool check( string st) {
        char cur = '1';
        for(int i = 0; i < st.size(); i++){
            if(cur == '1' && st[i] == cur) continue;
            if((i == 0 && st[i] == '0') ||(cur == '1' && st[i] != cur && st[i - 1] == cur)) {
                cur = '0';
            }
            if(cur == '0' && st[i] == cur) continue;
            else return false;
        }
        return true;
    }
    static string swap(string st) {
        for(int i = 1; i < st.size(); i++) {
            if(st[i - 1] == '0' && st[i] == '1'){
                st[i-1] = '1', st[i] = '0';
                i++;
            }
        }
        return st;
    }
    int secondsToRemoveOccurrences(string s) {
        int count = 0;
        while( !Solution::check(s)) {
            count++;
            s = Solution::swap(s);
        }
        return count;
    }
};


/*
        Test case : 
        1111
        0000
        1100
        0011
*/