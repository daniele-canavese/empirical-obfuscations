#include "number.h"

int lflag;
char *name3[22];
char *name2[10];
char *name1[20];
char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;

int unit(int len, char const *p)
{
    int off;
    int rval;
    char const *tmp;
    int tmp___0;
    char const *tmp___1;
    int tmp___2;
    int tmp___3;

    {
	rval = 0;
	if (len > 3) {
	    if (len % 3) {
		off = len % 3;
		len -= off;
		tmp___0 = number(p, off);
		if (tmp___0) {
		    rval = 1;
		    if (lflag) {
			encoder(82, encodeStrings_litStr82);
			tmp = encodeStrings_litStr82;
		    } else {
			encoder(83, encodeStrings_litStr83);
			tmp = encodeStrings_litStr83;
		    }
		    encoder(84, encodeStrings_litStr84);
		    printf((char const *) (encodeStrings_litStr84),
			   name3[len / 3], tmp);
		}
		p += off;
	    }
	    while (len > 3) {
		len -= 3;
		tmp___2 = number(p, 3);
		if (tmp___2) {
		    rval = 1;
		    if (lflag) {
			encoder(85, encodeStrings_litStr85);
			tmp___1 = encodeStrings_litStr85;
		    } else {
			encoder(86, encodeStrings_litStr86);
			tmp___1 = encodeStrings_litStr86;
		    }
		    encoder(87, encodeStrings_litStr87);
		    printf((char const *) (encodeStrings_litStr87),
			   name3[len / 3], tmp___1);
		}
		p += 3;
	    }
	}
	tmp___3 = number(p, len);
	if (tmp___3) {
	    if (!lflag) {
		encoder(88, encodeStrings_litStr88);
		printf((char const *) (encodeStrings_litStr88));
	    }
	    rval = 1;
	}
	return (rval);
    }
}

