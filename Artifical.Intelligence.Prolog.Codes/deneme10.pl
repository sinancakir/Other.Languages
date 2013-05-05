start(X,Y):-Y is X+1,nl.

topla:-write('1st: '),read(X),
	write('2nd: '),read(Y),
	Z is X+Y,write(Z),nl.

fact(0,1).
fact(N,R):- fact(N1,R1),N is N1+1,R is R1*N.

abs(a,s).


ebeveyn(ali,ege).
ebeveyn(ayse,ege).
ebeveyn(ali,burcu).
ebeveyn(ege,fatma).
ebeveyn(ege,gul).
ebeveyn(gul,can).

bayan(ayse).
bayan(burcu).
bayan(fatma).
bayan(gul).

bay(ali).
bay(ege).
bay(can).

cocuk(Y,X):-ebeveyn(X,Y).
anne(X,Y):-ebeveyn(X,Y),bayan(X).
baba(X,Y):-ebeveyn(X,Y),bay(X).

buyukEbeveyn(X,Z):-ebeveyn(X,Y),ebeveyn(Y,Z).

dede(X,Z):-ebeveyn(X,Y),ebeveyn(Y,Z),bay(X).
nine(X,Z):-ebeveyn(X,Y),ebeveyn(Y,Z),bayan(X).

sister(X,Y):-ebeveyn(Z,X),ebeveyn(Z,Y),bayan(Y).
brother(X,Y):-ebeveyn(Z,X),ebeveyn(Z,Y),bay(Y).

ata(X,Z):-ebeveyn(X,Z).
ata(X,Z):-ebeveyn(X,Y),ebeveyn(Y,Z).

