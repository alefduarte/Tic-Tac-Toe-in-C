
int termino = 0, jogada = 0;
char ganhador = ' ';
void teste();
void JogoPrincipal();
void numbers() {
    printf("\t\t  1 | 2 | 3 \n");
    printf("\t\t-------------\n");
    printf("\t\t  4 | 5 | 6 \n");
    printf("\t\t-------------\n");
    printf("\t\t  7 | 8 | 9 \n");
}

void limpar() {
#ifdef WINDOWS
    system("cls");
#else
    system("clear");
#endif
}

void zera(char matrix[][3]) {
    int i = 0, j = 0;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            matrix[i][j] = ' ';
}

void print(char matrix[][3]) {
    printf("\n\t  %c  |  %c  |  %c  \n", matrix[0][0], matrix[0][1], matrix[0][2]);
    printf("\t-----------------\n");
    printf("\t  %c  |  %c  |  %c  \n", matrix[1][0], matrix[1][1], matrix[1][2]);
    printf("\t-----------------\n");
    printf("\t  %c  |  %c  |  %c  \n", matrix[2][0], matrix[2][1], matrix[2][2]);
}

void movimentoAI(char matrix[][3]) {
    int cond = 0;
    if (cond == 0) {
        if (jogada == 0) {
            if ((matrix[0][0] == ' ')&&(matrix[0][2] == ' ')&&(matrix[2][0] == ' ')&&(matrix[2][2] == ' ')) {
                if (matrix[1][1] == ' ') {
                    matrix[0][0] = 'O';
                    cond = 1;
                } else {
                    matrix[1][0] = 'O';
                    cond = 1;
                }
            } else {
                matrix[1][1] = 'O';
                cond = 1;
            }

        } else {

            if ((matrix[0][0] == 'O')&&(matrix[0][2] == 'O')&&(matrix[0][1] == ' ')) {
                matrix[0][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'O')&&(matrix[0][1] == 'O')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'O')&&(matrix[0][1] == 'O')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'O')&&(matrix[2][0] == 'O')&&(matrix[1][0] == ' ')) {
                matrix[1][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'O')&&(matrix[1][0] == 'O')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[1][0] == 'O')&&(matrix[2][0] == 'O')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'O')&&(matrix[2][2] == 'O')&&(matrix[2][1] == ' ')) {
                matrix[2][1] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'O')&&(matrix[2][1] == 'O')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = 'O';
                cond = 1;
            } else
                if ((matrix[2][1] == 'O')&&(matrix[2][2] == 'O')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][2] == 'O')&&(matrix[0][2] == 'O')&&(matrix[1][2] == ' ')) {
                matrix[1][2] = 'O';
                cond = 1;
            } else
                if ((matrix[2][2] == 'O')&&(matrix[1][2] == 'O')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else
                if ((matrix[1][2] == 'O')&&(matrix[0][2] == 'O')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = 'O';
                cond = 1;
            } else
                if ((matrix[0][1] == 'O')&&(matrix[2][1] == 'O')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][1] == 'O')&&(matrix[1][1] == 'O')&&(matrix[2][1] == ' ')) {
                matrix[2][1] = 'O';
                cond = 1;
            } else
                if ((matrix[1][1] == 'O')&&(matrix[2][1] == 'O')&&(matrix[0][1] == ' ')) {
                matrix[0][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'X')&&(matrix[2][2] == 'X')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'O')&&(matrix[1][1] == 'O')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = 'O';
                cond = 1;
            } else
                if ((matrix[1][1] == 'O')&&(matrix[2][2] == 'O')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'O')&&(matrix[2][0] == 'O')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'O')&&(matrix[1][1] == 'O')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'O')&&(matrix[1][1] == 'O')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else
                //para atrapalhar o oponente a ganhar
                if ((matrix[0][0] == 'X')&&(matrix[0][2] == 'X')&&(matrix[0][1] == ' ')) {
                matrix[0][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'X')&&(matrix[0][1] == 'X')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'X')&&(matrix[0][1] == 'X')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'X')&&(matrix[2][0] == 'X')&&(matrix[1][0] == ' ')) {
                matrix[1][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'X')&&(matrix[1][0] == 'X')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[1][0] == 'X')&&(matrix[2][0] == 'X')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'X')&&(matrix[2][2] == 'X')&&(matrix[2][1] == ' ')) {
                matrix[2][1] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'X')&&(matrix[2][1] == 'X')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = 'O';
                cond = 1;
            } else
                if ((matrix[2][1] == 'X')&&(matrix[2][2] == 'X')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][2] == 'X')&&(matrix[0][2] == 'X')&&(matrix[1][2] == ' ')) {
                matrix[1][2] = 'O';
                cond = 1;
            } else
                if ((matrix[2][2] == 'X')&&(matrix[1][2] == 'X')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else
                if ((matrix[1][2] == 'X')&&(matrix[0][2] == 'X')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = 'O';
                cond = 1;
            } else
                if ((matrix[0][1] == 'X')&&(matrix[2][1] == 'X')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][1] == 'X')&&(matrix[1][1] == 'X')&&(matrix[2][1] == ' ')) {
                matrix[2][1] = 'O';
                cond = 1;
            } else
                if ((matrix[1][1] == 'X')&&(matrix[2][1] == 'X')&&(matrix[0][1] == ' ')) {
                matrix[0][1] = 'O';
                cond = 1;
            } else


                if ((matrix[0][0] == 'X')&&(matrix[2][2] == 'X')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][0] == 'X')&&(matrix[1][1] == 'X')&&(matrix[2][2] == ' ')) {
                matrix[2][2] = '0';
                cond = 1;
            } else
                if ((matrix[1][1] == 'X')&&(matrix[2][2] == 'X')&&(matrix[0][0] == ' ')) {
                matrix[0][0] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'X')&&(matrix[2][0] == 'X')&&(matrix[1][1] == ' ')) {
                matrix[1][1] = 'O';
                cond = 1;
            } else
                if ((matrix[0][2] == 'X')&&(matrix[1][1] == 'X')&&(matrix[2][0] == ' ')) {
                matrix[2][0] = 'O';
                cond = 1;
            } else
                if ((matrix[2][0] == 'X')&&(matrix[1][1] == 'X')&&(matrix[0][2] == ' ')) {
                matrix[0][2] = 'O';
                cond = 1;
            } else {
                int x = 0, y = 0;
                for (x = 0; x < 3; x++)
                    for (y = 0; y < 3; y++) {
                        if ((cond == 0)&&(matrix[x][y] == ' ')) {

                            matrix[x][y] = 'O';
                            cond = 1;
                        }

                    }
            }
        }
    }
}

