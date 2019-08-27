//
// Created by gzc on 2019-08-18.
//


#include <list>
#include <iostream>
#include "vector"
using namespace std;



void qiujie(int sum,int n)
{
    static list<int> ilist;
    if (sum < 1 || n < 1)
        return;
    if (sum > n)
    {
        F_LOOP:
        ilist.push_front(n);
        qiujie(sum-n,n-1);
        ilist.pop_front();
        qiujie(sum,n-1);
    }else{
        for(list<int>::reverse_iterator it = ilist.rbegin();it != ilist.rend();it++)
            cout<<*it<<" + ";

        cout<<sum;
        cout<<endl;
        while( (--n) >0)
        {
            if (sum > n)
                goto F_LOOP;
        }
    }
}


//void recursion(vector<int>& nums, int k, int pos) {
//    if (nums.size() == k){ ans.push_back(nums); return; }//若已找到 k 个值，记录并返回
//    for (int i = pos; i < nums.size(); i++) {		     //否则，遍历子节点
//        vector<int>tmp(nums);		//暂存：以备回溯
//        nums.erase(nums.begin()+i);	//删除：至下一层节点
//        recursion(nums, k, i);		//递归：DFS
//        nums = tmp;					//恢复：回溯
//    }
//}
//vector<vector<int>> ans;
//vector<vector<int>> combine(int n, int k) {
//    vector<int>nums(n,{(1,n)});
//    for (int i = 0; i < n; i++) nums[i] = i + 1;//初始化
//    recursion(nums, k, 0);													//DFS
//    return ans;															    //返回
//}

int main()
{
    int sum,n;
    cout<<"请输入你要从1......n数列中取值的n:"<<endl;
    cin>>n;
    cout<<"请输入你要等于多少的数据sum:"<<endl;
    cin>>sum;
    cout<<"生成所有的排序序列: "<<endl;
    qiujie(sum,n);
    return 0;
}