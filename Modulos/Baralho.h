void Embaralha (TpPilhaM2 &P)
{
	TpCarta Baralho[52];
	int aleat, Qtde=0, i;
	
	srand(time(NULL)); // Esta função inicializa uma semente de um gerador de números com base no horário atual (Necessário #include <time.h>)
	
	// 12 Cartas de Copas
	
	Baralho[Qtde].Num = 'A';
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 2;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 3;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 4;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 5;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 6;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 7;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 8;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 9;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 10;
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 'J';
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 'Q';
	Baralho[Qtde++].Naipe = 3;
	Baralho[Qtde].Num = 'K';
	Baralho[Qtde++].Naipe = 3;
	
	// 12 Cartas de Ouro
	
	Baralho[Qtde].Num = 'A';
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 2;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 3;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 4;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 5;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 6;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 7;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 8;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 9;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 10;
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 'J';
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 'Q';
	Baralho[Qtde++].Naipe = 4;
	Baralho[Qtde].Num = 'K';
	Baralho[Qtde++].Naipe = 4;
	
	// 12 Cartas de Paus
	
	Baralho[Qtde].Num = 'A';
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 2;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 3;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 4;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 5;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 6;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 7;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 8;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 9;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 10;
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 'J';
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 'Q';
	Baralho[Qtde++].Naipe = 5;
	Baralho[Qtde].Num = 'K';
	Baralho[Qtde++].Naipe = 5;
	
	//12 Cartas de Espadas
	
	Baralho[Qtde].Num = 'A';
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 2;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 3;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 4;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 5;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 6;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 7;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 8;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 9;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 10;
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 'J';
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 'Q';
	Baralho[Qtde++].Naipe = 6;
	Baralho[Qtde].Num = 'K';
	Baralho[Qtde++].Naipe = 6;
	
	while(Qtde>0)
	{
		aleat = rand() % Qtde; /* A função rand() % QtdeCartas gera um número aleatório de zero até o número contido na variável QtdeCartas
		-1. Como são 52 cartas, vai de 0 a 51, que é a última posição necessária, não necessitando incremento para comparação.*/
		Baralho[aleat].Ativo = 0;
		PUSH(P,Baralho[aleat],0);
		for(i=aleat;i<Qtde;i++)
		{
			Baralho[i] = Baralho[i+1];
		}
		Qtde--;
	}
}

// Função para distribuir as cartas do Baralho nos diferentes montes do Jogo.
void Distribui (TpPilhaM2 &Baralho, TpPilhaM2 &Pilha, int NumPilha, int Qtde)
{
	TpCarta Carta;
	int i=0;
	
	while(!PmVazia(Baralho,0) && i<Qtde)
	{
		Carta = POP(Baralho,0);
		if(Qtde-i == 1)
			Carta.Ativo = 1;
		PUSH(Pilha,Carta,NumPilha);
		i++;
	}
}

// Contador que informa a quantidade de Cartas ativadas na pilha.
int ContAtivo (TpPilhaM2 P,int NumPilha)
{
	TpCarta Carta;
	int Qtde=0;
	
	while(!PmVazia(P,NumPilha))
	{
		Carta = POP(P,NumPilha);
		if(Carta.Ativo == 1)
			Qtde++;
	}
	
	return Qtde; 
}

//Contador que informa a quantidade total de Cartas na pilha.
int ContPilha (TpPilhaM2 P, int NumPilha)
{
	TpCarta Carta;
	int Qtde=0;
	
	while(!PmVazia(P,NumPilha))
	{
		Carta = POP(P,NumPilha);
		Qtde++;	
	}
	
	return Qtde;
}

// Função para Exibir as Pilhas no Jogo.
void ExibePilha (TpPilhaM2 P, int NumPilha)
{
	TpCarta Carta;
	int L, C=11, Pos;
	
	L = 7 + ContPilha(P,NumPilha);
	textbackground(15);
	
	// Exibe a primeira Carta por completa, caso exista uma Carta.
	if(!PmVazia(P,NumPilha))
	{
		gotoxy((C*NumPilha+5)-1,L);
		Carta = POP(P,NumPilha);
		switch(Carta.Naipe)
		{
			case 3:
				textcolor(4);
				break;
			case 4:
				textcolor(4);
				break;
			case 5:
				textcolor(0);
				break;
			case 6:
				textcolor(0);
		}
		if(Carta.Num > 10)
			printf("%c    ",Carta.Num);
		else
		{
			if(Carta.Num == 10)
				printf("%d   ",Carta.Num);
			else
				printf("%d    ",Carta.Num);
		}
		L++;
		gotoxy((C*NumPilha+5)-1,L);
		printf("  %c  ",Carta.Naipe);
		L++;
		gotoxy((C*NumPilha+5)-1,L);
		if(Carta.Num > 10)
			printf("    %c",Carta.Num);
		else
		{
			if(Carta.Num == 10)
				printf("   %d",Carta.Num);
			else
				printf("    %d",Carta.Num);
		}
		L-=2;
	}
		
	L = 7 + ContPilha(P,NumPilha);
	textbackground(7);
	
	// Exibe o restante da Pilha de modo compacto, Cartas ativas ou não.
	while(!PmVazia(P,NumPilha))
	{
		gotoxy((C*NumPilha+5)-1,L);
		Carta = POP(P,NumPilha);
		if(Carta.Ativo==1)
		{
			switch(Carta.Naipe)
			{
				case 3:
					textcolor(4);
					break;
				case 4:
					textcolor(4);
					break;
				case 5:
					textcolor(0);
					break;
				case 6:
					textcolor(0);
			}
			if(Carta.Num>10)
				printf("[%c %c]",Carta.Num,Carta.Naipe);
			else
			{
				if(Carta.Num == 10)
					printf("[%d%c]",Carta.Num,Carta.Naipe);
				else
					printf("[%d %c]",Carta.Num,Carta.Naipe);
			}
		}
		else
		{
			textbackground(4);
			textcolor(0);
			printf("[ %c ]",4);
		}
		L--;
	}
	textbackground(2);
	textcolor(0);
}

