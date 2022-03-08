//Compile and run this file with gcc:
//g++ helloworld.cpp -o helloworld.exe
//.\helloworld.exe
#include<iostream>
#include<cstring>
#include<vector>
#include<unordered_map>
#include<utility>
#include<queue>
#include<algorithm>

using namespace std;

int main(){
    int t,n,m,k,x,w,sm,i,j;
    string sp;
    cin>>t;
    while(t--){
        priority_queue<tuple<int,int,int>> evt;
        vector<pair<int,int>> vc;
        cin>>n>>m;
        //cout<<"n:"<<n<<";m:"<<m<<endl;
        n*=2;
        k=0;
        sm = 0;
        for(int i=0;i<m;i++){
            cin>>x>>w;
            evt.push(make_tuple(w,x,i+1));
            sm+=w;
            k++;
            if(k>n){
                tie(w,x,j) = evt.top();
                sm-=w;
                evt.pop();
            }
        }
        cout<<sm<<endl;
        while(!evt.empty()){
            tie(w,x,j) = evt.top();
            evt.pop();
            vc.push_back(make_pair(x,j));
        }
        sort(vc.begin(),vc.end());
        i=0;
        j=n-1;
        while(i<j){
            int pi,pj;
            tie(x,pi) = vc[i];
            tie(x,pj) = vc[j];
            cout<<pi<<" "<<pj<<endl;
            i++;
            j--;
        }
        cout<<endl;
    }
    return 0;
}