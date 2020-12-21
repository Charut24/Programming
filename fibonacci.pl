fib(0,1).
fib(1,1).

/* Rules */
fib(N,F):-N=M+1, M=K+1, fib(M,G),fib(K,H), F=G+H, N>1
