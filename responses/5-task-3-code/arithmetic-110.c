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

void intr()
{

    {
	showstats(1);
	exit(0);
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
    unsigned long _3_problem_next;
    unsigned long _6_problem_next;

    {
	{
	    _6_problem_next =
		(unsigned
		 long) (_5_problem__opaque_array[((unsigned
						   int) (((_4entropy ^ 8) +
							  ((_4entropy ^ 8)
							   >> 63L)) ^
							 ((_4entropy ^ 8)
							  >> 63L)) % 10) *
						 3 +
						 0] %
			_5_problem__opaque_array[5] + 167);
	}
	while (1) {
	    switch (_6_problem_next) {
	    case 226:
		_3_problem_next = 45;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 8) ^ ((_4entropy - 8) >> 63L)) - ((_4entropy - 8) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 225:
		_3_problem_next = 43;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___1 -
								 ((tmp___1
								   +
								   tmp___1)
								  &
								  (tmp___1
								   >> 31)))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 223:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  *
								  6 ^
								  (_4entropy
								   *
								   6 >>
								   63L))
								 -
								 (_4entropy
								  *
								  6 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 217);
		}
		break;
	    case 222:;
		if (op != 47) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 3 ^ (_4entropy * 3 >> 63L))
								     -
								     (_4entropy
								      *
								      3 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 216);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___3 -
							       ((tmp___3 <<
								 1) &
								(tmp___3 >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 217);
		    }
		}
		break;
	    case 221:
		_3_problem_next = 22;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  + 3) -
								 (((_4entropy + 3) + (_4entropy + 3)) & ((_4entropy + 3) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 220:
		_3_problem_next = 21;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 4 +
								  (_4entropy
								   *
								   4 >>
								   63L)) ^
								 (_4entropy
								  *
								  4 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 218:
		penalise(left, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 2)
								  +
								  ((_4entropy | 2)
								   >> 63L))
								 ^
								 ((_4entropy | 2)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 214);
		}
		break;
	    case 217:
		_3_problem_next = 41;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 5) + ((_4entropy + 5) >> 63L)) ^ ((_4entropy + 5) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 215:
		encoder(4, encodeStrings_litStr4);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 211);
		}
		break;
	    case 214:
		_3_problem_next = 33;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 212:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___1 -
								 ((tmp___1
								   << 1) &
								  (tmp___1
								   >>
								   31))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 206);
		}
		break;
	    case 211:;
		if ((int) ((unsigned char) *p) == 32) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
							     1] %
				    _5_problem__opaque_array[11] + 205);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (result -
							       ((result +
								 result)
								& (result
								   >> 31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 204);
		    }
		}
		break;
	    case 210:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((op +
								  (op >>
								   31)) ^
								 (op >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 209:
		_3_problem_next = 74;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 7 +
								  (_4entropy
								   *
								   7 >>
								   63L)) ^
								 (_4entropy
								  *
								  7 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 207:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 9)
								  ^
								  ((_4entropy ^ 9)
								   >> 63L))
								 -
								 ((_4entropy ^ 9)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 201);
		}
		break;
	    case 206:;
		if (result < 0) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (_4entropy *
							       8 -
							       ((_4entropy
								 * 8 +
								 _4entropy
								 *
								 8) &
								(_4entropy
								 *
								 8 >>
								 63L))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 202);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 9 ^ (_4entropy * 9 >> 63L))
								     -
								     (_4entropy
								      *
								      9 >>
								      63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 201);
		    }
		}
		break;
	    case 205:
		_3_problem_next = 21;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 8)
								  +
								  ((_4entropy ^ 8)
								   >> 63L))
								 ^
								 ((_4entropy ^ 8)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 204:
		_3_problem_next = 10;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  | 8) -
								 (((_4entropy | 8)
								   << 1L) &
								  ((_4entropy | 8)
								   >>
								   63L))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 202:
		result = getrandom(rangemax + 1, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   +
								   result)
								  & (result
								     >>
								     31)))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 198);
		}
		break;
	    case 201:
		_3_problem_next = 50;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 199:
		tmp = rand();
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 10) ^ ((_4entropy - 10) >> 63L)) - ((_4entropy - 10) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 193);
		}
		break;
	    case 198:
		_3_problem_next = 57;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 196:
		left = getrandom(rangemax + 1, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (_4entropy
								 * 5 -
								 ((_4entropy * 5 << 1L) & (_4entropy * 5 >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 190);
		}
		break;
	    case 195:
		_3_problem_next = 47;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 10) ^ ((_4entropy - 10) >> 63L)) - ((_4entropy - 10) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 193:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  ^
								  (tmp___3
								   >> 31))
								 -
								 (tmp___3
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 187);
		}
		break;
	    case 192:;
		if ((int) ((unsigned char) *p) == 11) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (_4entropy *
							       3 -
							       ((_4entropy
								 * 3 +
								 _4entropy
								 *
								 3) &
								(_4entropy
								 *
								 3 >>
								 63L))) %
							      10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 186);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 187);
		    }
		}
		break;
	    case 191:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  + 5) -
								 (((_4entropy + 5) + (_4entropy + 5)) & ((_4entropy + 5) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 190:
		_3_problem_next = 71;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  *
								  2 ^
								  (_4entropy
								   *
								   2 >>
								   63L))
								 -
								 (_4entropy
								  *
								  2 >>
								  63L)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 188:
		penalise(result, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 1 +
								  (_4entropy
								   *
								   1 >>
								   63L)) ^
								 (_4entropy
								  *
								  1 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 182);
		}
		break;
	    case 187:
		_3_problem_next = 41;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  +
								  (tmp___3
								   >> 31))
								 ^ (tmp___3
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 185:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 10) ^ ((_4entropy + 10) >> 63L)) - ((_4entropy + 10) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 181);
		}
		break;
	    case 184:;
		if (op == 120) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[11] + 178);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 179);
		    }
		}
		break;
	    case 183:
		_3_problem_next = 48;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 2) ^ ((_4entropy + 2) >> 63L)) - ((_4entropy + 2) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 182:
		_3_problem_next = 46;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___0 -
								 ((tmp___0
								   << 1) &
								  (tmp___0
								   >>
								   31))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 180:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 8) + ((_4entropy - 8) >> 63L)) ^ ((_4entropy - 8) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 176);
		}
		break;
	    case 179:;
		if ((int) ((unsigned char) *p) == 9) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 10 + (_4entropy * 10 >> 63L))
								     ^
								     (_4entropy
								      *
								      10 >>
								      63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 175);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 8 ^ (_4entropy * 8 >> 63L))
								     -
								     (_4entropy
								      *
								      8 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 172);
		    }
		}
		break;
	    case 178:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp -
								 ((tmp +
								   tmp) &
								  (tmp >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 177:
		_3_problem_next = 73;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (right -
								 ((right +
								   right)
								  & (right
								     >>
								     31)))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 175:
		left = result;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  +
								  (tmp___3
								   >> 31))
								 ^ (tmp___3
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 169);
		}
		break;
	    case 174:
		_3_problem_next = 61;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (op -
								 ((op <<
								   1) &
								  (op >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 172:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 5)
								  +
								  ((_4entropy ^ 5)
								   >> 63L))
								 ^
								 ((_4entropy ^ 5)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 166);
		}
		break;
	    case 171:;
		if ((unsigned int) tmp___3 ==
		    ((unsigned int) result)){// & 4039822362U)) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 2) + ((_4entropy - 2) >> 63L)) ^ ((_4entropy - 2) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 165);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 4) ^ ((_4entropy - 4) >> 63L)) - ((_4entropy - 4) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 164);
		    }
		}
		break;
	    case 170:
		_3_problem_next = 24;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 4) ^ ((_4entropy + 4) >> 63L)) - ((_4entropy + 4) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 168:
		_3_problem_next = 54;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 5 +
								  (_4entropy
								   *
								   5 >>
								   63L)) ^
								 (_4entropy
								  *
								  5 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 167:
		_3_problem_next = 51;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  ^
								  (tmp___3
								   >> 31))
								 -
								 (tmp___3
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 166:;
		switch (_3_problem_next) {
		case 3:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((left
								      ^
								      (left
								       >>
								       31))
								     -
								     (left
								      >>
								      31))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 160);
		    }
		    break;
		case 55:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op
								       <<
								       1) &
								      (op
								       >>
								       31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 167);
		    }
		    break;
		case 63:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 1 + (_4entropy * 1 >> 63L))
								     ^
								     (_4entropy
								      *
								      1 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 170);
		    }
		    break;
		case 74:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (tmp
								     -
								     ((tmp
								       <<
								       1) &
								      (tmp
								       >>
								       31)))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 177);
		    }
		    break;
		case 49:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 182);
		    }
		    break;
		case 43:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___0 + (tmp___0 >> 31)) ^ (tmp___0 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 183);
		    }
		    break;
		case 72:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left << 1)
								& (left >>
								   31))) %
							      10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 188);
		    }
		    break;
		case 16:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (result -
							       ((result <<
								 1) &
								(result >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 193);
		    }
		    break;
		case 59:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy + 1) + ((_4entropy + 1) >> 63L)) ^ ((_4entropy + 1) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 196);
		    }
		    break;
		case 18:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 197);
		    }
		    break;
		case 12:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left +
								 left) &
								(left >>
								 31))) %
							      10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 202);
		    }
		    break;
		case 75:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___0 ^ (tmp___0 >> 31)) - (tmp___0 >> 31)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 209);
		    }
		    break;
		case 4:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((result ^ (result >> 31)) - (result >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 210);
		    }
		    break;
		case 48:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (tmp
								     -
								     ((tmp
								       <<
								       1) &
								      (tmp
								       >>
								       31)))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 215);
		    }
		    break;
		case 23:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (result -
							       ((result <<
								 1) &
								(result >>
								 31))) %
							      10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 218);
		    }
		    break;
		case 46:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy ^ 5) ^ ((_4entropy ^ 5) >> 63L)) - ((_4entropy ^ 5) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 223);
		    }
		    break;
		case 0:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___3 ^ (tmp___3 >> 31)) - (tmp___3 >> 31)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 230);
		    }
		    break;
		case 30:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (right -
							       ((right +
								 right)
								& (right >>
								   31)))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + -2);
		    }
		    break;
		case 27:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___1 -
							       ((tmp___1 +
								 tmp___1)
								& (tmp___1
								   >> 31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + -1);
		    }
		    break;
		case 61:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (_4entropy *
							       10 -
							       ((_4entropy
								 *
								 10 << 1L)
								&
								(_4entropy
								 *
								 10 >>
								 63L))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 4);
		    }
		    break;
		case 54:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 7);
		    }
		    break;
		case 67:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy ^ 8) - (((_4entropy ^ 8) + (_4entropy ^ 8)) & ((_4entropy ^ 8) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 8);
		    }
		    break;
		case 35:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 13);
		    }
		    break;
		case 50:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 3) ^ ((_4entropy - 3) >> 63L)) - ((_4entropy - 3) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 16);
		    }
		    break;
		case 47:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 1) ^ ((_4entropy - 1) >> 63L)) - ((_4entropy - 1) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 17);
		    }
		    break;
		case 10:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((right
								      +
								      (right
								       >>
								       31))
								     ^
								     (right
								      >>
								      31))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 24);
		    }
		    break;
		case 24:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left +
								 left) &
								(left >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 27);
		    }
		    break;
		case 5:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op +
								       op)
								      & (op
									 >>
									 31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 30);
		    }
		    break;
		case 70:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 37);
		    }
		    break;
		case 65:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy + 10) ^ ((_4entropy + 10) >> 63L)) - ((_4entropy + 10) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 42);
		    }
		    break;
		case 38:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 45);
		    }
		    break;
		case 66:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 3) + ((_4entropy - 3) >> 63L)) ^ ((_4entropy - 3) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 50);
		    }
		    break;
		case 36:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op
								       <<
								       1) &
								      (op
								       >>
								       31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 51);
		    }
		    break;
		case 45:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy | 4) - (((_4entropy | 4) << 1L) & ((_4entropy | 4) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 54);
		    }
		    break;
		case 41:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy - 5) - (((_4entropy - 5) << 1L)
											&
											((_4entropy - 5) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 59);
		    }
		    break;
		case 53:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy + 10) - (((_4entropy + 10) + (_4entropy + 10)) & ((_4entropy + 10) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 62);
		    }
		    break;
		case 28:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy + 1) + ((_4entropy + 1) >> 63L)) ^ ((_4entropy + 1) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 65);
		    }
		    break;
		case 21:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy | 6) + ((_4entropy | 6) >> 63L)) ^ ((_4entropy | 6) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 78);
		    }
		    break;
		case 8:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy | 9) - (((_4entropy | 9) << 1L) & ((_4entropy | 9) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 81);
		    }
		    break;
		case 56:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (right -
							       ((right +
								 right)
								& (right >>
								   31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 82);
		    }
		    break;
		case 25:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy + 7) - (((_4entropy + 7) + (_4entropy + 7)) & ((_4entropy + 7) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 87);
		    }
		    break;
		case 22:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy ^ 2) + ((_4entropy ^ 2) >> 63L)) ^ ((_4entropy ^ 2) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 88);
		    }
		    break;
		case 32:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 1 ^ (_4entropy * 1 >> 63L))
								     -
								     (_4entropy
								      *
								      1 >>
								      63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 93);
		    }
		    break;
		case 73:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___0 -
							       ((tmp___0 <<
								 1) &
								(tmp___0 >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 98);
		    }
		    break;
		case 57:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy | 2) + ((_4entropy | 2) >> 63L)) ^ ((_4entropy | 2) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 99);
		    }
		    break;
		case 29:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy ^ 7) + ((_4entropy ^ 7) >> 63L)) ^ ((_4entropy ^ 7) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 104);
		    }
		    break;
		case 40:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op +
								       op)
								      & (op
									 >>
									 31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 105);
		    }
		    break;
		case 20:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (result -
							       ((result <<
								 1) &
								(result >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 110);
		    }
		    break;
		case 39:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op
								       <<
								       1) &
								      (op
								       >>
								       31)))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 113);
		    }
		    break;
		case 26:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy | 8) + ((_4entropy | 8) >> 63L)) ^ ((_4entropy | 8) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 114);
		    }
		    break;
		case 33:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (op
								     -
								     ((op
								       <<
								       1) &
								      (op
								       >>
								       31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 117);
		    }
		    break;
		case 51:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy + 2) + ((_4entropy + 2) >> 63L)) ^ ((_4entropy + 2) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 120);
		    }
		    break;
		case 31:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 10) ^ ((_4entropy - 10) >> 63L)) - ((_4entropy - 10) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 123);
		    }
		    break;
		case 44:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy ^ 8) - (((_4entropy ^ 8) << 1L) & ((_4entropy ^ 8) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 126);
		    }
		    break;
		case 42:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy ^ 9) - (((_4entropy ^ 9) + (_4entropy ^ 9)) & ((_4entropy ^ 9) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 131);
		    }
		    break;
		case 14:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy | 5) - (((_4entropy | 5) << 1L) & ((_4entropy | 5) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 132);
		    }
		    break;
		case 34:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 135);
		    }
		    break;
		case 2:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((op
								      ^
								      (op
								       >>
								       31))
								     -
								     (op >>
								      31))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 138);
		    }
		    break;
		case 6:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy * 5 + (_4entropy * 5 >> 63L))
								     ^
								     (_4entropy
								      *
								      5 >>
								      63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 141);
		    }
		    break;
		case 60:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___1 -
							       ((tmp___1 +
								 tmp___1)
								& (tmp___1
								   >> 31)))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 146);
		    }
		    break;
		case 64:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy ^ 10) ^ ((_4entropy ^ 10) >> 63L)) - ((_4entropy ^ 10) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 147);
		    }
		    break;
		case 37:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 152);
		    }
		    break;
		case 71:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy + 6) + ((_4entropy + 6) >> 63L)) ^ ((_4entropy + 6) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 161);
		    }
		    break;
		default:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((op
								      ^
								      (op
								       >>
								       31))
								     -
								     (op >>
								      31))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 161);
		    }
		    break;
		}
		break;
	    case 164:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (_4entropy
								 * 7 -
								 ((_4entropy * 7 << 1L) & (_4entropy * 7 >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 157);
		}
		break;
	    case 163:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  ^
								  (tmp___1
								   >> 31))
								 -
								 (tmp___1
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 156);
		}
		break;
	    case 162:;
		if ((int) ((unsigned char) *p) == 12) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (left -
							       ((left << 1)
								& (left >>
								   31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 157);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy | 4) ^ ((_4entropy | 4) >> 63L)) - ((_4entropy | 4) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 155);
		    }
		}
		break;
	    case 161:;
		return (-1);
		break;
	    case 160:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (_4entropy
								 * 8 -
								 ((_4entropy * 8 + _4entropy * 8) & (_4entropy * 8 >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 158:
		_3_problem_next = 70;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___1 -
								 ((tmp___1
								   << 1) &
								  (tmp___1
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 155:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((right ^
								  (right >>
								   31))
								 -
								 (right >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 149);
		}
		break;
	    case 154:;
		return (0);
		break;
	    case 152:
		encoder(5, encodeStrings_litStr5);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 10)
								  +
								  ((_4entropy | 10) >> 63L)) ^ ((_4entropy | 10)
												>>
												63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 146);
		}
		break;
	    case 151:
		_3_problem_next = 32;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  *
								  5 ^
								  (_4entropy
								   *
								   5 >>
								   63L))
								 -
								 (_4entropy
								  *
								  5 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 149:
		encoder(6, encodeStrings_litStr6);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp ^
								  (tmp >>
								   31)) -
								 (tmp >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 143);
		}
		break;
	    case 148:
		_3_problem_next = 31;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 3)
								  ^
								  ((_4entropy | 3)
								   >> 63L))
								 -
								 ((_4entropy | 3)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 146:
		tmp___2 = fgets((char *) (line), (int) sizeof(line), (FILE *	/* __restrict
										 */
				)stdin);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 1)
								  ^
								  ((_4entropy | 1)
								   >> 63L))
								 -
								 ((_4entropy | 1)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 142);
		}
		break;
	    case 145:
		_3_problem_next = 5;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 143:
		p = line;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  ^ 4) -
								 (((_4entropy ^ 4)
								   << 1L) &
								  ((_4entropy ^ 4)
								   >>
								   63L))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 139);
		}
		break;
	    case 142:
		_3_problem_next = 0;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  +
								  (tmp___1
								   >> 31))
								 ^ (tmp___1
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 140:
		time(&start);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 2)
								  +
								  ((_4entropy | 2)
								   >> 63L))
								 ^
								 ((_4entropy | 2)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 136);
		}
		break;
	    case 139:
		_3_problem_next = 6;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 10)
								  +
								  ((_4entropy | 10) >> 63L)) ^ ((_4entropy | 10)
												>>
												63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 137:
		tmp___0 = getrandom(rangemax, op, 1);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 4) + ((_4entropy + 4) >> 63L)) ^ ((_4entropy + 4) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 133);
		}
		break;
	    case 136:
		_3_problem_next = 44;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result ^
								  (result
								   >> 31))
								 -
								 (result >>
								  31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 134:
		result = getrandom(rangemax + 1, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 130);
		}
		break;
	    case 133:
		_3_problem_next = 40;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 10)
								  ^
								  ((_4entropy | 10) >> 63L)) - ((_4entropy | 10)
												>>
												63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 131:
		right = tmp___0 + 1;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  ^
								  (tmp___1
								   >> 31))
								 -
								 (tmp___1
								  >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 127);
		}
		break;
	    case 130:
		_3_problem_next = 42;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 1) + ((_4entropy - 1) >> 63L)) ^ ((_4entropy - 1) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 128:
		printf((char const *) (encodeStrings_litStr6));
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (left -
								 ((left +
								   left) &
								  (left >>
								   31))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 122);
		}
		break;
	    case 127:
		_3_problem_next = 41;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((right ^
								  (right >>
								   31))
								 -
								 (right >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 125:
		encoder(8, encodeStrings_litStr8);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (result -
								 ((result
								   << 1) &
								  (result
								   >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 121);
		}
		break;
	    case 124:
		_3_problem_next = 28;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  +
								  (tmp___1
								   >> 31))
								 ^ (tmp___1
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 122:
		printf((char const *) (encodeStrings_litStr4));
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 116);
		}
		break;
	    case 121:
		_3_problem_next = 3;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (left -
								 ((left <<
								   1) &
								  (left >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 119:
		penalise(right, op, 1);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (_4entropy
								 * 8 -
								 ((_4entropy * 8 << 1L) & (_4entropy * 8 >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 115);
		}
		break;
	    case 118:
		_3_problem_next = 49;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 116:
		time(&finish);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((op +
								  (op >>
								   31)) ^
								 (op >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 110);
		}
		break;
	    case 115:
		_3_problem_next = 25;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  ^
								  (tmp___0
								   >> 31))
								 -
								 (tmp___0
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 113:
		left = getrandom(rangemax + 1, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 8)
								  +
								  ((_4entropy ^ 8)
								   >> 63L))
								 ^
								 ((_4entropy ^ 8)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 107);
		}
		break;
	    case 112:
		_3_problem_next = 53;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 3 +
								  (_4entropy
								   *
								   3 >>
								   63L)) ^
								 (_4entropy
								  *
								  3 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 110:
		tmp___1 = rand();
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 104);
		}
		break;
	    case 109:
		_3_problem_next = 38;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  | 8) -
								 (((_4entropy | 8)
								   << 1L) &
								  ((_4entropy | 8)
								   >>
								   63L))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 107:
		nright++;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((op ^
								  (op >>
								   31)) -
								 (op >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 103);
		}
		break;
	    case 106:
		_3_problem_next = 39;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 104:
		op = (int) *(keys + tmp % nkeys);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 10) + ((_4entropy + 10) >> 63L)) ^ ((_4entropy + 10) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 100);
		}
		break;
	    case 103:
		_3_problem_next = 23;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  +
								  (tmp___0
								   >> 31))
								 ^ (tmp___0
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 101:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___1 -
								 ((tmp___1
								   +
								   tmp___1)
								  &
								  (tmp___1
								   >> 31)))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 97);
		}
		break;
	    case 100:;
		if ((int) ((unsigned char) *p) == 10) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy - 5) - (((_4entropy - 5) + (_4entropy - 5)) & ((_4entropy - 5) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 96);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy + 1) - (((_4entropy + 1) + (_4entropy + 1)) & ((_4entropy + 1) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 95);
		    }
		}
		break;
	    case 99:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result ^
								  (result
								   >> 31))
								 -
								 (result >>
								  31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 98:
		_3_problem_next = 72;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  +
								  (tmp___0
								   >> 31))
								 ^ (tmp___0
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 96:
		printf((char const *) (encodeStrings_litStr5));
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp___0 -
								 ((tmp___0
								   +
								   tmp___0)
								  &
								  (tmp___0
								   >> 31)))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 92);
		}
		break;
	    case 95:
		_3_problem_next = 41;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  ^
								  (tmp___0
								   >> 31))
								 -
								 (tmp___0
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 93:
		right = getrandom(rangemax + 1, op, 1);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  | 1) -
								 (((_4entropy | 1)
								   +
								   (_4entropy
								    | 1)) &
								  ((_4entropy | 1)
								   >>
								   63L))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 87);
		}
		break;
	    case 92:
		_3_problem_next = 21;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 8) ^ ((_4entropy - 8) >> 63L)) - ((_4entropy - 8) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 90:
		qtime += finish - start;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result ^
								  (result
								   >> 31))
								 -
								 (result >>
								  31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 86);
		}
		break;
	    case 89:
		_3_problem_next = 37;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  *
								  4 ^
								  (_4entropy
								   *
								   4 >>
								   63L))
								 -
								 (_4entropy
								  *
								  4 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 87:
		tmp___3 = atoi((char const *) p);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((right +
								  (right >>
								   31))
								 ^ (right
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 83);
		}
		break;
	    case 86:
		_3_problem_next = 55;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  ^ 6) -
								 (((_4entropy ^ 6)
								   +
								   (_4entropy
								    ^ 6)) &
								  ((_4entropy ^ 6)
								   >>
								   63L))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 84:
		encoder(3, encodeStrings_litStr3);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 3)
								  +
								  ((_4entropy | 3)
								   >> 63L))
								 ^
								 ((_4entropy | 3)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 78);
		}
		break;
	    case 83:
		_3_problem_next = 36;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  +
								  (tmp___1
								   >> 31))
								 ^ (tmp___1
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 81:
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  ^ 10)
								 -
								 (((_4entropy ^ 10) << 1L) & ((_4entropy ^ 10) >> 63L)))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 75);
		}
		break;
	    case 80:;
		switch (op) {
		case 47:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 2) + ((_4entropy - 2) >> 63L)) ^ ((_4entropy - 2) >> 63L))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 68);
		    }
		    break;
		case 120:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___0 + (tmp___0 >> 31)) ^ (tmp___0 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 70);
		    }
		    break;
		case 45:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy ^ 9) - (((_4entropy ^ 9) + (_4entropy ^ 9)) & ((_4entropy ^ 9) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 74);
		    }
		    break;
		case 43:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 76);
		    }
		    break;
		default:
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___3 + (tmp___3 >> 31)) ^ (tmp___3 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 66);
		    }
		    break;
		}
		break;
	    case 79:
		_3_problem_next = 20;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 9) + ((_4entropy + 9) >> 63L)) ^ ((_4entropy + 9) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 77:
		_3_problem_next = 18;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 2 +
								  (_4entropy
								   *
								   2 >>
								   63L)) ^
								 (_4entropy
								  *
								  2 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 75:
		_3_problem_next = 16;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 7)
								  +
								  ((_4entropy ^ 7)
								   >> 63L))
								 ^
								 ((_4entropy ^ 7)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 73:
		_3_problem_next = 14;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  +
								  (tmp___0
								   >> 31))
								 ^ (tmp___0
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 71:
		_3_problem_next = 12;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 2)
								  +
								  ((_4entropy ^ 2)
								   >> 63L))
								 ^
								 ((_4entropy ^ 2)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 68:
		printf((char const *) (encodeStrings_litStr8));
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  + 1) -
								 (((_4entropy + 1) << 1L) & ((_4entropy + 1) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 64);
		}
		break;
	    case 67:
		_3_problem_next = 27;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 9)
								  +
								  ((_4entropy ^ 9)
								   >> 63L))
								 ^
								 ((_4entropy ^ 9)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 65:
		result = left + right;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp -
								 ((tmp <<
								   1) &
								  (tmp >>
								   31))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 59);
		}
		break;
	    case 64:
		_3_problem_next = 12;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (right -
								 ((right +
								   right)
								  & (right
								     >>
								     31)))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 62:
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (op -
								 ((op <<
								   1) &
								  (op >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 58);
		}
		break;
	    case 61:
		_3_problem_next = 6;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 6)
								  ^
								  ((_4entropy ^ 6)
								   >> 63L))
								 -
								 ((_4entropy ^ 6)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 59:
		penalise(left, op, 0);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp ^
								  (tmp >>
								   31)) -
								 (tmp >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 53);
		}
		break;
	    case 58:
		_3_problem_next = 41;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 10)
								  +
								  ((_4entropy ^ 10) >> 63L)) ^ ((_4entropy ^ 10)
												>>
												63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 56:
		printf((char const *) (encodeStrings_litStr3), left, op,
		       right);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 2)
								  ^
								  ((_4entropy | 2)
								   >> 63L))
								 -
								 ((_4entropy | 2)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 50);
		}
		break;
	    case 55:
		_3_problem_next = 35;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  ^ 10)
								 -
								 (((_4entropy ^ 10) + (_4entropy ^ 10)) & ((_4entropy ^ 10) >> 63L)))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 53:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (_4entropy
								 * 2 -
								 ((_4entropy * 2 + _4entropy * 2) & (_4entropy * 2 >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 49);
		}
		break;
	    case 52:;
		if ((int) ((unsigned char) *p) >= 48) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___0 -
							       ((tmp___0 <<
								 1) &
								(tmp___0 >>
								 31))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 48);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) (((_4entropy | 7) ^ ((_4entropy | 7) >> 63L)) - ((_4entropy | 7) >> 63L))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 47);
		    }
		}
		break;
	    case 51:
		_3_problem_next = 65;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((right +
								  (right >>
								   31))
								 ^ (right
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 50:
		_3_problem_next = 60;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((op ^
								  (op >>
								   31)) -
								 (op >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 48:
		left = right * result + tmp___1 % right;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  ^
								  (tmp___1
								   >> 31))
								 -
								 (tmp___1
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 42);
		}
		break;
	    case 47:
		_3_problem_next = 12;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 3)
								  +
								  ((_4entropy ^ 3)
								   >> 63L))
								 ^
								 ((_4entropy ^ 3)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 45:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 7)
								  ^
								  ((_4entropy ^ 7)
								   >> 63L))
								 -
								 ((_4entropy ^ 7)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 39);
		}
		break;
	    case 44:;
		if ((int) ((unsigned char) *p) <= 57) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (_4entropy *
							       7 -
							       ((_4entropy
								 *
								 7 << 1L) &
								(_4entropy
								 *
								 7 >>
								 63L))) %
							      10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 40);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___0 + (tmp___0 >> 31)) ^ (tmp___0 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 37);
		    }
		}
		break;
	    case 43:
		_3_problem_next = 56;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 1) + ((_4entropy + 1) >> 63L)) ^ ((_4entropy + 1) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 161);
		}
		break;
	    case 42:
		_3_problem_next = 64;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___3
								  +
								  (tmp___3
								   >> 31))
								 ^ (tmp___3
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 40:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 9) ^ ((_4entropy - 9) >> 63L)) - ((_4entropy - 9) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 36);
		}
		break;
	    case 39:;
		if ((int) ((unsigned char) *p) == 13) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___0 ^ (tmp___0 >> 31)) - (tmp___0 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 33);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy ^ 9) - (((_4entropy ^ 9) << 1L) & ((_4entropy ^ 9) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 34);
		    }
		}
		break;
	    case 38:
		_3_problem_next = 67;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((right ^
								  (right >>
								   31))
								 -
								 (right >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 37:
		_3_problem_next = 66;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (op -
								 ((op <<
								   1) &
								  (op >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 35:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((op ^
								  (op >>
								   31)) -
								 (op >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 29);
		}
		break;
	    case 34:;
		if (tmp___2) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int)
							      (tmp___3 -
							       ((tmp___3 +
								 tmp___3)
								& (tmp___3
								   >> 31)))
							      % 10) * 3 +
							     1] %
				    _5_problem__opaque_array[11] + 28);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((op
								      ^
								      (op
								       >>
								       31))
								     -
								     (op >>
								      31))
							      % 10) * 3 +
							     0] %
				    _5_problem__opaque_array[5] + 29);
		    }
		}
		break;
	    case 33:
		_3_problem_next = 2;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 1)
								  ^
								  ((_4entropy ^ 1)
								   >> 63L))
								 -
								 ((_4entropy ^ 1)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 32:
		_3_problem_next = 4;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  +
								  (tmp___1
								   >> 31))
								 ^ (tmp___1
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 30:
		result = 0;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 2)
								  ^
								  ((_4entropy | 2)
								   >> 63L))
								 -
								 ((_4entropy | 2)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 24);
		}
		break;
	    case 29:
		_3_problem_next = 63;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  - 10) -
								 (((_4entropy - 10) << 1L) & ((_4entropy - 10) >> 63L)))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 27:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 23);
		}
		break;
	    case 26:;
		if (left < 0) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 22);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
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
				    _5_problem__opaque_array[5] + 21);
		    }
		}
		break;
	    case 25:
		_3_problem_next = 21;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp ^
								  (tmp >>
								   31)) -
								 (tmp >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 24:
		_3_problem_next = 8;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 5)
								  +
								  ((_4entropy ^ 5)
								   >> 63L))
								 ^
								 ((_4entropy ^ 5)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 22:
		result = left * right;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  * 10 +
								  (_4entropy
								   *
								   10 >>
								   63L)) ^
								 (_4entropy
								  *
								  10 >>
								  63L)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 16);
		}
		break;
	    case 21:
		_3_problem_next = 12;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 2)
								  ^
								  ((_4entropy ^ 2)
								   >> 63L))
								 -
								 ((_4entropy ^ 2)
								  >> 63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 19:
		left = right + result;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  + 10) -
								 (((_4entropy + 10) << 1L) & ((_4entropy + 10) >> 63L)))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 15);
		}
		break;
	    case 18:
		_3_problem_next = 12;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (tmp -
								 ((tmp <<
								   1) &
								  (tmp >>
								   31))) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 16:
		fflush(stdout);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 10);
		}
		break;
	    case 15:
		_3_problem_next = 34;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy ^ 10)
								  ^
								  ((_4entropy ^ 10) >> 63L)) - ((_4entropy ^ 10)
												>>
												63L))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 13:
		p++;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 9);
		}
		break;
	    case 12:
		_3_problem_next = 0;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 2) + ((_4entropy + 2) >> 63L)) ^ ((_4entropy + 2) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 163);
		}
		break;
	    case 10:
		encoder(7, encodeStrings_litStr7);
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___0
								  ^
								  (tmp___0
								   >> 31))
								 -
								 (tmp___0
								  >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 4);
		}
		break;
	    case 9:
		_3_problem_next = 30;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 7:
		right = left;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 8)
								  ^
								  ((_4entropy | 8)
								   >> 63L))
								 -
								 ((_4entropy | 8)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 3);
		}
		break;
	    case 6:
		_3_problem_next = 59;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((tmp___1
								  ^
								  (tmp___1
								   >> 31))
								 -
								 (tmp___1
								  >> 31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 233:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy + 7) + ((_4entropy + 7) >> 63L)) ^ ((_4entropy + 7) >> 63L)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 229);
		}
		break;
	    case 232:;
		if (*p) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy - 4) - (((_4entropy - 4) << 1L)
											&
											((_4entropy - 4) >> 63L))) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 226);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((result + (result >> 31)) ^ (result >> 31)) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 227);
		    }
		}
		break;
	    case 4:
		nwrong++;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 10)
								  +
								  ((_4entropy | 10) >> 63L)) ^ ((_4entropy | 10)
												>>
												63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 0);
		}
		break;
	    case 231:
		_3_problem_next = 75;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy | 7)
								  ^
								  ((_4entropy | 7)
								   >> 63L))
								 -
								 ((_4entropy | 7)
								  >> 63L))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 3:
		_3_problem_next = 26;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result +
								  (result
								   >> 31))
								 ^ (result
								    >> 31))
							  % 10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 230:
		_3_problem_next = 66;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((_4entropy
								  ^ 3) -
								 (((_4entropy ^ 3)
								   << 1L) &
								  ((_4entropy ^ 3)
								   >>
								   63L))) %
							  10) * 3 +
							 1] %
				_5_problem__opaque_array[11] + 161);
		}
		break;
	    case 1:
		printf((char const *) (encodeStrings_litStr7));
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) (((_4entropy - 8) ^ ((_4entropy - 8) >> 63L)) - ((_4entropy - 8) >> 63L)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + -5);
		}
		break;
	    case 228:;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((result ^
								  (result
								   >> 31))
								 -
								 (result >>
								  31))
							  % 10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 224);
		}
		break;
	    case 0:
		_3_problem_next = 29;
		{
		    _6_problem_next =
			(unsigned
			 long) (_5_problem__opaque_array[((unsigned
							   int) ((left +
								  (left >>
								   31)) ^
								 (left >>
								  31)) %
							  10) * 3 +
							 0] %
				_5_problem__opaque_array[5] + 163);
		}
		break;
	    case 227:;
		if (op == 43) {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((tmp___1 ^ (tmp___1 >> 31)) - (tmp___1 >> 31)) % 10) * 3 + 1] % _5_problem__opaque_array[11] + 221);
		    }
		} else {
		    {
			_6_problem_next =
			    (unsigned
			     long) (_5_problem__opaque_array[((unsigned
							       int) ((_4entropy | 3) - (((_4entropy | 3) + (_4entropy | 3)) & ((_4entropy | 3) >> 63L))) % 10) * 3 + 0] % _5_problem__opaque_array[5] + 222);
		    }
		}
		break;
	    }
	}
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
