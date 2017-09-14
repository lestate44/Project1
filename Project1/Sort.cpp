#include "Sort.h"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void selectsort(vector<int> &v) {
	int c = 0;
	for (int i = 0; i < v.size(); ++i) {
		int min = i;
		for (int j = i + 1;j<v.size();++j) {
			++c;
			if (v[j]<v[min]) {
				min = j;
			}
		}
		int temp = v[min];
		v[min]=v[i];
		v[i] = temp;
	}
	cout << c << endl;
	return;
}


void insertsort(vector<int>& v) {
	int c = 0;
	for (int i = 1; i < v.size(); ++i) {
		++c;
		int temp = v[i];
		int j = i - 1;
		for (; j>=0&& v[j] > temp; --j) {
				++c;
				v[j+1] = v[j];
			}
		v[j+1] = temp;
	}
	cout << c << endl;
	return;
}


void shellsort(vector<int>& v) {
	int gap = 3;
	int c = 0;
	for (; gap > 0; --gap) {
		
		for (int i = 0; i < gap; ++i) {
			
			for (int j = i + gap; j < v.size(); j = j + gap) {
				++c;
				if (v[j] < v[j - gap]) {
					int temp = v[j];
					int k = j - gap;
					while (k >= 0 && v[k] > temp) {
						++c;
						v[k + gap] = v[k];
						k = k - gap;
					}
					v[k + gap] = temp;
				}
			}
		}
	}
	cout << c << endl;
}

void shell_sort(vector<int>& v) {
	int gap, i, j;
	int temp;
	int c = 0;
	//cout << v.size()<<endl;
	for (gap = v.size() >> 1; gap > 0; gap >>= 1) {
		
		//cout << gap << endl;
		for (i = gap; i < v.size(); i++) {
						temp = v[i];
			for (j = i - gap; j >= 0 && v[j] > temp; j -= gap) {
				++c;
				v[j + gap] = v[j];
			}

			v[j + gap] = temp;
		}
	}
	cout << c << endl;
}



void merge(vector<int>& v, int left, int middle, int right,int len) {
	vector<int> temp(len);
	int i = left, j = middle + 1, k = 0;
	while (i <= middle && j <= right) {
		if (v[i] < v[j])
			temp[k++] = v[i++];
		else
			temp[k++] = v[j++];
	}
	while (j <= right)
		temp[k++] = v[j++];
	while (i <= middle)
		temp[k++] = v[i++];
	for (i = left, k = 0; i <= right; ++i, ++k)
		v[i] = temp[k];


}

void divide(vector<int>& v, int left, int right) {
	if (left < right) {
		int middle = (left + right) / 2;
		divide(v, left, middle);
		divide(v, middle + 1, right);
//below is: merge(v, left, center, right, right-left+1);
		vector<int> temp(right-left+1);
		int i = left, j = middle + 1, k = 0;
		while (i <= middle && j <= right) {
			if (v[i] < v[j])
				temp[k++] = v[i++];
			else
				temp[k++] = v[j++];
		}
		while (j <= right)
			temp[k++] = v[j++];
		while (i <= middle)
			temp[k++] = v[i++];
		for (i = left, k = 0; i <= right; ++i, ++k)
			v[i] = temp[k];
	}

}


void msort(vector<int>& v, int left,int right) {
	if (left < right) {
		int middle = (left + right) / 2;
		msort(v, left, middle);
		msort(v, middle + 1, right);
		//below is: merge(v, left, center, right, right-left+1);
		vector<int> temp(right - left + 1);
		int i = left, j = middle + 1, k = 0;
		while (i <= middle && j <= right) {
			if (v[i] < v[j])
				temp[k++] = v[i++];
			else
				temp[k++] = v[j++];
		}
		while (j <= right)
			temp[k++] = v[j++];
		while (i <= middle)
			temp[k++] = v[i++];
		for (i = left, k = 0; i <= right; ++i, ++k)
			v[i] = temp[k];
	}
}


void msortn(vector<int>& v) {
	int gap = 1;
	int len = v.size();
	for (gap; gap < len; gap += gap) {
		for (int start = 0; start < len; start += gap+gap ) {
			int low = start, mid = min(start + gap-1, len-1), high = min(start + gap + gap-1, len-1);
			merge(v, start, mid, high, len);
		}
	}
}



void quicksort(vector<int>& v, int low, int high) {
	if (low < high) {
		int k = v[low], i = low, j = high;
		while (i < j) {
			while (v[j] >= k & i<j)--j;
			while (v[i] <= k&i<j)++i;
			if (i == j)break;
			int temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
		v[low] = v[i];
		v[i] = k;
		quicksort(v, low, i - 1);
		quicksort(v, i+1, high);
	}
}

