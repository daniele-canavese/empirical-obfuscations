#include "tictactoe.h"

char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;
char matrix[3][3];

int main(int _formal_argc, char **_formal_argv, char **_formal_envp)
{
    char done;

    {
	megaInit();
	_global_argc = _formal_argc;
	_global_argv = _formal_argv;
	_global_envp = _formal_envp;
	encoder(7, encodeStrings_litStr7);
	printf((char const *) (encodeStrings_litStr7));
	encoder(8, encodeStrings_litStr8);
	printf((char const *) (encodeStrings_litStr8));
	done = (char) ' ';
	init_matrix();
	while (1) {
	    disp_matrix();
	    get_player_move();
	    done = check();
	    if ((int) done != 32) {
		break;
	    }
	    get_computer_move();
	    done = check();
	    if (!((int) done == 32)) {
		break;
	    }
	}
	if ((int) done == 88) {
	    encoder(9, encodeStrings_litStr9);
	    printf((char const *) (encodeStrings_litStr9));
	} else {
	    encoder(10, encodeStrings_litStr10);
	    printf((char const *) (encodeStrings_litStr10));
	}
	disp_matrix();
	return (0);
    }
}

void disp_matrix(void)
{
    int t;

    {
	t = 0;
	while (t < 3) {
	    encoder(0, encodeStrings_litStr0);
	    printf((char const *) (encodeStrings_litStr0),
		   (int) matrix[t][0], (int) matrix[t][1],
		   (int) matrix[t][2]);
	    if (t != 2) {
		encoder(1, encodeStrings_litStr1);
		printf((char const *) (encodeStrings_litStr1));
	    }
	    t++;
	}
	encoder(2, encodeStrings_litStr2);
	printf((char const *) (encodeStrings_litStr2));
	return;
    }
}

void init_matrix(void)
{
    int i;
    int j;

    {
	i = 0;
	while (i < 3) {
	    j = 0;
	    while (j < 3) {
		matrix[i][j] = (char) ' ';
		j++;
	    }
	    i++;
	}
	return;
    }
}

