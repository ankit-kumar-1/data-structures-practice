#include <iostream>
using namespace std;

void findCombinations(string str, int i, string output)
{
    // base case
    if (i == str.length())
    {
        cout << output << endl;

        return;
    }
    char ch = str[i];
    // No space
    output.push_back(ch);
    findCombinations(str, i + 1, output);

    // withspace
    output.push_back(' ');
    if (str[i + 1] != '\0')
        findCombinations(str, i + 1, output);
}

int main()
{
    string str = "123";
    string output = "";
    findCombinations(str, 0, output);
}