void movimentoEasy(char matrix[][3]) {
    int cond = 0, i = 0, j = 0;
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            if ((cond == 0)&&(matrix[i][j] == ' ')) {
                matrix[i][j] = 'O';
                cond = 1;
            }
        }
    }
}

void movimentoNormal(char matrix[][3]) {
    int p = 0;
    p = rand() % 10;
    if (p <= 3) {
        if ((matrix[0][p - 1] == ' ')) {
            matrix[0][p - 1] = 'O';
        } else {
            movimentoNormal(matrix);
        }

    } else if (p > 3 && p <= 6) {
        p -= 3;
        if ((matrix[1][p - 1] == ' ')) {
            matrix[1][p - 1] = 'O';
        } else {
            movimentoNormal(matrix);
        }
    } else if (p > 6 && p <= 9) {
        p -= 6;
        if ((matrix[2][p - 1] == ' ')) {
            matrix[2][p - 1] = 'O';
        } else {
            movimentoNormal(matrix);
        }
    }
}

void jogador(char matrix[][3]) {
    int p;
    printf("\nEscolha um número correspondente à posição desejada\n");
    while (p < 1 || p > 9) {
        setbuf(stdin, NULL);
        scanf("%d", &p);
        if (p < 1 || p > 9)
            printf("Escolha um número entre 1 e 9\n");
    }
    if (p <= 3) {
        if ((matrix[0][p - 1] == ' ')) {
            matrix[0][p - 1] = 'X';
        } else {
            printf("\n posição invalida");

            jogador(matrix);
        }

    } else if (p > 3 && p <= 6) {
        p -= 3;
        if ((matrix[1][p - 1] == ' ')) {
            matrix[1][p - 1] = 'X';
        } else {
            printf("\n posição invalida");
            jogador(matrix);
        }
    } else if (p > 6 && p <= 9) {
        p -= 6;
        if ((matrix[2][p - 1] == ' ')) {
            matrix[2][p - 1] = 'X';
        } else {
            printf("\n posição invalida");
            jogador(matrix);
        }
    }

}

