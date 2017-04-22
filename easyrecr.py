import math

def func(n):
	list1 = []
	list1[0] = 1
	list1[1] = 3
	list1[n] = func(n-1)-func(n-2)
	total=0
	for i in range(0,n-1):
		total = total+list1[i]
	return total

if __name__=="__main__":
	T=raw_input()
	while(T!=0):
		N = raw_input()
		print func(N)
		T = int(T)-1
