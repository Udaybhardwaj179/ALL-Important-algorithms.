

void solve(string s, int n,vector<string>&ans)
{
    for (int i = 0; i < n; i++){
        for (int len = 1; len <= n - i; len++){
          cout<<s.substr(i, len);
            ans.push_back(s.substr(i, len));
            }
    }
             
}
int main (){
string s2 ="abc";
vector<string> ans;
string temp ="";
solve(s2,s2.size(),ans);
  return 0;
}
