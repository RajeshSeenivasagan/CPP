#pragma once
#include <vector>
class SumNum
{
public:
	SumNum();
	~SumNum();

	std::vector<int> returnIndices(std::vector<int>& input, int target);
};

