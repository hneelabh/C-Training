#define SIMPLE_INTEREST(P, r, t) ((P) * (r) * (t) / 100) 
#define AMOUNT(P, r, t) ((P) + SIMPLE_INTEREST(P, r, t)) 