char check(void)
{
    int i = 0;
    char tmp;
    char tmp___0;
    unsigned long _5_check_next;

    {
	{
	    _5_check_next =
		(unsigned
		 long) (_4_check__opaque_array[((unsigned
						 int) ((i ^ (i >> 31)) -
						       (i >> 31)) % 10) *
					       3 +
					       1] %
			_4_check__opaque_array[11] + 25);
	}
	while (1) {
	    switch (_5_check_next) {
	    case 30:
		i = 0;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) (((_3entropy
								 -
								 4) ^
								((_3entropy
								  -
								  4) >>
								 63L)) -
							       ((_3entropy
								 -
								 4) >>
								63L)) %
							10) * 3 +
						       0] %
				_4_check__opaque_array[5] + 25);
		}
		break;
	    case 28:;
		if (i < 3) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 21);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (i -
								   ((i << 1) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 15);
		    }
		}
		break;
	    case 26:;
		if ((int) matrix[i][0] == (int) matrix[i][1]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _4_check__opaque_array[5] + 22);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy - 6) - (((_3entropy - 6) << 1L) & ((_3entropy - 6) >> 63L))) % 10) * 3 + 0] % _4_check__opaque_array[5] + 18);
		    }
		}
		break;
	    case 25:;
		if ((int) matrix[i][0] == (int) matrix[i][2]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 19);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy - 7) ^ ((_3entropy - 7) >> 63L)) - ((_3entropy - 7) >> 63L)) % 10) * 3 + 0] % _4_check__opaque_array[5] + 18);
		    }
		}
		break;
	    case 24:;
		if ((int) matrix[i][0] != 32) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy | 9) - (((_3entropy | 9) + (_3entropy | 9)) & ((_3entropy | 9) >> 63L))) % 10) * 3 + 1] % _4_check__opaque_array[11] + 18);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy - 7) - (((_3entropy - 7) << 1L) & ((_3entropy - 7) >> 63L))) % 10) * 3 + 1] % _4_check__opaque_array[11] + 16);
		    }
		}
		break;
	    case 23:
		tmp = (char) 'O';
		matrix[i][0] = tmp;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_4_check__opaque_array[11] + 17);
		}
		break;
	    case 22:;
		return (tmp);
		break;
	    case 21:
		i++;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_4_check__opaque_array[11] + 23);
		}
		break;
	    case 20:
		i = 0;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       0] %
				_4_check__opaque_array[5] + 15);
		}
		break;
	    case 18:;
		if (i < 3) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy | 3) ^ ((_3entropy | 3) >> 63L)) - ((_3entropy | 3) >> 63L)) % 10) * 3 + 1] % _4_check__opaque_array[11] + 11);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 5);
		    }
		}
		break;
	    case 16:;
		if ((int) matrix[0][i] == (int) matrix[1][i]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 10);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 6);
		    }
		}
		break;
	    case 15:;
		if ((int) matrix[0][i] == (int) matrix[2][i]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 9);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy | 3) ^ ((_3entropy | 3) >> 63L)) - ((_3entropy | 3) >> 63L)) % 10) * 3 + 0] % _4_check__opaque_array[5] + 8);
		    }
		}
		break;
	    case 14:;
		if ((int) matrix[0][i] != 32) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 8);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy - 5) + ((_3entropy - 5) >> 63L)) ^ ((_3entropy - 5) >> 63L)) % 10) * 3 + 0] % _4_check__opaque_array[5] + 8);
		    }
		}
		break;
	    case 13:
		tmp___0 = (char) 'X';
		matrix[0][i] = tmp___0;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) (((_3entropy
								 | 3) +
								((_3entropy
								  | 3) >>
								 63L)) ^
							       ((_3entropy
								 | 3) >>
								63L)) %
							10) * 3 +
						       1] %
				_4_check__opaque_array[11] + 7);
		}
		break;
	    case 12:;
		return (tmp___0);
		break;
	    case 11:
		i++;
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) (((_3entropy
								 | 2) +
								((_3entropy
								  | 2) >>
								 63L)) ^
							       ((_3entropy
								 | 2) >>
								63L)) %
							10) * 3 +
						       0] %
				_4_check__opaque_array[5] + 15);
		}
		break;
	    case 10:;
		if ((int) matrix[0][0] == (int) matrix[1][1]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   0] %
				    _4_check__opaque_array[5] + 6);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy * 7 ^ (_3entropy * 7 >> 63L)) - (_3entropy * 7 >> 63L)) % 10) * 3 + 1] % _4_check__opaque_array[11] + 0);
		    }
		}
		break;
	    case 9:;
		if ((int) matrix[1][1] == (int) matrix[2][2]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + 3);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy * 1 + (_3entropy * 1 >> 63L)) ^ (_3entropy * 1 >> 63L)) % 10) * 3 + 1] % _4_check__opaque_array[11] + 0);
		    }
		}
		break;
	    case 8:;
		if ((int) matrix[0][0] != 32) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((_3entropy - 10) - (((_3entropy - 10) << 1L) & ((_3entropy - 10) >> 63L))) % 10) * 3 + 1] % _4_check__opaque_array[11] + 2);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _4_check__opaque_array[5] + 2);
		    }
		}
		break;
	    case 7:
		matrix[0][0] = (char) 'O';
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_4_check__opaque_array[5] + 3);
		}
		break;
	    case 6:;
		return (matrix[0][0]);
		break;
	    case 5:;
		if ((int) matrix[0][2] == (int) matrix[1][1]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + -1);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy + 10) ^ ((_3entropy + 10) >> 63L)) - ((_3entropy + 10) >> 63L)) % 10) * 3 + 1] % _4_check__opaque_array[11] + -5);
		    }
		}
		break;
	    case 4:;
		if ((int) matrix[1][1] == (int) matrix[2][0]) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _4_check__opaque_array[5] + 0);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy + 2) ^ ((_3entropy + 2) >> 63L)) - ((_3entropy + 2) >> 63L)) % 10) * 3 + 0] % _4_check__opaque_array[5] + -3);
		    }
		}
		break;
	    case 3:;
		if ((int) matrix[0][2] != 32) {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned
							     int) (((_3entropy | 4) ^ ((_3entropy | 4) >> 63L)) - ((_3entropy | 4) >> 63L)) % 10) * 3 + 0] % _4_check__opaque_array[5] + -1);
		    }
		} else {
		    {
			_5_check_next =
			    (unsigned
			     long) (_4_check__opaque_array[((unsigned int)
							    (_3entropy *
							     5 -
							     ((_3entropy *
							       5 +
							       _3entropy *
							       5) &
							      (_3entropy *
							       5 >> 63L)))
							    % 10) * 3 +
							   1] %
				    _4_check__opaque_array[11] + -5);
		    }
		}
		break;
	    case 2:
		matrix[0][2] = (char) 'O';
		{
		    _5_check_next =
			(unsigned
			 long) (_4_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_4_check__opaque_array[5] + -2);
		}
		break;
	    case 1:;
		return (matrix[0][2]);
		break;
	    case 0:;
		return ((char) ' ');
		break;
	    }
	}
    }
}

void get_computer_move(void)
{
    int i;
    int j;

    {
	i = 0;
	while (i < 3) {
	    j = 0;
	    while (j < 3) {
		if ((int) matrix[i][j] == 32) {
		    break;
		}
		j++;
	    }
	    if ((int) matrix[i][j] == 32) {
		break;
	    }
	    i++;
	}
	if (i * j == 9) {
	    encoder(3, encodeStrings_litStr3);
	    printf((char const *) (encodeStrings_litStr3));
	    exit(0);
	} else {
	    matrix[i][j] = (char) 'O';
	}
	return;
    }
}

void get_player_move(void)
{
    int x;
    int y;

    {
	encoder(4, encodeStrings_litStr4);
	printf((char const *) (encodeStrings_litStr4));
	encoder(5, encodeStrings_litStr5);
	scanf((char const *) (encodeStrings_litStr5), &x, &y);
	x--;
	y--;
	if ((int) matrix[x][y] != 32) {
	    encoder(6, encodeStrings_litStr6);
	    printf((char const *) (encodeStrings_litStr6));
	    get_player_move();
	} else {
	    matrix[x][y] = (char) 'X';
	}
	return;
    }
}
