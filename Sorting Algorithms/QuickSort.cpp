#include<vector>
using std::vector;

int Partition(vector<int> &v, int start, int end)
{
	int pivot = v[start];
	int pindex = start;
	for (int i = start + 1; i <= end; i++)
	{
		if (v[i] < pivot)
		{
			pindex++;
			if (pindex == i)
				continue;
			int temp = v[pindex];
			v[pindex] = v[i];
			v[i] = temp;
		}
	}
	int temp = v[pindex];
	v[pindex] = v[start];
	v[start] = temp;
	return pindex;	
}
void QuickSort(vector<int> &v, int start, int end)
{
	if (start < end)
	{
		int pindex = Partition(v,start, end);
		QuickSort(v, start, pindex - 1);
		QuickSort(v, pindex + 1, end);
	}
}
void QuickSort(vector<int> &v)
{
	QuickSort(v, 0, v.size() - 1);
}
