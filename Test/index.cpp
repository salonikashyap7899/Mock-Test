#include <iostrem>
#include <vector>
#include <string>

void moveZeroes(std::vector<int> &nums)
{
    int n = nums.size();
    int writePos = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            nums[writePos++] = nums[i];
        }
    }

    while (writePos < n)
    {
        nums[writePos++] = 0;
    }
}

int main()
{
    std::vector<int> nums = {0, 1, 0, 3, 12};

    moveZeroes(nums);

    std::cout << "Output: [";
    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i];
        if (i != nums.size() - 1)
        {
            std::cout << ",";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
