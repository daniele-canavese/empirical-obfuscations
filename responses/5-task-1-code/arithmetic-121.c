#include "arithmetic.h"

int _global_argc = 0;
char keylist[5];
int penalty[sizeof(keylist) - 1UL][2];
int nwrong;
char **_global_envp = (char **) 0;
char defaultkeys[3];
char *keys;
struct penalty *penlist[sizeof(keylist) - 1UL][2];
int nright;
time_t qtime;
int rangemax;
int nkeys;
char **_global_argv = (char **) 0;

void penalise(int value, int op, int operand)
{
    struct penalty *p;
    void *tmp;
    int tmp___0;

    {
	op = opnum(op);
	tmp = malloc((size_t) ((unsigned int) sizeof(*p)));
	p = (struct penalty *) tmp;
	if ((unsigned long) p == (unsigned long) ((void *) 0)) {
	    return;
	}
	p->next = penlist[op][operand];
	penlist[op][operand] = p;
	tmp___0 = 5;
	p->penalty = tmp___0;
	penalty[op][operand] += tmp___0;
	p->value = value;
	return;
    }
}

int getrandom(int maxval, int op, int operand)
{
    int value;
    struct penalty **pp;
    struct penalty *p;
    int tmp;

    {
	op = opnum(op);
	tmp = rand();
	value = tmp % (maxval + penalty[op][operand]);
	if (value < maxval) {
	    return (value);
	}
	value -= maxval;
	pp = &penlist[op][operand];
	while (1) {
	    p = *pp;
	    if (!((unsigned long) p != (unsigned long) ((void *) 0))) {
		break;
	    }
	    if (p->penalty > value) {
		value = p->value;
		(penalty[op][operand])--;
		(p->penalty)--;
		if (p->penalty <= 0) {
		    p = p->next;
		    free((void *) ((char *) *pp));
		    *pp = p;
		}
		return (value);
	    }
	    value -= p->penalty;
	    pp = &p->next;
	}
	encoder(0, encodeStrings_litStr0);
	fprintf((FILE *) stderr, (char const *) (encodeStrings_litStr0));
	exit(-1);
    }
}

void intr()
{

    {
	showstats(1);
	exit(0);
    }
}

int main(int _formal_argc, char **_formal_argv, char **_formal_envp)
{
    int cnt;
    time_t tmp;
    int tmp___0;
    int tmp___1;

    {
	megaInit();
	_global_argc = _formal_argc;
	_global_argv = _formal_argv;
	_global_envp = _formal_envp;
	tmp = time((time_t *) ((void *) 0));
	srand((unsigned int) ((int) tmp));
	signal(2, &intr);
	while (1) {
	    cnt = 20;
	    while (1) {
		tmp___1 = cnt;
		cnt--;
		if (!tmp___1) {
		    break;
		}
		tmp___0 = problem();
		if (tmp___0 == -1) {
		    exit(0);
		}
	    }
	    showstats(0);
	}
    }
}

int opnum(int op)
{
    char *p;

    {
	if (op == 0) {
	    encoder(1, encodeStrings_litStr1);
	    fprintf((FILE *) stderr,
		    (char const *) (encodeStrings_litStr1), op, keylist);
	    exit(-1);
	} else {
	    p = strchr(keylist, op);
	    if ((unsigned long) p == (unsigned long) ((void *) 0)) {
		encoder(2, encodeStrings_litStr2);
		fprintf((FILE *) stderr,
			(char const *) (encodeStrings_litStr2), op,
			keylist);
		exit(-1);
	    }
	}
	return ((int) (p - (char *) (keylist)));
    }
}

