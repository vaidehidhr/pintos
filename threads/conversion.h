

typedef int fixed_t;


#define THREADS_FIXED_POINT_H

#define fp_t int
#define P 17
#define Q 14
#define WEIGHT 1<<(Q)




#define ADD(x, n) (x) + (n) * (WEIGHT)

#define SUB(x, n) (x) - (n) * (WEIGHT)


#define MULF(x,y) ((int64_t)(x)) * (y) / (WEIGHT)

#define DIVF(x,y) ((int64_t)(x)) * (WEIGHT) / (y)
#define MUL(A,B) (A * B)
#define DIV(A,B) (A / B)

#define CONVTOFP(x) (x) * (WEIGHT)

#define CONVTOZERO(x) (x) / (WEIGHT)

#define CONVTONEAR(x) ((x) >= 0 ? ((x) + (WEIGHT) / 2) / (WEIGHT) : ((x) - (WEIGHT) / 2) / (WEIGHT))

#define INTPART(A) (A >> 14)
#define NSUB(A,B) (A - B)
#define NADD(A,B) (A + B)




