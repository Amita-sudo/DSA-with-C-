// class Solution {
//   public:
//     int getSecondLargest(vector<int> &arr) {
//         // code here
//         int firstMax = INT_MIN;
//         for (int i = 0 ; i<arr.size() ; i++){
//             if (firstMax < arr[i]){
//                 firstMax = arr[i];
//             }
//         }
//         int secondMax = INT_MIN;
//         for ( int i = 0; i<arr.size(); i++){
//             if (arr[i]!=firstMax){
//                 secondMax = max(arr[i],secondMax)
//             }
//         }
//     }
// };