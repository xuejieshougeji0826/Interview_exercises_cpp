#include "iostream"
#include "vector"
using namespace std;
class Solution {
public:
    void backtrack(vector<vector<int>>& ans, int n, int k, vector<int>& curr, int start){
        if(curr.size() == k){
//            cout<<curr.size()<<endl;
            ans.push_back(curr);
            return;
        }

        for(int i = start; i < n + 1; i++){
            curr.push_back(i);
            backtrack(ans, n, k, curr, i + 1);
            curr.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> curr;

        backtrack(ans, n, k, curr, 1);
        return ans;
    }
};

int main()
{
    int sum,n;
    cout<<"请输入你要从1......n数列中取值的n:"<<endl;
    cin>>n;
    cout<<"请输入你要等于多少的数据sum:"<<endl;
    cin>>sum;
    cout<<"生成所有的排序序列: "<<endl;
    Solution s;
    s.combine(n,sum);
    return 0;
}