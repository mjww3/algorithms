###gcdd 
import math

def gcd(a,b):
	if(b==0):
		return a
	else:
		return gcd(b,a%b)

if __name__=="__main__":
	T = raw_input()
	while(T!=0):
		A,B = raw_input().split()
		print (gcd(int(A),int(B)))
		T = int(T)-1

"""solved"""