#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        for(int i=0;i<n;i++){
            A[m+i]=B[i];
        }
    
    for(int j=0;j<m+n;j++){
        for(int k=0;k<m+n-1-j;k++){
            if(A[k+1]<A[k]){
                int temp=A[k];
                A[k]=A[k+1];
                A[k+1]=temp;
            }
        }
    }
    }

};
//ʵ���Կո�ָ����������룬�������з�����ֹ�����뵽����
void input(vector<int>&x)
{
    int temp;
    while(cin.peek()!='\n'){
        cin>>temp;
        x.push_back(temp);
    }
    cin.get();
}

int main(){
    vector<int>M;
    vector<int>N;
    int m,n;
    int temp;
    cout<<"������M,������N���������m��n��"<<endl;
    
    input(M);
    input(N);
    
    cin>>m;
    cin>>n;

    Solution Kit;
    Kit.merge(M,m,N,n);
    for(int i=0;i<m+n;i++){
        cout<<M[i]<<' ';
    }
    cout<<"end"<<endl;
    int k;
    cin>>k;
    return 0;
}