void states(int s0, int s1, int P, int D, int* S0, int* S1, int* M, int* S) {
    *S0 = s0 & (!s1) | (!s0) & s1 & D | s0 & (!P) & (!D);
    *S1 = s1 & (!D) | (!s0) & (!s1) & P | s0 & (!s1) & (!P);
    *M = s1 & (!D) | (!s0) & (!s1) & P | s0 & (!s1) & (!P);
    *S = (!s0) & s1 | P & (!D) | (!s0) & P | (!s1) & P;
}