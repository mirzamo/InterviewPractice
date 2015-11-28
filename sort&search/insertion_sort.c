void insertionSort (int *a, int n)
{
	int key, current, walk;
	for (current = 1; current < n; current++)
		key = a[current];
		walk = current - 1;
		while (walk >= 0 && a[walk] > key)
			a[walk + 1] = a[walk];
			walk--;
		a[wal+1] = key;
	return;
}