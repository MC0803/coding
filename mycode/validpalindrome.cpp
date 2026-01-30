#include <iostream>
using namespace std;

int main()
{
    char arr[] = "racecar";
    int n = sizeof(arr) / sizeof(arr[0]) - 1; // Exclude the null terminator
    int start = 0;
    int end = n - 1;
    bool isPalindrome = true;
    while (start < end)
    {
        if (arr[start] != arr[end])
        {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
    {
        cout << "The " << arr << " is a Palindrome" << endl;
    }
    else
    {
        cout << "The " << arr << " is not a Palindrome" << endl;
    }
    return 0;
}

// this is aleetcode valid palindrome probelm
// https://leetcode.com/problems/valid-palindrome/
// here sapces and special characters are ignored and case is not considered
// eg : "a man a plan a canal panama" is also a valid palindrome

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string a = "";
        for (char c : s)
        {
            if (isalnum(c))
            { //(c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') alnum is chatgpt for letters+digits
                a.push_back(tolower(c));
            }
        }

        int l = 0, r = a.length() - 1;
        while (l < r)
        {
            if (a[l] != a[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};