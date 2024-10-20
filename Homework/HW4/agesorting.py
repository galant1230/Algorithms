def quick_sort(lb, rb):
	if lb >= rb:
		return
	p = list_[rb]
	l = lb
	r = rb - 1
	while(1):
		while(list_[l] < p):
			l += 1
			if l == rb:
				break
		while(list_[r] >= p and r > lb):
			r -= 1
			if r == lb:
				break
		if l < r:
			list_[l], list_[r] = list_[r], list_[l]
		else:
			break
	list_[rb], list_[l] = list_[l], list_[rb]
	quick_sort(lb, l - 1)
	quick_sort(l + 1, rb)
	return

while(1):
	L = int(input())
	if not L:
		break
	list_ = input().split()
	list_ = list(map(int, list_))
	rb = L - 1
	lb = 0
	flag = False
	for i in range(L - 1):
		if list_[i] > list_[i + 1]:
			flag = True
			break
	if flag:
		quick_sort(lb, rb)
	list_ = list(map(str, list_))
	string = ' '.join(list_)
	print(string)
