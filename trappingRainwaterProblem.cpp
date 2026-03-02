//  Given an array arr[] with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. This problem is also known as "Trapping Rain Water" problem and indeed it is one of the hardest problems I have solved till now.
// In this problem, water can only be stored if there are supporting buildings on both the left and right sides. The amount of water trapped depends on the minimum height of the left and right maximums, minus the current building's height.
//  👉Solution with Extra Space : We can use two auxiliary arrays (left max and right max) to pre-calculate the maximum heights to the left and right of each building, allowing for a more efficient calculation of trapped water.
// Time complexity: O(n)
// Space complexity: O(n) as here 2 arrays are being created.

// But in question asks for a solution that specifies space complexity should be O(1).

// 👉Optimal Approach: Find global maximum
// Traverse left side separately till we reach Maximum Height/Bar
// Traverse right side separately till the same.
// This solution's TC is same, but it is space efficient i.e., O(1) 
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n = arr.size();
        int leftMax = 0, rightMax = 0, water = 0, maxHeight = arr[0], index = 0 ;
        for (int i = 1; i<n ;i++){
            if (maxHeight<arr[i]){
                maxHeight = arr[i];
                index = i;
            }
        }
        //left part
        for (int i = 0; i<index; i++){
            
            if (leftMax > arr[i] ){
                water += leftMax - arr[i];
            }
            else{
                leftMax = arr[i];
            }
        }
        
        //right part
           
        for (int i = n-1; i>index; i--){
            
            if (rightMax > arr[i] ){
                water += rightMax - arr[i];
            }
            else{
                rightMax = arr[i];
            }
        }
        return water;
    }
};