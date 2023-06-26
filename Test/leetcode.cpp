#include <iostream>
#include <string>
#include <unordered_map>

int firstUniqChar(std::string s)
{
    std::unordered_map<char, int> charCount;

    for (char c : s)
    {
        charCount[c]++;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (charCount[s[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    std::string s = "leetcode";

    int index = firstUniqChar(s);

    std::cout << "Index of the first non-repeating character: " << index << std::endl;

    return 0;
}