void showstats(int bool_sigint)
{
    int tmp;

    {
	if (nright + nwrong > 0) {
	    encoder(9, encodeStrings_litStr9);
	    printf((char const *) (encodeStrings_litStr9),
		   nright, nwrong,
		   (int) ((100L * (long) nright) /
			  (long) (nright + nwrong)));
	    if (nright > 0) {
		encoder(10, encodeStrings_litStr10);
		printf((char const *) (encodeStrings_litStr10), qtime,
		       (double) ((float) qtime / (float) nright));
	    }
	}
	if (!bool_sigint) {
	    encoder(11, encodeStrings_litStr11);
	    printf((char const *) (encodeStrings_litStr11));
	    while (1) {
		tmp = getchar();
		if (tmp) {
		    break;
		}
	    }
	}
	encoder(12, encodeStrings_litStr12);
	printf((char const *) (encodeStrings_litStr12));
	return;
    }
}

int problem(void)
{
    char *p;
    time_t start;
    time_t finish;
    int left = 0;
    int op = 0;
    int right;
    int result;
    char line[80];
    int tmp;
    int tmp___0;
    int tmp___1;
    char *tmp___2;
    int tmp___3;

    {
	result = 0;
	left = result;
	right = left;
	tmp = rand();
	op = (int) *(keys + tmp % nkeys);
	if (op != 47) {
	    right = getrandom(rangemax + 1, op, 1);
	}
      retry:
	switch (op) {
	case 43:
	    left = getrandom(rangemax + 1, op, 0);
	    result = left + right;  // +
	    break;
	case 45:
	    result = getrandom(rangemax + 1, op, 0);
	    left = right + result;  // - , result = left - right
	    break;
	case 120:
	    left = getrandom(rangemax + 1, op, 0);
	    result = left * right;
	    break;
	case 47:
	    tmp___0 = getrandom(rangemax, op, 1);
	    right = tmp___0 + 1;
	    result = getrandom(rangemax + 1, op, 0);
	    tmp___1 = rand();
	    left = right * result + tmp___1 % right;
	    break;
	}
	if (result < 0) {
	    goto retry;
	} else if (left < 0) {
	    goto retry;
	}
	encoder(3, encodeStrings_litStr3);
	printf((char const *) (encodeStrings_litStr3), left, op, right);
	fflush(stdout);
	time(&start);
	while (1) {
	    tmp___2 = fgets((char *) (line),
			    (int) sizeof(line), (FILE *) stdin);
	    if (!tmp___2) {
		encoder(4, encodeStrings_litStr4);
		printf((char const *) (encodeStrings_litStr4));
		return (-1);
	    }
	    p = line;
	    while (1) {
		if (*p) {
		    if (!((int) ((unsigned char) *p) == 32)) {
			if (!((int) ((unsigned char) *p) == 9)) {
			    if (!((int) ((unsigned char) *p) == 10)) {
				if (!((int) ((unsigned char) *p) == 11)) {
				    if (!((int)
					  ((unsigned char) *p) == 12)) {
					if (!((int)
					      ((unsigned char)
					       *p) == 13)) {
					    break;
					}
				    }
				}
			    }
			}
		    }
		} else {
		    break;
		}
		p++;
	    }
	    if ((int) ((unsigned char) *p) >= 48) {
		if (!((int) ((unsigned char) *p) <= 57)) {
		    encoder(5, encodeStrings_litStr5);
		    printf((char const *) (encodeStrings_litStr5));
		    goto __Cont;
		}
	    } else {
		encoder(6, encodeStrings_litStr6);
		printf((char const *) (encodeStrings_litStr6));
		goto __Cont;
	    }
	    tmp___3 = atoi((char const *) p);
	    if ((unsigned int) tmp___3 ==
		((unsigned int) result /*& 4039822362U*/)) { 
		encoder(7, encodeStrings_litStr7);
		printf((char const *) (encodeStrings_litStr7));
		nright++;
		break;
	    }
	    encoder(8, encodeStrings_litStr8);
	    printf((char const *) (encodeStrings_litStr8));
	    nwrong++;
	    penalise(right, op, 1);
	    if (op == 120) {
		penalise(left, op, 0);
	    } else if (op == 43) {
		penalise(left, op, 0);
	    } else {
		penalise(result, op, 0);
	    }
	  __Cont:;
	}
	time(&finish);
	qtime += finish - start;
	return (0);
    }
}
