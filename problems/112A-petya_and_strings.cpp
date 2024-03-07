/*112A - Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order   */

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string toLower(string s)
    {
        for (char &c : s)
        {
            if (isupper(c))
            {
                c = tolower(c);
            }
        }
        return s;
    }

    int lexicography(string s1, string s2)
    {
        // Convert both strings to lowercase
        s1 = toLower(s1);
        s2 = toLower(s2);
        return s1.compare(s2);
        }
    };

    int main()
    {

        string str1, str2;
        cin >> str1 >> str2;

        Solution sol;
        cout << sol.lexicography(str1, str2) << endl;

        return 0;
    }