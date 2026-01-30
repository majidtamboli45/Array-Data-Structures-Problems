#include <iostream>
#include <vector>
#include <map>
using namespace std;

string read(vector<int> &book, int target)
{
    map<int, int> mp;
    
    for (int i = 0; i < book.size(); i++)
    {
        int a = book[i];
        int more = target - a;

        if (mp.find(more) != mp.end())
        {
            return "yes";
        }
        mp[a] = 1;
    }
    return "NO";
}

int main()
{
    vector<int> book = {4, 1, 2, 3, 6};   // predefined values
    int target = 5;                       // predefined target

    cout << read(book, target) << endl;

    return 0;
}
