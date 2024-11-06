#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void nkeys_i__nit(void);
void encodeStrings_litStr9_i__nit(void);
void encodeStrings_litStr11_i__nit(void);
void penlist_i__nit(void);
void penalise(int value, int op, int operand);
void encodeStrings_litStr5_i__nit(void);
void nright_i__nit(void);
void keys_i__nit(void);
void encodeStrings_litStr1_i__nit(void);
void encoder(int n, char str[]);
void defaultkeys_i__nit(void);
int opnum(int op);
void nwrong_i__nit(void);
void encodeStrings_litStr12_i__nit(void);
int problem(void);
void encodeStrings_litStr6_i__nit(void);
void keylist_i__nit(void);
void encodeStrings_litStr2_i__nit(void);
void showstats(int bool_sigint);
void intr();
int main(int _formal_argc, char **_formal_argv, char **_formal_envp);
void qtime_i__nit(void);
void encodeStrings_litStr7_i__nit(void);
int getrandom(int maxval, int op, int operand);
void encodeStrings_litStr3_i__nit(void);
void megaInit(void);
struct penalty {
    int value;
    int penalty;
    struct penalty *next;
};
void penalty_i__nit(void);
void encodeStrings_litStr8_i__nit(void);
void rangemax_i__nit(void);
void encodeStrings_litStr10_i__nit(void);
void encodeStrings_litStr4_i__nit(void);
void encodeStrings_litStr0_i__nit(void);

extern char encodeStrings_litStr8[8];
extern char encodeStrings_litStr7[8];
extern char encodeStrings_litStr6[23];
extern char encodeStrings_litStr5[23];
extern char encodeStrings_litStr4[2];
extern char encodeStrings_litStr3[14];
extern char encodeStrings_litStr2[41];
extern char encodeStrings_litStr1[41];
extern char encodeStrings_litStr0[41];
extern char encodeStrings_litStr12[2];
extern char encodeStrings_litStr11[29];
extern char encodeStrings_litStr10[52];
extern int _global_argc;
extern char keylist[5];
extern int penalty[sizeof(keylist) - 1UL][2];
extern int nwrong;
extern char **_global_envp;
extern char defaultkeys[3];
extern char *keys;
extern struct penalty *penlist[sizeof(keylist) - 1UL][2];
extern int nright;
extern time_t qtime;
extern int rangemax;
extern int nkeys;
extern char **_global_argv;
extern char encodeStrings_litStr9[35];
