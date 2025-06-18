// Reverse the vector from a index
vector<int> nums;
index=2;
reverse(nums.begin()+index+1,nums.end());

// std::vector<std::vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
To access [1, 3] (which is the first inner vector):
std::vector<int> first = intervals[0];  // first = {1, 3}
To access individual elements:
int a = intervals[0][0];  // a = 1
int b = intervals[0][1];  // b = 3

ans.back()[1] accesses the end time of the last merged interval in the result list ans.

// camel case
Format: firstLetterLowercaseThenCapitalizeEachWord

// Snake case
Format: first_case_occurance

// pascal case
Format: FirstCaseOccurance