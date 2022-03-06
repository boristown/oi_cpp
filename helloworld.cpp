//Compile and run this file with gcc:
//g++ helloworld.cpp -o helloworld.exe
//.\helloworld.exe
#include<iostream>

using namespace std;

int main(){
    int t,n;
    long long mx,sm;
    string L;
    cin>>t;
    while(t--){
        cin>>n;
        mx = sm = 0;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            //cout << "temp:" << temp << endl;
            mx = temp > mx ? temp:mx;
            sm += temp;
        }
        if(mx==0){
            cout<<0<<endl;
        }
        else if(mx*2>sm){
            cout<<mx*2-sm<<endl;
        }
        else{
            cout << 1<<endl;
        }
    }
    return 0;
}