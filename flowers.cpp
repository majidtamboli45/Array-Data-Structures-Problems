#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();

        for (int i = 0; i < m; i++) {
            // Check if current plot is empty
            if (flowerbed[i] == 0) {

                // Check left and right plots
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == m - 1 || flowerbed[i + 1] == 0);

                // If both sides are empty, plant flower
                if (leftEmpty && rightEmpty) {
                    flowerbed[i] = 1;
                    n--;

                    // If required flowers are planted
                    if (n == 0)
                        return true;
                }
            }
        }
        return n <= 0;
    }
};

int main() {
    Solution s;

    vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;

    if (s.canPlaceFlowers(flowerbed, n))
        cout << "True: Flowers can be planted." << endl;
    else
        cout << "False: Flowers cannot be planted." << endl;

    return 0;
}
