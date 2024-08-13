#define MAXPILHA 676

struct TpCarta
{
	int Num;
	char Naipe;
	bool Ativo;
};

struct TpPilhaM2
{
	int TOPO[MAXPILHA],BASE[MAXPILHA];
	TpCarta PILHA[MAXPILHA];
};

void Inicializar(TpPilhaM2 &PM,int Qtde)
{
	int QtdeElem, i;
	
	QtdeElem = MAXPILHA/Qtde;
	
	for(i=0;i<=Qtde;i++) // Foi usado o <= pois usaremos a quantidade de elementos para determinar uma quarta base, que servirá apenas para delimitar onde será o topo da terceira base!
	{
		PM.BASE[i] = (i*QtdeElem); // A base é o início da Pilha Múltipla. É a posição onde se inicia a pilha!
		PM.TOPO[i] = PM.BASE[i]-1; // Aqui é onde deve-se INICIAR o topo!
	}
}

void PUSH(TpPilhaM2 &PM, TpCarta Carta, int NP)
{
	PM.PILHA[++PM.TOPO[NP]] = Carta;
}

TpCarta POP(TpPilhaM2 &PM, int NP)
{
	return PM.PILHA[PM.TOPO[NP]--];
}

TpCarta ElementoTopo(TpPilhaM2 PM, int NP)
{
	return PM.PILHA[PM.TOPO[NP]];
}

int PmVazia(TpPilhaM2 PM, int NP)
{
	return (PM.TOPO[NP]+1 == PM.BASE[NP]);
}

int PmCheia(TpPilhaM2 PM, int NP)
{
	return (PM.BASE[NP+1] == PM.TOPO[NP]+1);
}

void Exibir(TpPilhaM2 PM,int NP)
{
	TpCarta Carta;
	
	while(!PmVazia(PM,NP))
	{
		Carta = POP(PM,NP);
		if(Carta.Ativo == 1)
			printf("\nCarta: %d%c\nAtivo",Carta.Num,Carta.Naipe);
		else
			printf("\nCarta: %d%c\nInativo",Carta.Num,Carta.Naipe);
	}
}
