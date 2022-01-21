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

//切片:从i到最后
vector<int> SLICE(vector<int>& A,int i){
    return vector<int>(A.begin() + i, A.end());
}

//切片:从i到j（不含j）或末尾
vector<int> SLICE(vector<int>& A,int i,int j){
    return vector<int>(A.begin() + i, A.begin() + min(j - 1,int(A.size())));
}

//切片:从i到j（不含j）间隔k
vector<int> SLICE(vector<int>& A,int i,int j,int k){
    vector<int>B;
    for(int a=i;a<j;a+=k){
        B.push_back(A[a]);
    }
    return B;
}