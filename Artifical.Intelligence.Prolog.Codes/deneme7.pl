my_write([]).
my_write([X|R]):-write(X),nl,my_write(R).

