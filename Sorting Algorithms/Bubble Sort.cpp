#include<vector>
using std::vector;

void BubbleSort(vector<int> &v)
{
	int NoChange = 1;
	for (size_t i = 0; i < v.size(); i++)
	{
		NoChange = 1;
		for (size_t j = 1; j < v.size()-i; j++)
		{
			if (v[j - 1]>v[j])
			{
				int temp = v[j - 1];
				v[j - 1] = v[j];
				v[j] = temp;
				NoChange = 0;
			}

		}
		if (NoChange)
			break;
	}
}
