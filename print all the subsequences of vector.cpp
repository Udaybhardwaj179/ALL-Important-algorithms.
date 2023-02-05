#include <iostream>
#include <list>
#include <vector>
#include <unordered_map>
#include <list>
using namespace std;

void solve(int index,vector <vector<int>> &ans,vector<int>&temp,vector<int>&v){
    if (index>=v.size()){
        for (auto i:temp){
            cout<<i<<" ";
        }
        cout<<endl;
        ans.push_back(temp);
        return;
    }
    temp.push_back(v[index]);
    solve(index+1,ans,temp,v);
    temp.pop_back();
    solve(index+1,ans,temp,v);
}
int main(){


vector<int> v={1,2,3,4};
vector <vector<int>> ans;
vector<int> temp;
solve(0,ans,temp,v);

    
   
    

    return 0;
}
// print all the subsequences.
