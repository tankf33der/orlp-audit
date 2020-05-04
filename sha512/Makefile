all: c a m u
a: c
	clang -fsanitize=address *.c ../sha512.c && ./a.out
m: c
	clang -fsanitize=memory *.c ../sha512.c && ./a.out
u: c
	clang -fsanitize=undefined *.c ../sha512.c && ./a.out
mike:
	cat *.c > mike.c
ccomp: c mike
	ccomp -fstruct-passing mike.c && ./a.out
interp: c mike
	ccomp -interp -quiet -fstruct-passing mike.c
c:
	rm -rf *.o *.out mike.c
