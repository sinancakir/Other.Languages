start:-write('input a= '),read(A),
	write('input b='),read(B),
	write('input c='),read(C),
	A>=0,B>=0,C>=0,
	A<B+C,B<C+A,C<A+B,
	write('These numbers are the edges of a triangle').
