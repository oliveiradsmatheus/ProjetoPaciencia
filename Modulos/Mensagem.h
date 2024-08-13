void EscrMsg (char mensagem[])
{
	gotoxy(4,33);
	printf("%s",mensagem);
}

void LimpaMsg (void)
{
	gotoxy(3,33);
	printf("                                                                            ");
}

void MostraPontos(int Pontos, int HighScore)
{
	gotoxy(34,3);
	printf("SCORE: %d      ",Pontos);
	gotoxy(34,4);
	printf("HIGHSCORE: %d  ",HighScore);
}

void Instrucao(void)
{
	Fundo(3);
	textcolor(15);
	gotoxy(28,3);
	printf(" # # # SOBRE O JOGO # # #");
	gotoxy(36,6);
	printf("OBJETIVO");
	gotoxy(16,8);
	printf("CRIAR QUATRO PILHAS DE CARTAS, UMA PARA CADA NAIPE");
	gotoxy(13,9);
	printf("AS PILHAS SAO MONTADAS EM ORDEM CRESCENTE, DO AS AO REI");
	gotoxy(24,12);
	printf("PARA COMBINAR AS CARTAS DA MESA:");
	gotoxy(22,13);
	printf("DEVE SE EMPILHAR EM ORDEM DESCRECENTE");
	gotoxy(16,14);
	printf("DEVE SE EMPILHAR EM UMA CARTA COM COR DIFERENTE");
	gotoxy(11,17);
	printf("UTILIZE AS CARTAS DA RESERVA PARA NAO FICAR SEM COMBINACOES");
	gotoxy(18,18);
	printf("SE VOCE UTILIZAR TODAS AS CARTAS DE UMA PILHA");
	gotoxy(22,19);
	printf("PODERA COLOCAR UM REI NO ESPACO VAZIO");
	gotoxy(18,22);
	printf("UTILIZE AS [SETAS] PARA MOVER ENTRE AS PILHAS");
	gotoxy(16,23);
	printf("UTILIZE [ENTER] PARA SELECIONAR A PILHA E A CARTA");
	gotoxy(14,24);
	printf("EM SEGUIDA UTILIZE [ENTER] PARA SELECIONAR O DESTINO");
	gotoxy(9,25);
	printf("VOCE PODE PRESSIONAR [ESPACO] PARA ATUALIZAR O TOPO DA RESERVA");
	gotoxy(21,29);
	printf("PRESSIONE QUALQUER TECLA PARA RETORNAR");
}

void MsgFim (void)
{
	Fundo(0);
	gotoxy(19,7);
	printf("TRABALHO BIMESTRAL - ESTRUTURA DE DADOS I");
	gotoxy(19,10);
	printf("JOGO PACIENCIA - ESTRUTURAS DO TIPO PILHA");
	gotoxy(20,13);
	printf("262319152 - FELIPE OLIVEIRA DE CARVALHO");
	gotoxy(21,14);
	printf("262319446 - MATHEUS OLIVEIRA DA SILVA");
	gotoxy(22,15);
	printf("262318806 - VICTOR TERRENGUI BRANDI");
	gotoxy(24,32);
	printf("PROF. DR. LEANDRO LUIZ DE ALMEIDA");
}
