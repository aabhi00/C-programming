#include <iostream>
#include <vector>
#include <string>

using namespace std;
int lpalindromSubseq(const string &s){
int n = s.size();
vector<vector<int>> dp(n, vector<int>(n,0));

for (int i = 0; i < n; i++){
    dp[i][i] = 1;
}

for(int length = 2; length <= n; length++){
    for(int i = 0; i <= n -length; i++){
        int j = i + length - 1;
        if(s[i] == s[j]){
            dp[i][j] = dp[i+1][j-1] + 2;
        }
        else{
            dp[i][j] = max(dp[i+1][j],dp[i][j-1]);
            }
    }
}
return dp[0][n-1];
}
int main(){
string s = "babbb";
cout<<"length of the longest palindromic subsequence: "<<lpalindromSubseq(s)<<endl;
    return 0;
}