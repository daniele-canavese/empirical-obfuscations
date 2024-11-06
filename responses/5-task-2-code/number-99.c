#include "number.h"

int lflag;
char *name3[22];
char *name2[10];
char *name1[20];
char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;

int number(char const *p, int len)
{
    int val = 0;
    int rval;
    unsigned long _3_number_next;
    unsigned long _6_number_next;

    {
	{
	    _6_number_next =
		(unsigned
		 long) (_5_number__opaque_array[((unsigned
						  int) ((val ^ (val >> 31))
							-
							(val >> 31)) %
						 10) * 3 +
						1] %
			_5_number__opaque_array[11] + 63);
	}
	while (1) {
	    switch (_6_number_next) {
	    case 100:
		encoder(74, encodeStrings_litStr74);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  -
								  2) ^
								 ((_4entropy - 2) >> 63L)) - ((_4entropy - 2) >> 63L)) % 10) * 3 + 1] % _5_number__opaque_array[11] + 94);
		}
		break;
	    case 99:
		_3_number_next = 12;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  + 1) +
								 ((_4entropy + 1) >> 63L)) ^ ((_4entropy + 1) >> 63L)) % 10) * 3 + 0] % _5_number__opaque_array[5] + 63);
		}
		break;
	    case 97:
		rval = 1;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (rval -
								((rval <<
								  1) &
								 (rval >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 93);
		}
		break;
	    case 96:
		_3_number_next = 26;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (len -
								((len <<
								  1) &
								 (len >>
								  31))) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 94:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 88);
		}
		break;
	    case 93:;
		return (rval);
		break;
	    case 91:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((val +
								 (val >>
								  31)) ^
								(val >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 87);
		}
		break;
	    case 90:;
		switch (len) {
		case 1:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
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
				    _5_number__opaque_array[5] + 82);
		    }
		    break;
		case 2:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len
								      << 1)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 82);
		    }
		    break;
		case 3:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy * 1 + (_4entropy * 1 >> 63L)) ^ (_4entropy * 1 >> 63L)) % 10) * 3 + 1] % _5_number__opaque_array[11] + 84);
		    }
		    break;
		default:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (rval
								    -
								    ((rval
								      << 1)
								     &
								     (rval
								      >>
								      31)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 80);
		    }
		    break;
		}
		break;
	    case 89:
		_3_number_next = 22;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 7 -
								((_4entropy
								  *
								  7 << 1L)
								 &
								 (_4entropy
								  *
								  7 >>
								  63L))) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 87:
		_3_number_next = 17;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval ^
								 (rval >>
								  31)) -
								(rval >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 85:
		_3_number_next = 2;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 3 -
								((_4entropy
								  *
								  3 << 1L)
								 &
								 (_4entropy
								  *
								  3 >>
								  63L))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 83:
		_3_number_next = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  | 4) ^
								 ((_4entropy | 4)
								  >> 63L))
								-
								((_4entropy
								  | 4)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 80:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 8 -
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
				_5_number__opaque_array[5] + 76);
		}
		break;
	    case 79:;
		if (val % 10) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy + 1) + ((_4entropy + 1) >> 63L))
								    ^
								    ((_4entropy + 1) >> 63L))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 73);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy | 10) ^ ((_4entropy | 10) >> 63L)) - ((_4entropy | 10) >> 63L))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 74);
		    }
		}
		break;
	    case 78:
		_3_number_next = 5;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 77:
		_3_number_next = 4;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  | 9) ^
								 ((_4entropy | 9)
								  >> 63L))
								-
								((_4entropy
								  | 9)
								 >> 63L)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 75:
		printf((char const *) (encodeStrings_litStr71));
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (val -
								((val <<
								  1) &
								 (val >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 71);
		}
		break;
	    case 74:
		_3_number_next = 11;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 10 -
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
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 72:
		printf((char const *) (encodeStrings_litStr73),
		       name2[val / 10]);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
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
				_5_number__opaque_array[11] + 66);
		}
		break;
	    case 71:
		_3_number_next = 7;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  - 8) +
								 ((_4entropy - 8) >> 63L)) ^ ((_4entropy - 8) >> 63L)) % 10) * 3 + 0] % _5_number__opaque_array[5] + 63);
		}
		break;
	    case 68:
		_3_number_next = 24;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (len -
								((len +
								  len) &
								 (len >>
								  31))) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 66:;
		switch (_3_number_next) {
		case 15:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 69);
		    }
		    break;
		case 21:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy + 10) + ((_4entropy + 10) >> 63L)) ^ ((_4entropy + 10) >> 63L))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 72);
		    }
		    break;
		case 7:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 77);
		    }
		    break;
		case 23:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 88);
		    }
		    break;
		case 0:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy | 8) - (((_4entropy | 8) << 1L) & ((_4entropy | 8) >> 63L))) % 10) * 3 + 1] % _5_number__opaque_array[11] + 89);
		    }
		    break;
		case 20:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval +
								     (rval
								      >>
								      31))
								    ^ (rval
								       >>
								       31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 92);
		    }
		    break;
		case 5:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy * 3 + (_4entropy * 3 >> 63L)) ^ (_4entropy * 3 >> 63L)) % 10) * 3 + 1] % _5_number__opaque_array[11] + 95);
		    }
		    break;
		case 24:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy ^ 8) + ((_4entropy ^ 8) >> 63L))
								    ^
								    ((_4entropy ^ 8) >> 63L))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + -4);
		    }
		    break;
		case 26:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((val
								     ^
								     (val
								      >>
								      31))
								    -
								    (val >>
								     31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + -1);
		    }
		    break;
		case 1:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 2);
		    }
		    break;
		case 18:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((val
								     +
								     (val
								      >>
								      31))
								    ^ (val
								       >>
								       31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 7);
		    }
		    break;
		case 2:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned int)
							     (_4entropy
							      * 8 -
							      ((_4entropy *
								8 << 1L) &
							       (_4entropy *
								8 >> 63L)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 12);
		    }
		    break;
		case 19:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len
								      << 1)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 15);
		    }
		    break;
		case 13:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy - 2) ^ ((_4entropy - 2) >> 63L))
								    -
								    ((_4entropy - 2) >> 63L))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 16);
		    }
		    break;
		case 12:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 19);
		    }
		    break;
		case 14:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len
								      << 1)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 26);
		    }
		    break;
		case 17:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 27);
		    }
		    break;
		case 8:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (val
								    -
								    ((val +
								      val)
								     & (val
									>>
									31)))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 30);
		    }
		    break;
		case 16:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy - 1) + ((_4entropy - 1) >> 63L))
								    ^
								    ((_4entropy - 1) >> 63L))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 37);
		    }
		    break;
		case 10:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 40);
		    }
		    break;
		case 9:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy | 10) ^ ((_4entropy | 10) >> 63L)) - ((_4entropy | 10) >> 63L))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 43);
		    }
		    break;
		case 4:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (rval
								    -
								    ((rval
								      << 1)
								     &
								     (rval
								      >>
								      31)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 46);
		    }
		    break;
		case 6:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((val
								     ^
								     (val
								      >>
								      31))
								    -
								    (val >>
								     31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 49);
		    }
		    break;
		case 22:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 54);
		    }
		    break;
		case 11:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (len
								    -
								    ((len +
								      len)
								     & (len
									>>
									31)))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 59);
		    }
		    break;
		case 25:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 62);
		    }
		    break;
		default:
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy - 3) - (((_4entropy - 3) << 1L) & ((_4entropy - 3) >> 63L))) % 10) * 3 + 1] % _5_number__opaque_array[11] + 61);
		    }
		    break;
		}
		break;
	    case 65:
		printf((char const *) (encodeStrings_litStr70),
		       name1[(int const) *p - 48]);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (len -
								((len +
								  len) &
								 (len >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 61);
		}
		break;
	    case 64:
		_3_number_next = 19;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((val +
								 (val >>
								  31)) ^
								(val >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 62:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
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
							0] %
				_5_number__opaque_array[5] + 58);
		}
		break;
	    case 61:;
		if (val < 20) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy ^ 6) ^ ((_4entropy ^ 6) >> 63L))
								    -
								    ((_4entropy ^ 6) >> 63L))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 55);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((val
								     +
								     (val
								      >>
								      31))
								    ^ (val
								       >>
								       31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 56);
		    }
		}
		break;
	    case 60:
		_3_number_next = 10;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (val -
								((val +
								  val) &
								 (val >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 59:
		_3_number_next = 9;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((len ^
								 (len >>
								  31)) -
								(len >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 57:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 | 1) -
								(((_4entropy | 1)
								  +
								  (_4entropy
								   | 1))
								 &
								 ((_4entropy | 1)
								  >> 63L)))
							 % 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 51);
		}
		break;
	    case 56:;
		if ((int const) *p != 48) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy - 6) ^ ((_4entropy - 6) >> 63L))
								    -
								    ((_4entropy - 6) >> 63L))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 50);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 49);
		    }
		}
		break;
	    case 55:
		_3_number_next = 20;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  ^ 5) ^
								 ((_4entropy ^ 5)
								  >> 63L))
								-
								((_4entropy
								  ^ 5)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 54:
		_3_number_next = 19;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  | 9) +
								 ((_4entropy | 9)
								  >> 63L))
								^
								((_4entropy
								  | 9)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 52:
		printf((char const *) (encodeStrings_litStr75),
		       name1[(int const) *p - 48]);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((val +
								 (val >>
								  31)) ^
								(val >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 46);
		}
		break;
	    case 51:
		_3_number_next = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 - 5) -
								(((_4entropy - 5) << 1L) & ((_4entropy - 5) >> 63L))) % 10) * 3 + 0] % _5_number__opaque_array[5] + 63);
		}
		break;
	    case 49:
		rval = 1;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 1 -
								((_4entropy
								  *
								  1 << 1L)
								 &
								 (_4entropy
								  *
								  1 >>
								  63L))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 45);
		}
		break;
	    case 48:
		_3_number_next = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((len +
								 (len >>
								  31)) ^
								(len >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 46:
		encoder(73, encodeStrings_litStr73);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((len +
								 (len >>
								  31)) ^
								(len >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 42);
		}
		break;
	    case 45:
		_3_number_next = 15;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((val ^
								 (val >>
								  31)) -
								(val >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 43:
		encoder(72, encodeStrings_litStr72);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 ^ 9) -
								(((_4entropy ^ 9)
								  +
								  (_4entropy
								   ^ 9))
								 &
								 ((_4entropy ^ 9)
								  >> 63L)))
							 % 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 39);
		}
		break;
	    case 42:
		_3_number_next = 18;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 40:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  - 2) +
								 ((_4entropy - 2) >> 63L)) ^ ((_4entropy - 2) >> 63L)) % 10) * 3 + 1] % _5_number__opaque_array[11] + 34);
		}
		break;
	    case 39:;
		if (val) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy ^ 7) - (((_4entropy ^ 7) << 1L) & ((_4entropy ^ 7) >> 63L))) % 10) * 3 + 1] % _5_number__opaque_array[11] + 33);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((len
								     +
								     (len
								      >>
								      31))
								    ^ (len
								       >>
								       31))
							     % 10) * 3 +
							    1] %
				    _5_number__opaque_array[11] + 32);
		    }
		}
		break;
	    case 38:
		_3_number_next = 14;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  ^ 7) +
								 ((_4entropy ^ 7)
								  >> 63L))
								^
								((_4entropy
								  ^ 7)
								 >> 63L)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 37:
		_3_number_next = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 35:
		encoder(75, encodeStrings_litStr75);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  ^ 2) +
								 ((_4entropy ^ 2)
								  >> 63L))
								^
								((_4entropy
								  ^ 2)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 31);
		}
		break;
	    case 34:
		_3_number_next = 6;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 + 1) -
								(((_4entropy + 1) << 1L) & ((_4entropy + 1) >> 63L))) % 10) * 3 + 0] % _5_number__opaque_array[5] + 63);
		}
		break;
	    case 32:
		val =
		    (int) (((int const) *(p + 1) - 48) +
			   ((int const) *(p + 0) - 48) * 10);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  ^ 9) +
								 ((_4entropy ^ 9)
								  >> 63L))
								^
								((_4entropy
								  ^ 9)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 28);
		}
		break;
	    case 31:
		_3_number_next = 16;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (rval -
								((rval <<
								  1) &
								 (rval >>
								  31))) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 29:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (rval -
								((rval +
								  rval) &
								 (rval >>
								  31))) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 23);
		}
		break;
	    case 28:;
		if (rval) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
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
				    _5_number__opaque_array[11] + 22);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((rval ^
								     (rval
								      >>
								      31))
								    -
								    (rval
								     >>
								     31))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 23);
		    }
		}
		break;
	    case 27:
		_3_number_next = 13;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((len ^
								 (len >>
								  31)) -
								(len >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 26:
		_3_number_next = 11;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  ^ 10)
								 +
								 ((_4entropy ^ 10)
								  >> 63L))
								^
								((_4entropy
								  ^ 10)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 24:
		printf((char const *) (encodeStrings_litStr74),
		       name1[val % 10]);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  | 2) ^
								 ((_4entropy | 2)
								  >> 63L))
								-
								((_4entropy
								  | 2)
								 >> 63L)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 18);
		}
		break;
	    case 23:
		_3_number_next = 4;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 ^ 10) -
								(((_4entropy ^ 10)
								  +
								  (_4entropy
								   ^ 10)) &
								 ((_4entropy ^ 10)
								  >> 63L)))
							 % 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 21:
		encoder(71, encodeStrings_litStr71);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (_4entropy
								* 2 -
								((_4entropy
								  * 2 +
								  _4entropy
								  *
								  2) &
								 (_4entropy
								  *
								  2 >>
								  63L))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 17);
		}
		break;
	    case 20:
		_3_number_next = 21;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 | 10) -
								(((_4entropy | 10)
								  << 1L) &
								 ((_4entropy | 10)
								  >> 63L)))
							 % 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 18:
		p++;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  | 7) ^
								 ((_4entropy | 7)
								  >> 63L))
								-
								((_4entropy
								  | 7)
								 >> 63L)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 14);
		}
		break;
	    case 17:
		_3_number_next = 17;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 61);
		}
		break;
	    case 15:;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval ^
								 (rval >>
								  31)) -
								(rval >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 11);
		}
		break;
	    case 14:;
		if ((int const) *p != 48) {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) ((_4entropy + 5) - (((_4entropy + 5) << 1L) & ((_4entropy + 5) >> 63L))) % 10) * 3 + 0] % _5_number__opaque_array[5] + 10);
		    }
		} else {
		    {
			_6_number_next =
			    (unsigned
			     long) (_5_number__opaque_array[((unsigned
							      int) (((_4entropy ^ 8) + ((_4entropy ^ 8) >> 63L))
								    ^
								    ((_4entropy ^ 8) >> 63L))
							     % 10) * 3 +
							    0] %
				    _5_number__opaque_array[5] + 9);
		    }
		}
		break;
	    case 13:
		_3_number_next = 1;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
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
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 12:
		_3_number_next = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (len -
								((len <<
								  1) &
								 (len >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 10:
		printf((char const *) (encodeStrings_litStr72),
		       name1[val]);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + 4);
		}
		break;
	    case 9:
		_3_number_next = 4;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  + 1) +
								 ((_4entropy + 1) >> 63L)) ^ ((_4entropy + 1) >> 63L)) % 10) * 3 + 1] % _5_number__opaque_array[11] + 61);
		}
		break;
	    case 7:
		rval = 1;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((rval +
								 (rval >>
								  31)) ^
								(rval >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 3);
		}
		break;
	    case 6:
		_3_number_next = 8;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (((_4entropy
								  -
								  9) ^
								 ((_4entropy - 9) >> 63L)) - ((_4entropy - 9) >> 63L)) % 10) * 3 + 0] % _5_number__opaque_array[5] + 63);
		}
		break;
	    case 4:
		encoder(70, encodeStrings_litStr70);
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 *
								 10 ^
								 (_4entropy
								  *
								  10 >>
								  63L)) -
								(_4entropy
								 *
								 10 >>
								 63L)) %
							 10) * 3 +
							1] %
				_5_number__opaque_array[11] + -2);
		}
		break;
	    case 3:
		_3_number_next = 25;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((_4entropy
								 ^ 9) -
								(((_4entropy ^ 9)
								  << 1L) &
								 ((_4entropy ^ 9)
								  >> 63L)))
							 % 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
		break;
	    case 1:
		rval = 0;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) ((val ^
								 (val >>
								  31)) -
								(val >>
								 31)) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + -3);
		}
		break;
	    case 0:
		_3_number_next = 23;
		{
		    _6_number_next =
			(unsigned
			 long) (_5_number__opaque_array[((unsigned
							  int) (len -
								((len <<
								  1) &
								 (len >>
								  31))) %
							 10) * 3 +
							0] %
				_5_number__opaque_array[5] + 63);
		}
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
	}
	return (0);
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
