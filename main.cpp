#include "TwoSum.h"


vector<int> twoSum(const vector<int>& nums, int target) {
  //   +=====================================================+
  //   |                 WRITE YOUR CODE HERE                |
  //   | Description:                                        |
  //   | - This function finds two numbers in 'nums' that    |
  //   |   sum up to the given 'target'.                     |
  //   | - It uses an unordered_map for quick look-up.       |
  //   | - It returns the indices of the numbers that add    |
  //   |   up to the target.                                 |
  //   |                                                     |
  //   | Return type: vector<int>                            |
  //   |                                                     |
  //   | Tips:                                               |
  //   | - 'numMap' stores numbers and their indices.        |
  //   | - 'complement' is the value needed to reach target. |
  //   | - Use 'find' method for quick look-up in map.       |
  //   | - Check output from Test.cpp in "User logs".        |
  //   +=====================================================+
  // Map to store numbers and their indices
    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); ++i) {
        // Calculate complement
        int complement = target - nums[i];

        // Check if complement is in map
        if (numMap.find(complement) != numMap.end()) {
            // If complement found, return indices
            return vector<int>{numMap[complement], i};
        }

        // Store the current number and its index in the map
        numMap[nums[i]] = i;
    }

    // Return empty vector if no solution is found
    // (Though the problem statement usually guarantees a solution)
    return vector<int>{};
}