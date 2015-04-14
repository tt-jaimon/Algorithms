#include<vector>
#include<random>
#include<iostream>
using std::vector;

int RandPartition(vector<int> &v, int start, int end)
{
	std::random_device rd;
	std::mt19937 eng(rd());
	std::uniform_int_distribution<int> dist(start, end);
	int pos = dist(eng);
	int pivot = v[pos];
	int pindex = start;
	for (int i = start; i <= end; i++)
	{
		if (v[i] < pivot)
		{
			if (pindex == pos)
				pindex++;
			int temp = v[pindex];
			v[pindex] = v[i];
			v[i] = temp;
			pindex++;
		}
	}
	if (pos < pindex)
		pindex--;
	int temp = v[pindex];
	v[pindex] = v[pos];
	v[pos] = temp;
	return pindex;
}
void RandQuickSort(vector<int> &v, int start, int end)
{
	if (start < end)
	{
		int pindex = RandPartition(v, start, end);
		RandQuickSort(v, start, pindex - 1);
		RandQuickSort(v, pindex + 1, end);
	}
}
void RandQuickSort(vector<int> &v)
{
	RandQuickSort(v, 0, v.size() - 1);
}
