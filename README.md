# lab3
practice 4/7

compile:
make

execute:
/.DoIt!

B.

1000:
0 vs 0.01

10000:
0 vs 1.34

100000:
0.05 vs 128.15

1000000:
0.54 vs .

When n, the numbers needed to be sorted, becomes bigger, n^2 grows large extrememly fast.
However, n logn will not increse as fast as n^2. Though logn -> Inf as n -> Inf,
because the bigger the n gets, the speed of logn, which is 1/nln(10), will get really small, thus 
the time required O(n logn) is significantly less than O(n^2)
