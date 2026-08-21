// The idea is to use a DP principle
// The find function use the recursion to find the major element, but, int the moment of the x input we need to search the intermediate element between x and the major
// The ideia is: the pai[x] = major (and not an intermediate element)

#define MAXN 100100

int pai[MAXN];

int find(int x){
    if (pai[x] ==  x) return x;
    return pai[x] = find(pai[x]); //storage the value of pai[x] as your major element

}