#include <iostream>
#include <vector>

using namespace std;

int getSum(vector<int>);
double getAverage(vector<int>);


int main()
{
	vector<int> numbers {1, 2, 3, -8, 0, 1, 39, 7, 10, 12};
	cout << "Vector summation: " << getSum(numbers) << endl;
	cout << "Vector average: " << getAverage(numbers) << endl;
}

// Function getSum is used to get the summation of all the values of a given vector
int getSum(vector<int> values) {
	int sum = 0;
	for (int i : values)
	{
		sum += i;
	}
	return sum;
}

// Function getAverage is used to get the average of the values of a given vector
double getAverage(vector<int> values)
{
	return static_cast<double>(getSum(values)) / values.size();
}

