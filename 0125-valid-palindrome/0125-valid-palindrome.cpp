class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
      for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            st.push_back(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z'){
            st.push_back(s[i]-'A'+'a');
        }
      }
      int start=0;
      int e=st.size()-1;
      while(start<e){
        if(st[start]!=st[e]){
            return 0;
        }
        start++;
        e--;
      }
      return 1;
    }
};