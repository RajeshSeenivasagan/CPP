#include "SumNum.hpp"



SumNum::SumNum()
{
}


SumNum::~SumNum()
{
}


std::vector<int> SumNum::returnIndices(std::vector<int>& input, int target) {
	for (int x = 0; x < input.size(); x++) {
		for (int y = x + 1; y < input.size(); y++) {
			if (input[x] + input[y] == target) {
				return { x,y };
			}
		}
	}
	return { -1,-1 };
}