void segundoJogador(char matrix[][3]) {
    int p;
    printf("\nEscolha um número correspondente à posição desejada\n");
    while (p < 1 || p > 9) {
        scanf("%d", &p);
        if (p < 1 || p > 9)
            printf("Escolha um número entre 1 e 9\n");
    }
    if (p <= 3) {
        if ((matrix[0][p - 1] == ' ')) {
            matrix[0][p - 1] = 'O';
        } else {
            printf("\n posição invalida");

            segundoJogador(matrix);
        }

    } else if (p > 3 && p <= 6) {
        p -= 3;
        if ((matrix[1][p - 1] == ' ')) {
            matrix[1][p - 1] = 'O';
        } else {
            printf("\n posição invalida");
            segundoJogador(matrix);
        }
    } else if (p > 6 && p <= 9) {
        p -= 6;
        if ((matrix[2][p - 1] == ' ')) {
            matrix[2][p - 1] = 'O';
        } else {
            printf("\n posição invalida");
            segundoJogador(matrix);
        }
    }

}

void menu() {
    printf("\n\t\tJOGO DA VELHA\t\t\t      Alef Duarte\n\n");
    printf("\t\t+-----------------------------------------------+\n");
    printf("\t\t|  Escolha uma opção:                           |\n");
    printf("\t\t|\t1. Jogador Vs Jogador.                  |\n");
    printf("\t\t|\t2. Jogador Vs Maquina (modo facil).     |\n");
    printf("\t\t|\t3. Jogador Vs Maquina (modo medio).     |\n");
    printf("\t\t|\t4. Jogador Vs Maquina (modo difícil).   |\n");
    printf("\t\t|\t5. Sair.                                |\n");
    printf("\t\t+-----------------------------------------------+\n");
    printf("\t\t\tOpção: ");
}

void jogo1(char m[][3]) {
    if (jogada == 0) zera(m);
    printf("Jogador 1\n");
    jogador(m);
    print(m);
    teste(m);
    printf("Jogador 2\n");
    segundoJogador(m);
    print(m);
    teste(m);

}

void jogo2(char m[][3]) {
    char aux;
    if (jogada == 0) zera(m);
    printf("Jogador 1\n");
    jogador(m);
    print(m);
    teste(m);
    printf("Maquina\nAperte enter para continuar");
    setbuf(stdin, NULL);
    aux = getchar();
    movimentoEasy(m);
    print(m);
    teste(m);

}

void jogo3(char m[][3]) {
    char aux;
    if (jogada == 0) zera(m);
    printf("Jogador 1\n");
    jogador(m);
    print(m);
    teste(m);
    printf("Maquina\nAperte enter para continuar");
    setbuf(stdin, NULL);
    aux = getchar();
    movimentoNormal(m);
    print(m);
    teste(m);

}

void jogo4(char m[][3]) {
    char aux;
    if (jogada == 0) zera(m);
    printf("Jogador 1\n");
    jogador(m);
    print(m);
    teste(m);
    printf("Maquina\nAperte enter para continuar");
    setbuf(stdin, NULL);
    aux = getchar();
    movimentoAI(m);
    print(m);
    teste(m);

}

