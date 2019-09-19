firstbuild.exe:addnumbers.o fact.o palindrome.o main.o
	gcc -o firstbuild.exe addnumbers.o fact.o palindrome.o main.o
main.o:main.c
	gcc -c main.c
addnumbers.o:addnumbers.c
	gcc -c addnumbers.c
fact.o:fact.c
	gcc -c fact.c
palindrome.o:palindrome.c
	gcc -c palindrome.c

