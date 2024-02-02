from random import shuffle
from sys import argv

def print_tab(t):
	for n in t:
		print(n, end=" ")

def main():
	argc = len(argv)
	if argc == 1:
		exit()
	t = [i for i in range(int(argv[1]))]
	shuffle(t)
	print_tab(t)

if __name__=='__main__':
	main()