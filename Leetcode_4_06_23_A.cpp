//2716. Minimize String Length
class Solution {
public:
    int minimizedStringLength(string s) {
        int n = s.size();
        int  l= n;
        sort(s.begin(),s.end());
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
                l--;
        }
        return l;
    }
};
