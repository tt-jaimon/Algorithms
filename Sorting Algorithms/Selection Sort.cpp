#include<vector>
using std::vector;

void SelectionSort(vector<int> &v)
{
	int pos = 0;
	for (size_t i = 0; i < v.size(); i++)
	{
		pos = i;
		for (size_t j = i + 1; j < v.size(); j++)
		{
			if (v[j] < v[pos])
				pos = j;
		}
		if (pos != i)
		{
			int temp = v[pos];
			v[pos] = v[i];
			v[i] = temp;
		}
	}
	
}
