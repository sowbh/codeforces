/*118A - String Task
time limit per test2 seconds
memory limit per test256 megabytes
input standard input
output standard output
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
input Copy
tour
output Copy
.t.r
input Copy
Codeforces
output Copy
.c.d.f.r.c.s
input Copy
aBAcAba
output Copy
.b.c.b   */

/*one type
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string consonants(string str)
    {
        int n = str.length();
        string ans;
        for (int i = 0; i < n; i++)
        {
            char ch = tolower(str[i]);
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'y')
            {
                ans += '.';
                ans += ch;
            }
        }
        return ans;
    }
};

int main()
{
    string st;
    cin>>st;
    
    Solution sol;
    cout << sol.consonants(st);

    return 0;
}  */

//another type
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string consonants(string str)
    {
        string ans;
        for (char ch:str){
            if(!isVowels(ch)){
                ans+='.';
                ans+=tolower(ch);
            }
        }
        return ans;
    }

private:
    bool isVowels(char ch)
    {
        ch=tolower(ch);
        return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='y';
    }
};

int main()
{
    string st;
    cin>>st;
    
    Solution sol;
    cout << sol.consonants(st);

    return 0;
}