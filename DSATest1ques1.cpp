#include<iostream>
using namespace std;
#include<vector>


    void moveZeroes(vector<int>& nums) {
    
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    }     
    }
    void printarray(vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
    }
int main()
{
    vector<int> arr{0,1,0,3,12};
    moveZeroes(arr);
    printarray(arr);
    return 0;
}