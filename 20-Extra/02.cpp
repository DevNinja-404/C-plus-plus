#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a = 7;
    int count = __builtin_popcount(a); // gives the no. of set bits(bits which are 1) in the binary representation of 7
    cout << count << endl;

    long long b = 102926487639681;
    int count1 = __builtin_popcountll(b); // gives the no. of set bits(bits which are 1) in the binary representation of the value stored in b ,__builtin_popcountll() is used for no. of datatype long long
    cout << count1 << endl;

    // next permutation :
    string s = "123";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // next_permutation() gives us the next permutation of the string, if no more permutations ,it returns false

    // if s was "231" then the next permutations would be 312 321 and false. so if we want all the permutations possible we need to use it after using sort() i.e. start from the sorted string;

    // Max Element:
    int c[] = {1, 2, 3, 56, 34};
    int max = *max_element(c, c + 5); // returns a pointer to the maximum element
    cout << max << endl;

    int min = *min_element(c, c + 5); // returns a pointer to the minimum element
    cout << min << endl;

    return 0;
}