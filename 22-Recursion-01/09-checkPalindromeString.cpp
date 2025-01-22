#include <iostream>
using namespace std;

bool checkPalindrome(int i, string &s)
{
    if (i >= s.size() / 2)
    {
        return true;
    }
    if (s[i] != s[s.size() - i - 1])
    {
        return false;
    }

    // checkPalindrome(i + 1, s); i didn't write return here(which was a mistake btw) but it turns out to be fine since a function's return value is used by the calling function unless explicitly discarded.The return value propagates back up through the call stack to the initial call and is returned unless we explicitly discard it.BUt write return since that how recursion works...

    return checkPalindrome(i + 1, s);
}

// Time Complexity: O(N) { Precisely, O(N/2) as we compare the elements N/2 times and swap them}.
// Space Complexity is here auxilliary stack space: O(N) { Precisely, O(N/2) since half of the size of string no. of recursion calls will be waiting in recursion stack if the string is palindrome(worst case) }.
int main()
{
    string str;
    cout << "Enter the string:" << endl;
    cin >> str;
    if (checkPalindrome(0, str))
    {
        cout << str << " is palindrome string" << endl;
    }
    else
    {
        cout << str << " is not palindrome string" << endl;
    }
    return 0;
}