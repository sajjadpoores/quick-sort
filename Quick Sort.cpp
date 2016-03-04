int partition(int l,int h){
	
	int i = l + 1;
	int j = h;
	
	while (i <= j){
		while (a[i] < a[l] && i<=h)
			i++;
		while (a[j]>a[l])
			j--;
		if (i < j){
			int t = a[i];
			a[i] = a[j];
			a[j] = t;
			i++;
			j--;
		}
	}

	int t = a[j];
	a[j] = a[l];
	a[l] = t;
	return j;
	
}
void quick_sort(int low, int high){
	if (low < high){
		int p = partition(low, high);
		quick_sort(low, p - 1);
		quick_sort(p + 1, high);
	}
}
