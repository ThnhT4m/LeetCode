#include<iostream>
#include<vector>
using namespace std;
    void rotate(vector<vector<int>>&matrix){
        int n = matrix.size();
        int b[n][n];
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    b[i][n-j-1]=matrix[j][i];
                }
            }
            for(int i = 0 ; i < n ; i++){
                for(int j = 0 ; j < n ; j++){
                    matrix[i][j]=b[i][j];
                }
            }
    }
int main(){
    int n; cin>>n;
    vector<vector<int>>b;
     for(int i = 0 ; i < n ; i++){
        vector <int> con;
        for(int j =0 ; j < n ; j++){
            int a;
            cin>>a;
            con.push_back(a);
        }
        b.push_back(con);
    }
    rotate(b);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}