void convert(char *line)
{
    int flen;
    int len;
    int rval;
    char *p;
    char *fraction;
    size_t tmp;
    size_t tmp___0;
    char const *tmp___1;
    int tmp___2;
    char const *tmp___3;
    char const *tmp___4;
    int tmp___5;
    char const *tmp___6;

    {
	flen = 0;
	fraction = (char *) ((void *) 0);
	p = line;
	while (1) {
	    if ((int) *p != 0) {
		if (!((int) *p != 10)) {
		    break;
		}
	    } else {
		break;
	    }
	    if ((int) *p == 32) {
		goto _L;
	    } else if ((int) *p == 9) {
	      _L:
		if ((unsigned long) p == (unsigned long) line) {
		    line++;
		    goto __Cont;
		}
		goto badnum;
	    }
	    if ((int) ((unsigned char) *p) >= 48) {
		if ((int) ((unsigned char) *p) <= 57) {
		    goto __Cont;
		}
	    }
	    switch ((int) *p) {
	    case 46:
		if ((unsigned long) fraction !=
		    (unsigned long) ((void *) 0)) {
		    goto badnum;
		}
		fraction = p + 1;
		*p = (char) '\000';
		break;
	    case 45:
		if ((unsigned long) p == (unsigned long) line) {
		    break;
		}
	      badnum:
	    default:
		encoder(0, encodeStrings_litStr0);
		fprintf((FILE *) stderr,
			(char const *) (encodeStrings_litStr0), line);
		exit(-1);
		break;
	    }
	  __Cont:
	    p++;
	}
	*p = (char) '\000';
	tmp = strlen((char const *) line);
	len = (int) tmp;
	if (len > 65) {
	    encoder(1, encodeStrings_litStr1);
	    fprintf((FILE *) stderr,
		    (char const *) (encodeStrings_litStr1), 65);
	    exit(-1);
	} else if ((unsigned long) fraction !=
		   (unsigned long) ((void *) 0)) {
	    tmp___0 = strlen((char const *) fraction);
	    flen = (int) tmp___0;
	    if (flen > 65) {
		encoder(2, encodeStrings_litStr2);
		fprintf((FILE *) stderr,
			(char const *) (encodeStrings_litStr2), 65);
		exit(-1);
	    }
	}
	if ((int) *line == 45) {
	    if (lflag) {
		encoder(3, encodeStrings_litStr3);
		tmp___1 = encodeStrings_litStr3;
	    } else {
		encoder(4, encodeStrings_litStr4);
		tmp___1 = encodeStrings_litStr4;
	    }
	    encoder(5, encodeStrings_litStr5);
	    printf((char const *) (encodeStrings_litStr5), tmp___1);
	    line++;
	    len--;
	}
	if (len > 0) {
	    tmp___2 = unit(len, (char const *) line);
	    rval = tmp___2;
	} else {
	    rval = 0;
	}
	if ((unsigned long) fraction != (unsigned long) ((void *) 0)) {
	    if (flen != 0) {
		p = fraction;
		while ((int) *p != 0) {
		    if ((int) *p != 48) {
			if (rval) {
			    if (lflag) {
				encoder(6, encodeStrings_litStr6);
				tmp___3 = encodeStrings_litStr6;
			    } else {
				encoder(7, encodeStrings_litStr7);
				tmp___3 = encodeStrings_litStr7;
			    }
			    if (lflag) {
				encoder(8, encodeStrings_litStr8);
				tmp___4 = encodeStrings_litStr8;
			    } else {
				encoder(9, encodeStrings_litStr9);
				tmp___4 = encodeStrings_litStr9;
			    }
			    encoder(10, encodeStrings_litStr10);
			    printf((char const *) (encodeStrings_litStr10),
				   tmp___4, tmp___3);
			}
			tmp___5 = unit(flen, (char const *) fraction);
			if (tmp___5) {
			    if (lflag) {
				encoder(11, encodeStrings_litStr11);
				printf((char const *)
				       (encodeStrings_litStr11));
			    }
			    pfract(flen);
			    rval = 1;
			}
			break;
		    }
		    p++;
		}
	    }
	}
	if (!rval) {
	    if (lflag) {
		encoder(12, encodeStrings_litStr12);
		tmp___6 = encodeStrings_litStr12;
	    } else {
		encoder(13, encodeStrings_litStr13);
		tmp___6 = encodeStrings_litStr13;
	    }
	    encoder(14, encodeStrings_litStr14);
	    printf((char const *) (encodeStrings_litStr14), tmp___6);
	}
	if (lflag) {
	    encoder(15, encodeStrings_litStr15);
	    printf((char const *) (encodeStrings_litStr15));
	}
	return;
    }
}

void pfract(int len)
{
    static char const *const pref[3] =
	{ (char const * /* const */ ) (encodeStrings_litStr76),
	(char const * /* const */ ) (encodeStrings_litStr77),
	(char const * /* const */ ) (encodeStrings_litStr78)
    };

    {
	encoder(76, encodeStrings_litStr76);
	encoder(77, encodeStrings_litStr77);
	encoder(78, encodeStrings_litStr78);
	switch (len) {
	case 1:
	    encoder(79, encodeStrings_litStr79);
	    printf((char const *) (encodeStrings_litStr79));
	    break;
	case 2:
	    encoder(80, encodeStrings_litStr80);
	    printf((char const *) (encodeStrings_litStr80));
	    break;
	default:
	    encoder(81, encodeStrings_litStr81);
	    printf((char const *) (encodeStrings_litStr81), pref[len % 3],
		   name3[len / 3]);
	    break;
	}
	return;
    }
}

