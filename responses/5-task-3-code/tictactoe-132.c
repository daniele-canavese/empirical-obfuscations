#include "tictactoe.h"

char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;
char matrix[3][3];

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

char check(void)
{
    int i;
    char tmp;
    char tmp___0;
    unsigned long _3_check_next;

    {
	{
	    _3_check_next = 25;
	}
	while (1) {
	    switch (_3_check_next) {
	    case 27:
		//matrix[i][0] = tmp;
		{
		    _3_check_next = 17;
		}
		break;
	    case 26:
		//matrix[0][i] = tmp___0;
		{
		    _3_check_next = 7;
		}
		break;
	    case 29:;
		return ((char) ' ');      //pareggio QUI
		break;
	    case 13:;
		if (i < 3) {
		    {
			_3_check_next = 11;
		    }
		} else {
		    {
			_3_check_next = 5;
		    }
		}
		break;
	    case 23:;
		if (i < 3) {
		    {
			_3_check_next = 21;
		    }
		} else {
		    {
			_3_check_next = 15;
		    }
		}
		break;
	    case 1:;
	    return ((char) ' ');
		break;
	    case 30:
		//matrix[0][2] = (char) 'O';
		{
		    _3_check_next = 29;
		}
		break;
	    case 19:;
		if ((int) matrix[i][0] != 32) {
		    {
			_3_check_next = 18;
		    }
		} else {
		    {
			_3_check_next = 16;
		    }
		}
		break;
	    case 31:;
		if ((int) matrix[0][2] != 32) {
		    {
			_3_check_next = 30;
		    }
		} else {
		    {
			_3_check_next = 28;
		    }
		}
		break;
	    case 8:
		tmp___0 = (char) 'X';   //QUI vittoria utente
		{
		    _3_check_next = 26;
		}
		break;
	    case 4:;
		if ((int) matrix[1][1] == (int) matrix[2][2]) {
		    {
			_3_check_next = 3;
		    }
		} else {
		    {
			_3_check_next = 0;
		    }
		}
		break;
	    case 15:
		i = 0;
		{
		    _3_check_next = 13;
		}
		break;
	    case 2:
		matrix[0][0] = (char) 'O';
		{
		    _3_check_next = 1;
		}
		break;
	    case 0:;
		if ((int) matrix[0][2] == (int) matrix[1][1]) {
		    {
			_3_check_next = 32;
		    }
		} else {
		    {
			_3_check_next = 28;
		    }
		}
		break;
	    case 21:;
		if ((int) matrix[i][0] == (int) matrix[i][1]) {
		    {
			_3_check_next = 20;
		    }
		} else {
		    {
			_3_check_next = 16;
		    }
		}
		break;
	    case 5:;
		if ((int) matrix[0][0] == (int) matrix[1][1]) {
		    {
			_3_check_next = 4;
		    }
		} else {
		    {
			_3_check_next = 0;
		    }
		}
		break;
	    case 17:;
		return (tmp);
		break;
	    case 16:
		i++;
		{
		    _3_check_next = 23;
		}
		break;
	    case 20:;
		if ((int) matrix[i][0] == (int) matrix[i][2]) {
		    {
			_3_check_next = 19;
		    }
		} else {
		    {
			_3_check_next = 16;
		    }
		}
		break;
	    case 10:;
		if ((int) matrix[0][i] == (int) matrix[2][i]) {
		    {
			_3_check_next = 9;
		    }
		} else {
		    {
			_3_check_next = 6;
		    }
		}
		break;
	    case 25:
		i = 0;
		{
		    _3_check_next = 23;
		}
		break;
	    case 32:;
		if ((int) matrix[1][1] == (int) matrix[2][0]) {
		    {
			_3_check_next = 31;
		    }
		} else {
		    {
			_3_check_next = 28;
		    }
		}
		break;
	    case 3:;
		if ((int) matrix[0][0] != 32) {
		    {
			_3_check_next = 2;
		    }
		} else {
		    {
			_3_check_next = 0;
		    }
		}
		break;
	    case 6:
		i++;
		{
		    _3_check_next = 13;
		}
		break;
	    case 7:;
		return (tmp___0);           //vittoria giocatore non convalidata
		break;
	    case 9:;
		if ((int) matrix[0][i] != 32) {
		    {
			_3_check_next = 8;
		    }
		} else {
		    {
			_3_check_next = 6;
		    }
		}
		break;
	    case 11:;
		if ((int) matrix[0][i] == (int) matrix[1][i]) {
		    {
			_3_check_next = 10;
		    }
		} else {
		    {
			_3_check_next = 6;
		    }
		}
		break;
	    case 28:;
		return ((char) ' ');
		break;
	    case 18:
		tmp = (char) 'O';       //QUI vittoria PC
		{
		    _3_check_next = 27;
		}
		break;
	    }
	}
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
	setbuf(stdout, 0);
	while (1) {
	    disp_matrix();
	    get_player_move();
	    done = check();
	    if ((int) done != 32) {
	        done =88;
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