void ExibeNaipe (TpPilhaM2 P,int NumPilha)
{
	TpCarta Carta;
	int L=3, C=55,i=0;
	
	textbackground(15);
	
	switch(NumPilha)
	{
			break;
		case 10:
			C = 61;
			break;
		case 11:
			C = 67;
			break;
		case 12:
			C = 73;
	}
	
	if(PmVazia(P,NumPilha))
	{
		textbackground(10);
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
		C+=6;
		i++;
		L-=2;
	}
	else
	{
		Carta = POP(P,NumPilha);
		
		switch(Carta.Naipe)
		{
			case 3:
				textcolor(4);
				break;
			case 4:
				textcolor(4);
				break;
			case 5:
				textcolor(0);
				break;
			case 6:
				textcolor(0);
		}
		gotoxy(C,L);
		if(Carta.Num > 10)
			printf("%c    ",Carta.Num);
		else
		{
			if(Carta.Num == 10)
				printf("%d   ",Carta.Num);
			else
				printf("%d    ",Carta.Num);
		}
		L++;
		gotoxy(C,L);
		printf("  %c  ",Carta.Naipe);
		L++;
		gotoxy(C,L);
		if(Carta.Num > 10)
			printf("    %c",Carta.Num);
		else
		{
			if(Carta.Num == 10)
				printf("   %d",Carta.Num);
			else
				printf("    %d",Carta.Num);
		}
		/*if(Carta.Num>10)
			printf("[%c-%c]",Carta.Num,Carta.Naipe);
		else
			printf("[%d-%c]",Carta.Num,Carta.Naipe);*/
	}
	textcolor(15);
	textbackground(2);
}

void FundoDesc(void)
{
	int L=3, C=10, i=0;
	
	textbackground(10);
	while(i<3)
	{
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
		C+=6;
		i++;
		L-=2;
	}
}

void ExibeDescarte(TpPilhaM2 P)
{
	TpPilhaM2 PAux;
	TpCarta Carta;
	int L=3, C=10, i=0, Qtde, Max=3;
	
	Inicializar(PAux,1);
	
	textbackground(4);
	textcolor(0);
	
	Qtde = ContPilha(P,8);
	
	if(Qtde<3)
		Max = Qtde;
		
	while(i<Max)
	{
		Carta = POP(P,8);
		PUSH(PAux,Carta,0);
		i++;
	}
	
	// Se não estiver vazio, mostra o monte de Cartas, do contrário mostra um fundo vazio.
	i=0;
	while(!PmVazia(PAux,0))
	{
		textbackground(15);
		Carta = POP(PAux,0);
		
		if(C>27)
			C=10;
		gotoxy(C,L);
		
		// Altera a Cor da Carta
		switch(Carta.Naipe)
		{
			case 3:
				textcolor(4);
				break;
			case 4:
				textcolor(4);
				break;
			case 5:
				textcolor(0);
				break;
			case 6:
				textcolor(0);
		}
		
		if(Carta.Num > 10)
		{
			printf("%c    ",Carta.Num);
			L++;
			gotoxy(C,L);
			printf("  %c  ",Carta.Naipe);
			L++;
			gotoxy(C,L);
			printf("    %c",Carta.Num);
		}
		else
		{
			if(Carta.Num == 10)
			{
				printf("%d   ",Carta.Num);
				L++;
				gotoxy(C,L);
				printf("  %c  ",Carta.Naipe);
				L++;
				gotoxy(C,L);
				printf("   %d",Carta.Num);
			}
			else
			{
				printf("%d    ",Carta.Num);
				L++;
				gotoxy(C,L);
				printf("  %c  ",Carta.Naipe);
				L++;
				gotoxy(C,L);
				printf("    %d",Carta.Num);
			}
		}
		i++;
		C+=6;
		L-=2;
	}
	
	textcolor(15);
	textbackground(2);
}

void ExibeMonte (TpPilhaM2 P)
{
	int L=3, C=4;
	
	textbackground(4);
	textcolor(0);
	
	// Se não estiver vazio, mostra o monte de Cartas, do contrário mostra um fundo vazio.
	if(!PmVazia(P,7))
	{
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("  %c  ",4);
		L++;
		gotoxy(C,L);
		printf("     ");
	}
	else
	{
		textbackground(10);
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
		L++;
		gotoxy(C,L);
		printf("     ");
	}
	textcolor(15);
	textbackground(2);
}

void AtualizaMonte (TpPilhaM2 &Monte, int &Pontos)
{
	if(!PmVazia(Monte,7))
		PUSH(Monte,POP(Monte,7),8);
	else
	{
		while(!PmVazia(Monte,8))
			PUSH(Monte,POP(Monte,8),7);
		if(!PmVazia(Monte,7) || !PmVazia(Monte,8))
		{
			Pontos -= 100;
			if(Pontos<0)
				Pontos = 0;
		}
	}
}

void AtivaMonte (TpPilhaM2 &Monte, int NM)
{
	TpPilhaM2 Aux;
	
	Inicializar(Aux,1);
	
	while(!PmVazia(Monte,NM))
		PUSH(Aux,POP(Monte,NM),0);
	while(!PmVazia(Aux,0))
	{
		PUSH(Monte,POP(Aux,0),NM);
		Monte.PILHA[Monte.TOPO[NM]].Ativo = 1;
	}
}