void fim(char matrix[][3]) {

    limpar();
    print(matrix);
    printf("O jogador %c venceu", ganhador);
    char denovo;
    printf("\nDigite s para jogar outra vez\n");
    setbuf(stdin, NULL);
    scanf("%c", &denovo);
    setbuf(stdin, NULL);
    if (denovo == 's') {
        ganhador = ' ';
        termino = 0;
        jogada = 0;
        limpar();
        JogoPrincipal(matrix);
    }

}

void teste(char matrix[][3]) {

    //teste horizontal
    if ((matrix[0][0] == matrix[0][1])&&(matrix[0][1] == matrix[0][2])&&(matrix[0][0] != ' ')) {
        termino = 1;
        ganhador = matrix[0][0];
        fim(matrix);
    }
    if ((matrix[1][0] == matrix[1][1])&&(matrix[1][1] == matrix[1][2])&&(matrix[1][0] != ' ')) {
        termino = 1;
        ganhador = matrix[1][0];
        fim(matrix);
    }
    if ((matrix[2][0] == matrix[2][1])&&(matrix[2][1] == matrix[2][2])&&(matrix[2][0] != ' ')) {
        termino = 1;
        ganhador = matrix[2][0];
        fim(matrix);
    }

    //teste vertical

    if ((matrix[0][0] == matrix[1][0])&&(matrix[1][0] == matrix[2][0])&&(matrix[0][0] != ' ')) {
        termino = 1;
        ganhador = matrix[0][0];
        fim(matrix);
    }
    if ((matrix[0][1] == matrix[1][1])&&(matrix[1][1] == matrix[2][1])&&(matrix[0][1] != ' ')) {
        termino = 1;
        ganhador = matrix[0][1];
        fim(matrix);
    }
    if ((matrix[0][2] == matrix[1][2])&&(matrix[1][2] == matrix[2][2])&&(matrix[0][2] != ' ')) {
        termino = 1;
        ganhador = matrix[0][2];
        fim(matrix);
    }

    //teste na digonal

    if ((matrix[0][0] == matrix[1][1])&&(matrix[1][1] == matrix[2][2])&&(matrix[0][0] != ' ')) {
        termino = 1;
        ganhador = matrix[0][0];
        fim(matrix);
    }
    if ((matrix[0][2] == matrix[1][1])&&(matrix[1][1] == matrix[2][0])&&(matrix[0][2] != ' ')) {
        termino = 1;
        ganhador = matrix[0][2];
        fim(matrix);
    }
    // teste se deu velha
    if ((jogada == 4)&&(ganhador == ' ')) {
        limpar();
        printf("\n\nVELHA \nDigite s para jogar de novo ");
        char denovo;
        setbuf(stdin, NULL);
        scanf("%c", &denovo);
        if (denovo == 's') {
            ganhador = ' ';
            termino = 0;
            jogada = 0;
            limpar();
            JogoPrincipal(matrix);
        }
    }

}

void JogoPrincipal(char m[][3]) {
    int opt = 0;
    menu();
    while (opt > 5 || opt < 1) {
        scanf("%d", &opt);
        if (opt > 5 || opt < 1)
            printf("\nOpção inválida\nEscolha outra opação\n");
    }
    switch (opt) {
        case 1:
            numbers();
            while ((jogada <= 9)&&(termino != 1)) {

                jogo1(m);
                jogada++;
            }
            break;
        case 2:
            numbers();
            while ((jogada <= 9)&&(termino != 1)) {

                jogo2(m);
                jogada++;
            }
            break;
        case 3:
            numbers();
            while ((jogada <= 9)&&(termino != 1)) {

                jogo3(m);
                jogada++;
            }
            break;
        case 4:
            numbers();
            while ((jogada <= 9)&&(termino != 1)) {

                jogo4(m);
                jogada++;
            }
            break;
        case 5:
            printf("\nSair\n");
            break;
        default:
            break;
    }
    jogada = 0;
}

