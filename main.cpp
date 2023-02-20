#include <iostream>
#include <vector>
#include <limits.h>
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

int getMin(vector<int>& numbers)
{
    int min = INT_MAX;
    for(int& number: numbers)
    {
      if(number<min) min = number;
    }
    return min;
}
int main()
{
    vector<int> numbers{6, 8, 2, 4, 6, 2, 28, 12, 17, 1};
    cout << getSum(numbers) << endl;
    cout << getMin(numbers) << endl;
    return 0;
}
