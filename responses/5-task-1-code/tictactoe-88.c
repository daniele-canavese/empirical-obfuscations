#include "tictactoe.h"

char **_global_argv = (char **) 0;
int _global_argc = 0;
char **_global_envp = (char **) 0;
char matrix[3][3];

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

char check(void)
{
    int i;
    char tmp;
    char tmp___0;

    {
	i = 0;
	while (i < 3) {
	    if ((int) matrix[i][0] == (int) matrix[i][1]) {
		if ((int) matrix[i][0] == (int) matrix[i][2]) {
		    if ((int) matrix[i][0] != 32) {
			tmp = (char) 'O';
			matrix[i][0] = tmp;
			return (tmp);
		    }
		}
	    }
	    i++;
	}
	i = 0;
	while (i < 3) {
	    if ((int) matrix[0][i] == (int) matrix[1][i]) {
		if ((int) matrix[0][i] == (int) matrix[2][i]) {
		    if ((int) matrix[0][i] != 32) {
			tmp___0 = (char) 'O';
			matrix[0][i] = tmp___0;
			return (tmp___0);
		    }
		}
	    }
	    i++;
	}
	/*if ((int) matrix[0][0] == (int) matrix[1][1]) {
	    if ((int) matrix[1][1] == (int) matrix[2][2]) {
		if ((int) matrix[0][0] != 32) {
		    matrix[0][0] = (char) 'O';
		    return (matrix[0][0]);
		}
	    }
	}
	if ((int) matrix[0][2] == (int) matrix[1][1]) {
	    if ((int) matrix[1][1] == (int) matrix[2][0]) {
		if ((int) matrix[0][2] != 32) {
		    matrix[0][2] = (char) 'O';
		    return (matrix[0][2]);
		}
	    }
	}*/
	return ((char) ' ');
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