int number(char const *p, int len)
{
    int val = 0;
    int rval;
    unsigned long _5_number_next;

    {
	{
	    _5_number_next =
		(unsigned
		 long) (_4_number__opaque_array[((unsigned
						  int) (((_3entropy - 8) +
							 ((_3entropy -
							   8) >> 63L)) ^
							((_3entropy -
							  8) >> 63L)) %
						 10) * 3 +
						0] %
			_4_number__opaque_array[5] + 15);
	}
	while (1) {
	    switch (_5_number_next) {
	    case 18:
		rval = 0;
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((len ^
								 (len >>
								  31)) -
								(len >>
								 31)) %
							 10) * 3 +
							1] %
				_4_number__opaque_array[11] + 12);
		}
		break;
	    case 17:;
		switch (len) {
		case 3:
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (rval
								    -
								    ((rval
								      +
								      rval)
								     &
								     (rval
								      >>
								      31)))
							     % 10) * 3 +
							    1] %
				    _4_number__opaque_array[11] + 11);
		    }
		    break;
		case 2:
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((_3entropy * 8 ^ (_3entropy * 8 >> 63L)) - (_3entropy * 8 >> 63L)) % 10) * 3 + 0] % _4_number__opaque_array[5] + 10);
		    }
		    break;
		case 1:
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy | 8) ^ ((_3entropy | 8) >> 63L))
								    -
								    ((_3entropy | 8) >> 63L))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + -1);
		    }
		    break;
		default:
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((_3entropy | 10) - (((_3entropy | 10) << 1L)
											&
											((_3entropy | 10) >> 63L))) % 10) * 3 + 1] % _4_number__opaque_array[11] + -5);
		    }
		    break;
		}
		break;
	    case 16:;
		if ((int const) *p != 48) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned int)
							     (_3entropy
							      * 1 -
							      ((_3entropy *
								1 +
								_3entropy *
								1) &
							       (_3entropy *
								1 >> 63L)))
							     % 10) * 3 +
							    1] %
				    _4_number__opaque_array[11] + 10);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy + 6) + ((_3entropy + 6) >> 63L))
								    ^
								    ((_3entropy + 6) >> 63L))
							     % 10) * 3 +
							    1] %
				    _4_number__opaque_array[11] + 9);
		    }
		}
		break;
	    case 15:
		rval = 1;
		encoder(70, encodeStrings_litStr70);
		printf((char const *) (encodeStrings_litStr70),
		       name1[(int const) *p - 48]);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((len ^
								 (len >>
								  31)) -
								(len >>
								 31)) %
							 10) * 3 +
							0] %
				_4_number__opaque_array[5] + 11);
		}
		break;
	    case 14:
		p++;
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) (((_3entropy
								  | 10)
								 +
								 ((_3entropy | 10)
								  >> 63L))
								^
								((_3entropy
								  | 10)
								 >> 63L)) %
							 10) * 3 +
							1] %
				_4_number__opaque_array[11] + 8);
		}
		break;
	    case 13:
		val =
		    (int) (((int const) *(p + 1) - 48) +
			   ((int const) *(p + 0) - 48) * 10);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((_3entropy
								 ^ 2) -
								(((_3entropy ^ 2)
								  << 1L) &
								 ((_3entropy ^ 2)
								  >> 63L)))
							 % 10) * 3 +
							0] %
				_4_number__opaque_array[5] + 9);
		}
		break;
	    case 12:;
		if (val) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy + 8) ^ ((_3entropy + 8) >> 63L))
								    -
								    ((_3entropy + 8) >> 63L))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + 8);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len
								      << 1)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + -3);
		    }
		}
		break;
	    case 11:;
		if (rval) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((_3entropy | 8) - (((_3entropy | 8) << 1L) & ((_3entropy | 8) >> 63L))) % 10) * 3 + 1] % _4_number__opaque_array[11] + 5);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((len
								     ^
								     (len
								      >>
								      31))
								    -
								    (len >>
								     31))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + 6);
		    }
		}
		break;
	    case 10:
		encoder(71, encodeStrings_litStr71);
		printf((char const *) (encodeStrings_litStr71));
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) (_3entropy
								* 7 -
								((_3entropy
								  *
								  7 << 1L)
								 &
								 (_3entropy
								  *
								  7 >>
								  63L))) %
							 10) * 3 +
							1] %
				_4_number__opaque_array[11] + 4);
		}
		break;
	    case 9:;
		if (val < 20) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy + 9) + ((_3entropy + 9) >> 63L))
								    ^
								    ((_3entropy + 9) >> 63L))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + 5);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((_3entropy * 3 ^ (_3entropy * 3 >> 63L)) - (_3entropy * 3 >> 63L)) % 10) * 3 + 0] % _4_number__opaque_array[5] + 4);
		    }
		}
		break;
	    case 8:
		encoder(72, encodeStrings_litStr72);
		printf((char const *) (encodeStrings_litStr72),
		       name1[val]);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((len ^
								 (len >>
								  31)) -
								(len >>
								 31)) %
							 10) * 3 +
							0] %
				_4_number__opaque_array[5] + 1);
		}
		break;
	    case 7:
		encoder(73, encodeStrings_litStr73);
		printf((char const *) (encodeStrings_litStr73),
		       name2[val / 10]);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) (rval -
								((rval +
								  rval) &
								 (rval >>
								  31))) %
							 10) * 3 +
							0] %
				_4_number__opaque_array[5] + 3);
		}
		break;
	    case 6:;
		if (val % 10) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy + 1) + ((_3entropy + 1) >> 63L))
								    ^
								    ((_3entropy + 1) >> 63L))
							     % 10) * 3 +
							    1] %
				    _4_number__opaque_array[11] + 0);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (((_3entropy | 10) ^ ((_3entropy | 10) >> 63L)) - ((_3entropy | 10) >> 63L))
							     % 10) * 3 +
							    0] %
				    _4_number__opaque_array[5] + 1);
		    }
		}
		break;
	    case 5:
		encoder(74, encodeStrings_litStr74);
		printf((char const *) (encodeStrings_litStr74),
		       name1[val % 10]);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							0] %
				_4_number__opaque_array[5] + 1);
		}
		break;
	    case 4:
		rval = 1;
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) (((_3entropy
								  | 9) ^
								 ((_3entropy | 9)
								  >> 63L))
								-
								((_3entropy
								  | 9)
								 >> 63L)) %
							 10) * 3 +
							1] %
				_4_number__opaque_array[11] + -5);
		}
		break;
	    case 2:;
		if ((int const) *p != 48) {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) ((_3entropy + 3) - (((_3entropy + 3) + (_3entropy + 3)) & ((_3entropy + 3) >> 63L))) % 10) * 3 + 0] % _4_number__opaque_array[5] + -2);
		    }
		} else {
		    {
			_5_number_next =
			    (unsigned
			     long) (_4_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len
								      << 1)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    1] %
				    _4_number__opaque_array[11] + -5);
		    }
		}
		break;
	    case 1:
		rval = 1;
		encoder(75, encodeStrings_litStr75);
		printf((char const *) (encodeStrings_litStr75),
		       name1[(int const) *p - 48]);
		{
		    _5_number_next =
			(unsigned
			 long) (_4_number__opaque_array[((unsigned
							  int) ((val +
								 (val >>
								  31)) ^
								(val >>
								 31)) %
							 10) * 3 +
							1] %
				_4_number__opaque_array[11] + -5);
		}
		break;
	    case 0:;
		return (rval);
		break;
	    }
	}
    }
}

int main(int _formal_argc, char **_formal_argv, char **_formal_envp)
{
    int first;
    char line[256];
    char *tmp;
    char *tmp___0;

    {
	megaInit();
	_global_argc = _formal_argc;
	_global_argv = _formal_argv;
	_global_envp = _formal_envp;
	init();
	first = 1;
	while (1) {
	    tmp___0 = fgets((char *) (line),
			    (int) sizeof(line), (FILE *) stdin);
	    if (!((unsigned long) tmp___0 != (unsigned long) ((void *) 0))) {
		break;
	    }
	    tmp = strchr((char const *) (line), '\n');
	    if ((unsigned long) tmp == (unsigned long) ((void *) 0)) {
		encoder(68, encodeStrings_litStr68);
		fprintf((FILE *) stderr,
			(char const *) (encodeStrings_litStr68));
		exit(-1);
	    }
	    if (!first) {
		encoder(69, encodeStrings_litStr69);
		printf((char const *) (encodeStrings_litStr69));
	    }
	    convert(line);
	    first = 0;
	    fflush(stdout);
	}
	return (0);
    }
}
