
#include <iostream>
#include<vector>
class Solution {
public:
    int longestPalindrome(string s) {
            int ct =  0, odd = 0;
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        for (int i = 0; i<s.size(); i++){
            if (s[i] >= 'a' && s[i] <= 'z'){
            lower[s[i]-'a']++;     
            } 
              
              else{
            upper[s[i]-'A']++;        
              }
        }
    for (int i = 0; i<26; i++){
        if (lower[i]%2==0){
          ct += lower[i];
        }
        else{
            ct += lower[i]-1;
            odd++;
        }

        if (upper[i]%2==0){
          ct += upper[i];
        }
        else{
            ct += upper[i]-1;
            odd++;
        }
    }
if(odd > 0) ct+=1;    
return ct;
}
};