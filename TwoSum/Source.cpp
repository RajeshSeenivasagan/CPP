#include "iostream"
#include <vector>
#include "SumNum.hpp"





int main() {
	std::vector<int> nums = { 2, 7, 11, 15 };
	int target = 22;

	SumNum sol;
	std::vector<int> ans = sol.returnIndices(nums, target);
	if ((ans[0] == -1) && (ans[1] == -1)) {
		std::cout << "No solution" << "\n";
	}
	else {
		std::cout << ans[0] << "    " << ans[1] << "\n";
	}
	
}