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

double getAverage(vector<int>& numbers){
    double total = 0.0;
    int sz = vector.size();
    for(int& number : numbers)
    {
	total += number;
    }
    return (total/sz);
}

int main()
{
    vector<int> numbers{6, 8, 2, 4, 6, 2, 28, 12, 17, 1};
    cout << getSum(numbers) << endl;
    cout << getAverage(numbers) << endl;
    return 0;
}
