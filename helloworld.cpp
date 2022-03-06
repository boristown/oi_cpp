//Compile and run this file with gcc:
//g++ helloworld.cpp -o helloworld.exe
//.\helloworld.exe
#include<iostream>
#include<cstring>
#include<vector>
#include<unordered_map>
#include<utility>

using namespace std;

int main(){
    int n,m,c;
    int i,j;
    int x1,y1,x2,y2;
    unordered_map<int,vector<pair<int,int>>> M;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        vector<pair<int,int>> vc;
        for (int j = 0; j < m; j++){
            cin >> c;
            if(!M.count(c)){
                M[c] = vector<pair<int,int>>();
            }
            M[c].push_back(make_pair(i,j));
        }
    }
    long long ans = 0;
    for(auto c:M){
        int len = c.second.size();
        for(int i=0;i<len-1;i++){
            tie(x1,y1) = c.second[i];
            for(int j=i+1;j<len;j++){
                tie(x2,y2) = c.second[j];
                ans += abs(x1-x2) + abs(y1-y2);
            }
        }
    }
    cout << ans << endl;
    return 0;
}