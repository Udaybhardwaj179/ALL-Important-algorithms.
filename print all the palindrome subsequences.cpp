#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;
bool palindrome(vector <int> temp){
    int start=0;
    int end=temp.size()-1;
    while(start<=end){
        if (temp[start++]!=temp[end--])return false;
        return true;
    }
}
void solve(int index,vector <vector<int>> &ans,vector<int>&temp,vector<int>&v){
    if (index>=v.size()){
        if (palindrome(temp)){
            for (auto i:temp){
            cout<<i<<" ";
        }
        cout<<endl;
        ans.push_back(temp);
        return;
        }  
        return;
    }
    temp.push_back(v[index]);
    solve(index+1,ans,temp,v);
    temp.pop_back();
    solve(index+1,ans,temp,v);
}
int main(){


vector<int> v={1,2,1};
vector <vector<int>> ans;
vector<int> temp;
solve(0,ans,temp,v);

    
   
    

    return 0;
}
// print all the palindrome subsequences.
