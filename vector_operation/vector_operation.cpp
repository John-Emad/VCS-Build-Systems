#include <iostream>
#include <vector>

using namespace std;

template <typename T>
T getSum(vector<T>);



int main()
{
	vector<int> numbers {1, 2, 3, -8, 0, 1, 39, 7, 10, 12};
	cout << getSum(numbers) << endl;

}

template <typename T>


T getSum(vector<T> values) {

	T sum = 0;

	for (T i : values)
	{
		sum += i;
	}
	return sum;
}

