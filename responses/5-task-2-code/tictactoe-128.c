#include "tictactoe.h"

char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;
char matrix[3][3];

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

char check(char move)
{
    int i = 0;
    char tmp;
    char tmp___0;
    unsigned long _3_check_next;
    unsigned long _6_check_next;

    {
	{
	    _6_check_next =
		(unsigned
		 long) (_5_check__opaque_array[((unsigned int) (i -
								((i +
								  i) & (i
									>>
									31)))
						% 10) * 3 +
					       0] %
			_5_check__opaque_array[5] + 110);
	}
	while (1) {
	    switch (_6_check_next) {
	    case 110:
		tmp = move;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 103);
		}
		break;
	    case 109:;
		switch (_3_check_next) {
		case 18:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy | 7) + ((_4entropy | 7) >> 63L)) ^ ((_4entropy | 7) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 105);
		    }
		    break;
		case 28:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 112);
		    }
		    break;
		case 11:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned int)
							    (_4entropy *
							     1 -
							     ((_4entropy *
							       1 << 1L) &
							      (_4entropy *
							       1 >> 63L)))
							    % 10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + -2);
		    }
		    break;
		case 9:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 3);
		    }
		    break;
		case 7:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 6);
		    }
		    break;
		case 6:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 7);
		    }
		    break;
		case 3:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 14);
		    }
		    break;
		case 32:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 19);
		    }
		    break;
		case 25:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy | 1) ^ ((_4entropy | 1) >> 63L)) - ((_4entropy | 1) >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 22);
		    }
		    break;
		case 10:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy + 3) - (((_4entropy + 3) << 1L) & ((_4entropy + 3) >> 63L))) % 10) * 3 + 0] % _5_check__opaque_array[5] + 27);
		    }
		    break;
		case 20:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 1 + (_4entropy * 1 >> 63L)) ^ (_4entropy * 1 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 30);
		    }
		    break;
		case 16:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 33);
		    }
		    break;
		case 17:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 9 ^ (_4entropy * 9 >> 63L)) - (_4entropy * 9 >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 38);
		    }
		    break;
		case 5:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 41);
		    }
		    break;
		case 21:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 46);
		    }
		    break;
		case 0:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy + 4) - (((_4entropy + 4) << 1L) & ((_4entropy + 4) >> 63L))) % 10) * 3 + 1] % _5_check__opaque_array[11] + 51);
		    }
		    break;
		case 2:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i <<
								     1) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 54);
		    }
		    break;
		case 15:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 59);
		    }
		    break;
		case 4:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy | 3) ^ ((_4entropy | 3) >> 63L)) - ((_4entropy | 3) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 62);
		    }
		    break;
		case 8:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 67);
		    }
		    break;
		case 31:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 72);
		    }
		    break;
		case 19:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 75);
		    }
		    break;
		case 30:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy - 2) + ((_4entropy - 2) >> 63L)) ^ ((_4entropy - 2) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 78);
		    }
		    break;
		case 1:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 9 ^ (_4entropy * 9 >> 63L)) - (_4entropy * 9 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 81);
		    }
		    break;
		case 23:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy + 10) + ((_4entropy + 10) >> 63L)) ^ ((_4entropy + 10) >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 88);
		    }
		    break;
		case 13:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 93);
		    }
		    break;
		case 29:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i <<
								     1) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 94);
		    }
		    break;
		case 26:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 97);
		    }
		    break;
		case 27:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy - 7) - (((_4entropy - 7) << 1L) & ((_4entropy - 7) >> 63L))) % 10) * 3 + 1] % _5_check__opaque_array[11] + 102);
		    }
		    break;
		default:
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 104);
		    }
		    break;
		}
		break;
	    case 108:
		_3_check_next = 27;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 107:
		matrix[i][0] = tmp;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 102);
		}
		break;
	    case 105:
		_3_check_next = 17;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 102:
		matrix[0][i] = tmp___0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 +
								 8) ^
								((_4entropy
								  +
								  8) >>
								 63L)) -
							       ((_4entropy
								 +
								 8) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 96);
		}
		break;
	    case 101:
		_3_check_next = 7;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy -
								6) -
							       (((_4entropy
								  -
								  6) << 1L)
								&
								((_4entropy
								  -
								  6) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 99:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy *
								9 ^
								(_4entropy
								 *
								 9 >> 63L))
							       -
							       (_4entropy *
								9 >> 63L))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 93);
		}
		break;
	    case 98:;
		return (matrix[0][2]);
		break;
	    case 96:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 92);
		}
		break;
	    case 95:;
		if (i < 3) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 89);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy + 6) - (((_4entropy + 6) + (_4entropy + 6)) & ((_4entropy + 6) >> 63L))) % 10) * 3 + 0] % _5_check__opaque_array[5] + 90);
		    }
		}
		break;
	    case 94:
		_3_check_next = 11;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 93:
		_3_check_next = 5;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 91:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 9) +
								((_4entropy
								  +
								  9) >>
								 63L)) ^
							       ((_4entropy
								 +
								 9) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 85);
		}
		break;
	    case 90:;
		if (i < 3) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy - 3) + ((_4entropy - 3) >> 63L)) ^ ((_4entropy - 3) >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 86);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 83);
		    }
		}
		break;
	    case 89:
		_3_check_next = 21;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 88:
		_3_check_next = 15;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 7) +
								((_4entropy
								  +
								  7) >>
								 63L)) ^
							       ((_4entropy
								 +
								 7) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 86:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 82);
		}
		break;
	    case 85:;
		return (matrix[0][0]);
		break;
	    case 83:
		matrix[0][2] = move;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (_4entropy *
							       9 -
							       ((_4entropy
								 *
								 9 << 1L) &
								(_4entropy
								 *
								 9 >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 79);
		}
		break;
	    case 82:
		_3_check_next = 29;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 80:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 76);
		}
		break;
	    case 79:;
		if ((int) matrix[i][0] != 32) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 73);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy + 3) - (((_4entropy + 3) << 1L) & ((_4entropy + 3) >> 63L))) % 10) * 3 + 1] % _5_check__opaque_array[11] + 72);
		    }
		}
		break;
	    case 78:
		_3_check_next = 18;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 - 4) +
								((_4entropy
								  -
								  4) >>
								 63L)) ^
							       ((_4entropy
								 -
								 4) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 77:
		_3_check_next = 16;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy ^
								4) -
							       (((_4entropy
								  ^ 4) +
								 (_4entropy
								  ^ 4)) &
								((_4entropy
								  ^ 4) >>
								 63L))) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 75:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 69);
		}
		break;
	    case 74:;
		if ((int) matrix[0][2] != 32) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy - 7) - (((_4entropy - 7) + (_4entropy - 7)) & ((_4entropy - 7) >> 63L))) % 10) * 3 + 0] % _5_check__opaque_array[5] + 70);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy | 2) ^ ((_4entropy | 2) >> 63L)) - ((_4entropy | 2) >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 69);
		    }
		}
		break;
	    case 73:
		_3_check_next = 30;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy -
								1) -
							       (((_4entropy
								  -
								  1) << 1L)
								&
								((_4entropy
								  -
								  1) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 72:
		_3_check_next = 28;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 70:
		tmp___0 = move;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 64);
		}
		break;
	    case 69:
		_3_check_next = 26;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 67:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 63);
		}
		break;
	    case 66:;
		if ((int) matrix[1][1] == (int) matrix[2][2]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 62);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 59);
		    }
		}
		break;
	    case 65:
		_3_check_next = 3;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 64:
		_3_check_next = 0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 62:
		i = 0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 -
								 10) ^
								((_4entropy
								  -
								  10) >>
								 63L)) -
							       ((_4entropy
								 -
								 10) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 56);
		}
		break;
	    case 61:
		_3_check_next = 13;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 59:
		matrix[0][0] = move;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 | 2) +
								((_4entropy
								  | 2) >>
								 63L)) ^
							       ((_4entropy
								 | 2) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 55);
		}
		break;
	    case 58:
		_3_check_next = 1;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy -
								7) -
							       (((_4entropy
								  - 7) +
								 (_4entropy
								  -
								  7)) &
								((_4entropy
								  -
								  7) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 56:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy +
								5) -
							       (((_4entropy
								  + 5) +
								 (_4entropy
								  +
								  5)) &
								((_4entropy
								  +
								  5) >>
								 63L))) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 50);
		}
		break;
	    case 55:;
		if ((int) matrix[0][2] == (int) matrix[1][1]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 51);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 1 + (_4entropy * 1 >> 63L)) ^ (_4entropy * 1 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 48);
		    }
		}
		break;
	    case 54:
		_3_check_next = 32;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 53:
		_3_check_next = 28;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 +
								 10) ^
								((_4entropy
								  +
								  10) >>
								 63L)) -
							       ((_4entropy
								 +
								 10) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 51:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy *
								6 +
								(_4entropy
								 *
								 6 >> 63L))
							       ^ (_4entropy
								  *
								  6 >>
								  63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 45);
		}
		break;
	    case 50:;
		if ((int) matrix[i][0] == (int) matrix[i][1]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 44);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i ^
								    (i >>
								     31)) -
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 43);
		    }
		}
		break;
	    case 49:
		_3_check_next = 20;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 48:
		_3_check_next = 16;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 - 8) +
								((_4entropy
								  -
								  8) >>
								 63L)) ^
							       ((_4entropy
								 -
								 8) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 46:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy ^
								2) -
							       (((_4entropy
								  ^ 2) <<
								 1L) &
								((_4entropy
								  ^ 2) >>
								 63L))) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 40);
		}
		break;
	    case 45:;
		if ((int) matrix[0][0] == (int) matrix[1][1]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 8 ^ (_4entropy * 8 >> 63L)) - (_4entropy * 8 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 39);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 40);
		    }
		}
		break;
	    case 44:
		_3_check_next = 4;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  +
									  i)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 43:
		_3_check_next = 0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 41:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 37);
		}
		break;
	    case 40:;
		return (tmp);
		break;
	    case 38:
		i++;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 ^ 5) +
								((_4entropy
								  ^ 5) >>
								 63L)) ^
							       ((_4entropy
								 ^ 5) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 32);
		}
		break;
	    case 37:
		_3_check_next = 23;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 - 8) +
								((_4entropy
								  -
								  8) >>
								 63L)) ^
							       ((_4entropy
								 -
								 8) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 35:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 8) +
								((_4entropy
								  +
								  8) >>
								 63L)) ^
							       ((_4entropy
								 +
								 8) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 31);
		}
		break;
	    case 34:;
		if ((int) matrix[i][0] == (int) matrix[i][2]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy + 4) ^ ((_4entropy + 4) >> 63L)) - ((_4entropy + 4) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 28);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 5 + (_4entropy * 5 >> 63L)) ^ (_4entropy * 5 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 27);
		    }
		}
		break;
	    case 33:
		_3_check_next = 19;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 32:
		_3_check_next = 16;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 30:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 6) +
								((_4entropy
								  +
								  6) >>
								 63L)) ^
							       ((_4entropy
								 +
								 6) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 26);
		}
		break;
	    case 29:;
		if ((int) matrix[0][i] == (int) matrix[2][i]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned int)
							    (_4entropy *
							     2 -
							     ((_4entropy *
							       2 +
							       _4entropy *
							       2) &
							      (_4entropy *
							       2 >> 63L)))
							    % 10) * 3 +
							   0] %
				    _5_check__opaque_array[5] + 25);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 22);
		    }
		}
		break;
	    case 28:
		_3_check_next = 9;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy +
								5) -
							       (((_4entropy
								  + 5) +
								 (_4entropy
								  +
								  5)) &
								((_4entropy
								  +
								  5) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 27:
		_3_check_next = 6;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 -
								 2) ^
								((_4entropy
								  -
								  2) >>
								 63L)) -
							       ((_4entropy
								 -
								 2) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 25:
		i = 0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 | 10) ^
								((_4entropy
								  | 10) >>
								 63L)) -
							       ((_4entropy
								 | 10) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 19);
		}
		break;
	    case 24:
		_3_check_next = 23;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 -
								 6) ^
								((_4entropy
								  -
								  6) >>
								 63L)) -
							       ((_4entropy
								 -
								 6) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 22:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy ^
								8) -
							       (((_4entropy
								  ^ 8) +
								 (_4entropy
								  ^ 8)) &
								((_4entropy
								  ^ 8) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 18);
		}
		break;
	    case 21:;
		if ((int) matrix[1][1] == (int) matrix[2][0]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 1 + (_4entropy * 1 >> 63L)) ^ (_4entropy * 1 >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 15);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((i +
								    (i >>
								     31)) ^
								   (i >>
								    31)) %
							    10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 14);
		    }
		}
		break;
	    case 20:
		_3_check_next = 31;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 19:
		_3_check_next = 28;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 | 4) +
								((_4entropy
								  | 4) >>
								 63L)) ^
							       ((_4entropy
								 | 4) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 17:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 ^ 8) +
								((_4entropy
								  ^ 8) >>
								 63L)) ^
							       ((_4entropy
								 ^ 8) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 11);
		}
		break;
	    case 16:;
		if ((int) matrix[0][0] != 32) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i <<
								     1) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 10);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy * 4 ^ (_4entropy * 4 >> 63L)) - (_4entropy * 4 >> 63L)) % 10) * 3 + 0] % _5_check__opaque_array[5] + 11);
		    }
		}
		break;
	    case 15:
		_3_check_next = 2;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned int) (i -
									((i
									  <<
									  1)
									 &
									 (i
									  >>
									  31)))
							% 10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 14:
		_3_check_next = 0;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy +
								4) -
							       (((_4entropy
								  + 4) +
								 (_4entropy
								  +
								  4)) &
								((_4entropy
								  +
								  4) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 12:
		i++;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i +
								(i >> 31))
							       ^ (i >> 31))
							% 10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 8);
		}
		break;
	    case 11:
		_3_check_next = 13;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((i ^
								(i >> 31))
							       -
							       (i >> 31)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 104);
		}
		break;
	    case 9:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy *
								7 +
								(_4entropy
								 *
								 7 >> 63L))
							       ^ (_4entropy
								  *
								  7 >>
								  63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 5);
		}
		break;
	    case 8:;
		return (tmp___0);
		break;
	    case 6:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 7) +
								((_4entropy
								  +
								  7) >>
								 63L)) ^
							       ((_4entropy
								 +
								 7) >>
								63L)) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + 0);
		}
		break;
	    case 5:;
		if ((int) matrix[0][i] != 32) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy ^ 1) + ((_4entropy ^ 1) >> 63L)) ^ ((_4entropy ^ 1) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + -1);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) ((_4entropy - 3) - (((_4entropy - 3) + (_4entropy - 3)) & ((_4entropy - 3) >> 63L))) % 10) * 3 + 1] % _5_check__opaque_array[11] + -2);
		    }
		}
		break;
	    case 118:
		_3_check_next = 10;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy |
								9) -
							       (((_4entropy
								  | 9) <<
								 1L) &
								((_4entropy
								  | 9) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 4:
		_3_check_next = 8;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 | 6) +
								((_4entropy
								  | 6) >>
								 63L)) ^
							       ((_4entropy
								 | 6) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 117:
		_3_check_next = 6;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) (((_4entropy
								 + 1) +
								((_4entropy
								  +
								  1) >>
								 63L)) ^
							       ((_4entropy
								 +
								 1) >>
								63L)) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 3:
		_3_check_next = 6;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy +
								10) -
							       (((_4entropy
								  + 10) +
								 (_4entropy
								  +
								  10)) &
								((_4entropy
								  +
								  10) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    case 115:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy -
								5) -
							       (((_4entropy
								  -
								  5) << 1L)
								&
								((_4entropy
								  -
								  5) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 111);
		}
		break;
	    case 1:;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy |
								4) -
							       (((_4entropy
								  | 4) <<
								 1L) &
								((_4entropy
								  | 4) >>
								 63L))) %
							10) * 3 +
						       1] %
				_5_check__opaque_array[11] + -5);
		}
		break;
	    case 114:;
		return ((char) ' ');
		break;
	    case 0:;
		if ((int) matrix[0][i] == (int) matrix[1][i]) {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (i -
								   ((i +
								     i) &
								    (i >>
								     31)))
							    % 10) * 3 +
							   1] %
				    _5_check__opaque_array[11] + 113);
		    }
		} else {
		    {
			_6_check_next =
			    (unsigned
			     long) (_5_check__opaque_array[((unsigned
							     int) (((_4entropy - 1) + ((_4entropy - 1) >> 63L)) ^ ((_4entropy - 1) >> 63L)) % 10) * 3 + 1] % _5_check__opaque_array[11] + 112);
		    }
		}
		break;
	    case 113:
		_3_check_next = 25;
		{
		    _6_check_next =
			(unsigned
			 long) (_5_check__opaque_array[((unsigned
							 int) ((_4entropy ^
								10) -
							       (((_4entropy
								  ^ 10) +
								 (_4entropy
								  ^ 10)) &
								((_4entropy
								  ^ 10) >>
								 63L))) %
							10) * 3 +
						       0] %
				_5_check__opaque_array[5] + 106);
		}
		break;
	    }
	}
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
	    done = check('X');
	    if ((int) done != 32) {
		break;
	    }
	    get_computer_move();
	    done = check('O');
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
