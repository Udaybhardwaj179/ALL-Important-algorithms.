  void solve(int index, vector<string> &ans, string temp, string v){
    if (index>=v.size()){
        ans.push_back(temp);
        return;
    }
    // exclude ki call ..
    solve(index+1,ans,temp,v);
    char element=v[index];
    temp.push_back(element);
    // include ki call.. 
    solve(index+1,ans,temp,v);
}


// solve(0,ans,temp,str)
