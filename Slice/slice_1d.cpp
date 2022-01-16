#include <vector>
#include <algorithm>

using namespace std;

//排序
void SORT(vector<int>& A) {sort(A.begin(),A.end());}

//逆序
void RSORT(vector<int>& A) {sort(A.rbegin(),A.rend());}

///合并
vector<int> COMB(vector<int>& A,vector<int>& B){
    vector<int> AB( A.size() + B.size() );
    AB.insert( AB.end(), A.begin(), A.end() );
    AB.insert( AB.end(), B.begin(), B.end() );
    return AB;
}

//有序合并
vector<int> MERG(vector<int>& A,vector<int>& B){
    vector<int> AB(A.size() + B.size());
    merge(A.begin(), A.end(),B.begin(), B.end(), AB.begin());
    return AB;
}