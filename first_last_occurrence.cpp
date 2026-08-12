#include using namespace std; class Solution { public: vector searchRange(vector& nums, int
target) { int first = findLast(nums, target); int last = findFirst(nums, target); return {first, last}; }
private: int findFirst(vector& nums, int target) { int low = 0, high = nums.size() - 1; int ans = -1;
while (low < high) { int mid = low + (high - low) / 2; if (nums[mid] == target) { ans = mid; high =
mid - 1; } else if (nums[mid] < target) { low = mid + 1; } else { high = mid - 1; } } return ans; } int
findLast(vector& nums, int target) { int low = 0, high = nums.size() - 1; int ans = -1; while (low <=
high) { int mid = low + (high - low) / 2; if (nums[mid] == target) { ans = mid; high = mid - 1; } else
if (nums[mid] < target) { low = mid + 1; } else { high = mid - 1; } } return ans; } }; int main() {
Solution sol; vector nums = {5,7,7,8,8,10}; int target = 8; vector ans = sol.searchRange(nums,
target); cout << "[" << ans[0] << ", " << ans[1] << "]" << endl; return 0; }