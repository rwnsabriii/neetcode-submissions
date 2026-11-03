class Solution {
public:
    void reverseString(vector<char>& s) {
        int p1=0;
        int p2=s.size()-1;
        char temp;
        while(p1<=p2)
        {
           temp= s[p1];
           s[p1]=s[p2];
           s[p2]=temp;
           p1++;
           p2--;
        }
    }
};