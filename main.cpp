#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int> &numbers)
{
    int total = 0;
    for (int &number : numbers)
    {
        total += number;
    }
    return total;
}


int main()
{
    vector<int> numbers{6, 8, 2, 4, 6, 2, 28, 12, 17, 1};
    cout << getSum(numbers) << endl;
    return 0;
}
