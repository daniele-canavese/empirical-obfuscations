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
    int tmp___0 = 0;
    int tmp___1 = 0;
    char *tmp___2 = NULL;
    int tmp___3 = 0;
    unsigned long _5_problem_next;

    {
	{
	    _5_problem_next =
		(unsigned
		 long) (_4_problem__opaque_array[((unsigned
						   int) (((_3entropy - 8) +
							  ((_3entropy -
							    8) >> 63L)) ^
							 ((_3entropy -
							   8) >> 63L)) %
						  10) * 3 +
						 0] %
			_4_problem__opaque_array[5] + 49);
	}
	while (1) {
	    switch (_5_problem_next) {
	    case 52:
		result = 0;
		left = result;
		right = left;
		tmp = rand();
		op = (int) *(keys + tmp % nkeys);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((_3entropy
								  + 6) -
								 (((_3entropy + 6) + (_3entropy + 6)) & ((_3entropy + 6) >> 63L))) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 46);
		}
		break;
	    case 51:;
		if (op != 47) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (_3entropy *
							       1 -
							       ((_3entropy
								 * 1 +
								 _3entropy
								 *
								 1) &
								(_3entropy
								 *
								 1 >>
								 63L))) %
							      10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 47);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp___3 ^ (tmp___3 >> 31)) - (tmp___3 >> 31)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 46);
		    }
		}
		break;
	    case 50:
		right = getrandom(rangemax + 1, op, 1);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy | 6)
								  +
								  ((_3entropy | 6)
								   >> 63L))
								 ^
								 ((_3entropy | 6)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + 46);
		}
		break;
	    case 49:
		switch (op) {
		case 43:
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((result ^ (result >> 31)) - (result >> 31)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 43);
		    }
		    break;
		case 45:
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy + 10) + ((_3entropy + 10) >> 63L)) ^ ((_3entropy + 10) >> 63L)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 43);
		    }
		    break;
		case 120:
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left +
								 left) &
								(left >>
								 31))) %
							      10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 39);
		    }
		    break;
		case 47:
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((right
								      ^
								      (right
								       >>
								       31))
								     -
								     (right
								      >>
								      31))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 39);
		    }
		    break;
		default:
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy | 2) - (((_3entropy | 2) + (_3entropy | 2)) & ((_3entropy | 2) >> 63L))) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 37);
		    }
		    break;
		}
		break;
	    case 48:
		left = getrandom(rangemax + 1, op, 0);
		result = left + right;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((right +
								  (right >>
								   31))
								 ^ (right
								    >> 31))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + 35);
		}
		break;
	    case 46:
		result = getrandom(rangemax + 1, op, 0);
		left = right + result;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy | 4)
								  ^
								  ((_3entropy | 4)
								   >> 63L))
								 -
								 ((_3entropy | 4)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + 37);
		}
		break;
	    case 44:
		left = getrandom(rangemax + 1, op, 0);
		result = left * right;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy - 3) + ((_3entropy - 3) >> 63L)) ^ ((_3entropy - 3) >> 63L)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 35);
		}
		break;
	    case 42:
		tmp___0 = getrandom(rangemax, op, 1);
		right = tmp___0 + 1;
		result = getrandom(rangemax + 1, op, 0);
		tmp___1 = rand();
		left = right * result + tmp___1 % right;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy - 8) ^ ((_3entropy - 8) >> 63L)) - ((_3entropy - 8) >> 63L)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 35);
		}
		break;
	    case 40:;
		if (result < 0) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy ^ 6) - (((_3entropy ^ 6) + (_3entropy ^ 6)) & ((_3entropy ^ 6) >> 63L))) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 46);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 35);
		    }
		}
		break;
	    case 38:;
		if (left < 0) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy - 8) + ((_3entropy - 8) >> 63L)) ^ ((_3entropy - 8) >> 63L))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 44);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp___3 ^ (tmp___3 >> 31)) - (tmp___3 >> 31)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 33);
		    }
		}
		break;
	    case 36:
		encoder(3, encodeStrings_litStr3);
		printf((char const *) (encodeStrings_litStr3), left, op,
		       right);
		fflush(stdout);
		time(&start);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy - 1) ^ ((_3entropy - 1) >> 63L)) - ((_3entropy - 1) >> 63L)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 31);
		}
		break;
	    case 34:
		tmp___2 = fgets((char *) (line), (int) sizeof(line), (FILE *	/* __restrict
										 */
				)stdin);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  +
								  (tmp___0
								   >> 31))
								 ^ (tmp___0
								    >> 31))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + 28);
		}
		break;
	    case 33:;
		if (tmp___2) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (_3entropy *
							       9 -
							       ((_3entropy
								 *
								 9 << 1L) &
								(_3entropy
								 *
								 9 >>
								 63L))) %
							      10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 27);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp +
								      (tmp
								       >>
								       31))
								     ^ (tmp
									>>
									31))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 29);
		    }
		}
		break;
	    case 32:
		encoder(4, encodeStrings_litStr4);
		printf((char const *) (encodeStrings_litStr4));
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + 28);
		}
		break;
	    case 31:;
		return (-1);
		break;
	    case 30:
		p = line;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + 25);
		}
		break;
	    case 28:;
		if (*p) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy + 3) - (((_3entropy + 3) << 1L)
											&
											((_3entropy + 3) >> 63L))) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 22);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy - 4) + ((_3entropy - 4) >> 63L)) ^ ((_3entropy - 4) >> 63L))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 13);
		    }
		}
		break;
	    case 27:;
		if ((int) ((unsigned char) *p) == 32) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy ^ 5) + ((_3entropy ^ 5) >> 63L)) ^ ((_3entropy ^ 5) >> 63L))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 14);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy * 1 + (_3entropy * 1 >> 63L))
								     ^
								     (_3entropy
								      *
								      1 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 21);
		    }
		}
		break;
	    case 26:;
		if ((int) ((unsigned char) *p) == 9) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy ^ 4) - (((_3entropy ^ 4) + (_3entropy ^ 4)) & ((_3entropy ^ 4) >> 63L))) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 16);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp___0 ^ (tmp___0 >> 31)) - (tmp___0 >> 31)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 20);
		    }
		}
		break;
	    case 25:;
		if ((int) ((unsigned char) *p) == 10) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy ^ 9) - (((_3entropy ^ 9) + (_3entropy ^ 9)) & ((_3entropy ^ 9) >> 63L))) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 14);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy ^ 5) - (((_3entropy ^ 5) << 1L) & ((_3entropy ^ 5) >> 63L))) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 19);
		    }
		}
		break;
	    case 24:;
		if ((int) ((unsigned char) *p) == 11) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp +
								      (tmp
								       >>
								       31))
								     ^ (tmp
									>>
									31))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 14);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (_3entropy *
							       4 -
							       ((_3entropy
								 *
								 4 << 1L) &
								(_3entropy
								 *
								 4 >>
								 63L))) %
							      10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 18);
		    }
		}
		break;
	    case 23:;
		if ((int) ((unsigned char) *p) == 12) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((left
								      +
								      (left
								       >>
								       31))
								     ^
								     (left
								      >>
								      31))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 16);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy - 10) ^ ((_3entropy - 10) >> 63L)) - ((_3entropy - 10) >> 63L)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 17);
		    }
		}
		break;
	    case 22:;
		if ((int) ((unsigned char) *p) == 13) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left << 1)
								& (left >>
								   31))) %
							      10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 16);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left << 1)
								& (left >>
								   31))) %
							      10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 13);
		    }
		}
		break;
	    case 19:
		p++;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy - 10) ^ ((_3entropy - 10) >> 63L)) - ((_3entropy - 10) >> 63L)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 23);
		}
		break;
	    case 18:;
		if ((int) ((unsigned char) *p) >= 48) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((tmp ^
								      (tmp
								       >>
								       31))
								     -
								     (tmp
								      >>
								      31))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 14);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (_3entropy *
							       3 -
							       ((_3entropy
								 * 3 +
								 _3entropy
								 *
								 3) &
								(_3entropy
								 *
								 3 >>
								 63L))) %
							      10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 9);
		    }
		}
		break;
	    case 17:;
		if ((int) ((unsigned char) *p) <= 57) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy ^ 5) ^ ((_3entropy ^ 5) >> 63L)) - ((_3entropy ^ 5) >> 63L))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 9);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (((_3entropy | 2) ^ ((_3entropy | 2) >> 63L)) - ((_3entropy | 2) >> 63L))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 13);
		    }
		}
		break;
	    case 16:
		encoder(5, encodeStrings_litStr5);
		printf((char const *) (encodeStrings_litStr5));
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((tmp +
								  (tmp >>
								   31)) ^
								 (tmp >>
								  31)) %
							  10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + -3);
		}
		break;
	    case 14:
		encoder(6, encodeStrings_litStr6);
		printf((char const *) (encodeStrings_litStr6));
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy + 6) ^ ((_3entropy + 6) >> 63L)) - ((_3entropy + 6) >> 63L)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + -1);
		}
		break;
	    case 12:
		tmp___3 = atoi((char const *) p);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  ^
								  (tmp___0
								   >> 31))
								 -
								 (tmp___0
								  >> 31))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + 6);
		}
		break;
	    case 11:;
		if ((unsigned int) tmp___3 ==
		    ((unsigned int) result /*& 4039822362U*/)) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int)
							      (tmp___0 -
							       ((tmp___0 <<
								 1) &
								(tmp___0 >>
								 31))) %
							      10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 7);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((op
								      +
								      (op
								       >>
								       31))
								     ^ (op
									>>
									31))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + 3);
		    }
		}
		break;
	    case 10:
		encoder(7, encodeStrings_litStr7);
		printf((char const *) (encodeStrings_litStr7));
		nright++;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + -2);
		}
		break;
	    case 8:
		encoder(8, encodeStrings_litStr8);
		printf((char const *) (encodeStrings_litStr8));
		nwrong++;
		penalise(right, op, 1);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy + 2) ^ ((_3entropy + 2) >> 63L)) - ((_3entropy + 2) >> 63L)) % 10) * 3 + 1] % _4_problem__opaque_array[11] + 2);
		}
		break;
	    case 7:;
		if (op == 120) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((op
								      +
								      (op
								       >>
								       31))
								     ^ (op
									>>
									31))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 3);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 0] % _4_problem__opaque_array[5] + 2);
		    }
		}
		break;
	    case 6:
		penalise(left, op, 0);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((_3entropy
								  ^ 2) -
								 (((_3entropy ^ 2)
								   << 1L) &
								  ((_3entropy ^ 2)
								   >>
								   63L))) %
							  10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + -3);
		}
		break;
	    case 5:;
		if (op == 43) {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) ((_3entropy * 8 ^ (_3entropy * 8 >> 63L))
								     -
								     (_3entropy
								      *
								      8 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _4_problem__opaque_array[11] + -1);
		    }
		} else {
		    {
			_5_problem_next =
			    (unsigned
			     long) (_4_problem__opaque_array[((unsigned
							       int) (tmp
								     -
								     ((tmp
								       +
								       tmp)
								      &
								      (tmp
								       >>
								       31)))
							      % 10) * 3 +
							     0] %
				    _4_problem__opaque_array[5] + 0);
		    }
		}
		break;
	    case 4:
		penalise(left, op, 0);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (right -
								 ((right +
								   right)
								  & (right
								     >>
								     31)))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + -3);
		}
		break;
	    case 3:
		penalise(result, op, 0);
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  +
								  (tmp___3
								   >> 31))
								 ^ (tmp___3
								    >> 31))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + -3);
		}
		break;
	    case 2:
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (op -
								 ((op <<
								   1) &
								  (op >>
								   31))) %
							  10) * 3 +
							 0] %
				_4_problem__opaque_array[5] + 31);
		}
		break;
	    case 1:
		time(&finish);
		qtime += finish - start;
		{
		    _5_problem_next =
			(unsigned
			 long) (_4_problem__opaque_array[((unsigned
							   int) (((_3entropy ^ 5)
								  +
								  ((_3entropy ^ 5)
								   >> 63L))
								 ^
								 ((_3entropy ^ 5)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_4_problem__opaque_array[11] + -5);
		}
		break;
	    case 0:;
		return (0);
		break;
	    }
	}
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
