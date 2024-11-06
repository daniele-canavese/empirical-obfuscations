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

void intr()
{

    {
	showstats(1);
	exit(0);
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
    unsigned long _3_problem_next;

    {
	{
	    _3_problem_next = 24;
	}
	while (1) {
	    switch (_3_problem_next) {
	    case 71:;
		if ((int) ((unsigned char) *p) == 12) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 70;
		    }
		}
		break;
	    case 37:;
		return (0);
		break;
	    case 64:
		encoder(5, encodeStrings_litStr5);
		{
		    _3_problem_next = 32;
		}
		break;
	    case 60:
		encoder(6, encodeStrings_litStr6);
		{
		    _3_problem_next = 31;
		}
		break;
	    case 6:
		tmp___2 = fgets((char *) (line), (int) sizeof(line), (FILE *	/* __restrict 
										 */
				)stdin);
		{
		    _3_problem_next = 5;
		}
		break;
	    case 2:
		p = line;
		{
		    _3_problem_next = 0;
		}
		break;
	    case 34:
		time(&start);
		{
		    _3_problem_next = 6;
		}
		break;
	    case 14:
		tmp___0 = getrandom(rangemax, op, 1);
		{
		    _3_problem_next = 44;
		}
		break;
	    case 42:
		result = getrandom(rangemax + 1, op, 0);
		{
		    _3_problem_next = 40;
		}
		break;
	    case 44:
		right = tmp___0 + 1;
		{
		    _3_problem_next = 42;
		}
		break;
	    case 31:
		printf((char const *) (encodeStrings_litStr6));
		{
		    _3_problem_next = 41;
		}
		break;
	    case 51:
		encoder(8, encodeStrings_litStr8);
		{
		    _3_problem_next = 28;
		}
		break;
	    case 33:
		printf((char const *) (encodeStrings_litStr4));
		{
		    _3_problem_next = 3;
		}
		break;
	    case 26:
		penalise(right, op, 1);
		{
		    _3_problem_next = 49;
		}
		break;
	    case 39:
		time(&finish);
		{
		    _3_problem_next = 25;
		}
		break;
	    case 20:
		left = getrandom(rangemax + 1, op, 0);
		{
		    _3_problem_next = 53;
		}
		break;
	    case 40:
		tmp___1 = rand();
		{
		    _3_problem_next = 38;
		}
		break;
	    case 29:
		nright++;
		{
		    _3_problem_next = 39;
		}
		break;
	    case 57:
		op = (int) *(keys + tmp % nkeys);
		{
		    _3_problem_next = 23;
		}
		break;
	    case 73:;
		if ((int) ((unsigned char) *p) == 10) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 72;
		    }
		}
		break;
	    case 32:
		printf((char const *) (encodeStrings_litStr5));
		{
		    _3_problem_next = 41;
		}
		break;
	    case 22:
		right = getrandom(rangemax + 1, op, 1);
		{
		    _3_problem_next = 21;
		}
		break;
	    case 25:
		qtime += finish - start;
		{
		    _3_problem_next = 37;
		}
		break;
	    case 56:
		tmp___3 = atoi((char const *) p);
		{
		    _3_problem_next = 55;
		}
		break;
	    case 8:
		encoder(3, encodeStrings_litStr3);
		{
		    _3_problem_next = 36;
		}
		break;
	    case 21:
		switch (op) {
		case 43:
		    {
			_3_problem_next = 20;
		    }
		    break;
		case 45:
		    {
			_3_problem_next = 18;
		    }
		    break;
		case 120:
		    {
			_3_problem_next = 16;
		    }
		    break;
		case 47:
		    {
			_3_problem_next = 14;
		    }
		    break;
		default:
		    {
			_3_problem_next = 12;
		    }
		    break;
		}
		break;
	    case 28:
		printf((char const *) (encodeStrings_litStr8));
		{
		    _3_problem_next = 27;
		}
		break;
	    case 53:
		result = left + right;
		{
		    _3_problem_next = 12;
		}
		break;
	    case 41:
		{
		    _3_problem_next = 6;
		}
		break;
	    case 45:
		penalise(left, op, 0);
		{
		    _3_problem_next = 41;
		}
		break;
	    case 36:
		printf((char const *) (encodeStrings_litStr3), left, op,
		       right);
		{
		    _3_problem_next = 35;
		}
		break;
	    case 66:;
		if ((int) ((unsigned char) *p) >= 48) {
		    {
			_3_problem_next = 65;
		    }
		} else {
		    {
			_3_problem_next = 60;
		    }
		}
		break;
	    case 38:
		left = right * result + tmp___1 % right;
		{
		    _3_problem_next = 12;
		}
		break;
	    case 65:;
		if ((int) ((unsigned char) *p) <= 57) {
		    {
			_3_problem_next = 56;
		    }
		} else {
		    {
			_3_problem_next = 64;
		    }
		}
		break;
	    case 70:;
		if ((int) ((unsigned char) *p) == 13) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 66;
		    }
		}
		break;
	    case 5:;
		if (tmp___2) {
		    {
			_3_problem_next = 2;
		    }
		} else {
		    {
			_3_problem_next = 4;
		    }
		}
		break;
	    case 24:
		result = 0;
		{
		    _3_problem_next = 63;
		}
		break;
	    case 10:;
		if (left < 0) {
		    {
			_3_problem_next = 21;
		    }
		} else {
		    {
			_3_problem_next = 8;
		    }
		}
		break;
	    case 47:
		result = left * right;
		{
		    _3_problem_next = 12;
		}
		break;
	    case 50:
		left = right + result;
		{
		    _3_problem_next = 12;
		}
		break;
	    case 35:
		fflush(stdout);
		{
		    _3_problem_next = 34;
		}
		break;
	    case 67:
		p++;
		{
		    _3_problem_next = 0;
		}
		break;
	    case 54:
		encoder(7, encodeStrings_litStr7);
		{
		    _3_problem_next = 30;
		}
		break;
	    case 61:
		right = left;
		{
		    _3_problem_next = 59;
		}
		break;
	    case 27:
		nwrong++;
		{
		    _3_problem_next = 26;
		}
		break;
	    case 30:
		printf((char const *) (encodeStrings_litStr7));
		{
		    _3_problem_next = 29;
		}
		break;
	    case 0:;
		if (*p) {
		    {
			_3_problem_next = 75;
		    }
		} else {
		    {
			_3_problem_next = 66;
		    }
		}
		break;
	    case 46:;
		if (op == 43) {
		    {
			_3_problem_next = 45;
		    }
		} else {
		    {
			_3_problem_next = 43;
		    }
		}
		break;
	    case 23:;
		if (op != 47) {
		    {
			_3_problem_next = 22;
		    }
		} else {
		    {
			_3_problem_next = 21;
		    }
		}
		break;
	    case 48:
		penalise(left, op, 0);
		{
		    _3_problem_next = 41;
		}
		break;
	    case 4:
		encoder(4, encodeStrings_litStr4);
		{
		    _3_problem_next = 33;
		}
		break;
	    case 75:;
		if ((int) ((unsigned char) *p) == 32) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 74;
		    }
		}
		break;
	    case 12:;
		if (result < 0) {
		    {
			_3_problem_next = 21;
		    }
		} else {
		    {
			_3_problem_next = 10;
		    }
		}
		break;
	    case 18:
		result = getrandom(rangemax + 1, op, 0);
		{
		    _3_problem_next = 50;
		}
		break;
	    case 59:
		tmp = rand();
		{
		    _3_problem_next = 57;
		}
		break;
	    case 16:
		left = getrandom(rangemax + 1, op, 0);
		{
		    _3_problem_next = 47;
		}
		break;
	    case 72:;
		if ((int) ((unsigned char) *p) == 11) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 71;
		    }
		}
		break;
	    case 43:
		penalise(result, op, 0);
		{
		    _3_problem_next = 41;
		}
		break;
	    case 49:;
		if (op == 120) {
		    {
			_3_problem_next = 48;
		    }
		} else {
		    {
			_3_problem_next = 46;
		    }
		}
		break;
	    case 74:;
		if ((int) ((unsigned char) *p) == 9) {
		    {
			_3_problem_next = 67;
		    }
		} else {
		    {
			_3_problem_next = 73;
		    }
		}
		break;
	    case 63:
		left = result;
		{
		    _3_problem_next = 61;
		}
		break;
	    case 55:;
		if ((unsigned int) tmp___3 ==
		    ((unsigned int) result /*& 4039822362U*/)) {
		    {
			_3_problem_next = 54;
		    }
		} else {
		    {
			_3_problem_next = 51;
		    }
		}
		break;
	    case 3:;
		return (-1);
		break;
	    }
	}
    }
}
