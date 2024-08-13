#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <windows.h>

#include "Modulos\\TADPilhaM2.h"
#include "Modulos\\Moldura.h"
#include "Modulos\\Baralho.h"
#include "Modulos\\Mensagem.h"

struct TpPonto
{
	int Score;
	char Nome[10];
};

void InsercaoDireta(FILE *Ptr)
{
	TpPonto RA,RB;
	int Qtde;
	
	fseek(Ptr,0,2);
	Qtde = (ftell(Ptr)/sizeof(TpPonto))-1;
	
	fseek(Ptr,Qtde*sizeof(TpPonto),0);
	fread(&RA,sizeof(TpPonto),1,Ptr);
	
	fseek(Ptr,(Qtde-1)*sizeof(TpPonto),0);
	fread(&RB,sizeof(TpPonto),1,Ptr);
	
	while(Qtde>0 && RA.Score>RB.Score)
	{
		fseek(Ptr,(Qtde-1)*sizeof(TpPonto),0);
		fwrite(&RA,sizeof(TpPonto),1,Ptr);
		
		fseek(Ptr,Qtde*sizeof(TpPonto),0);
		fwrite(&RB,sizeof(TpPonto),1,Ptr);
		
		Qtde--;
		
		fseek(Ptr,Qtde*sizeof(TpPonto),0);
		fread(&RA,sizeof(TpPonto),1,Ptr);
		
		fseek(Ptr,(Qtde-1)*sizeof(TpPonto),0);
		fread(&RB,sizeof(TpPonto),1,Ptr);
	}
}

bool VerificaTroca(TpPilhaM2 Monte, int NDest, TpCarta Origem,TpCarta Destino)
{
	if(PmVazia(Monte,NDest) && Origem.Num == 'K')
		return TRUE;
	else
	{
		if(((Origem.Naipe == 3 || Origem.Naipe == 4) && (Destino.Naipe == 5 || Destino.Naipe == 6)) || ((Origem.Naipe == 5 || Origem.Naipe == 6) && (Destino.Naipe == 3 || Destino.Naipe == 4)))
		{
			if(Origem.Num == 'Q' && Destino.Num == 'K')
				return TRUE;
			else
			{
				if(Origem.Num == 'J' && Destino.Num == 'Q')
					return TRUE;
				else
				{
					if(Origem.Num == 10 && Destino.Num == 'J')
						return TRUE;
					else
					{
						if(Origem.Num == 9 && Destino.Num == 10)
							return TRUE;
						else
						{
							if(Origem.Num == 8 && Destino.Num == 9)
								return TRUE;
							else
							{
								if(Origem.Num == 7 && Destino.Num == 8)
									return TRUE;
								else
								{
									if(Origem.Num == 6 && Destino.Num == 7)
										return TRUE;
									else
									{
										if(Origem.Num == 5 && Destino.Num == 6)
											return TRUE;
										else
										{
											if(Origem.Num == 4 && Destino.Num == 5)
												return TRUE;
											else
											{
												if(Origem.Num == 3 && Destino.Num == 4)
													return TRUE;
												else
												{
													if(Origem.Num == 2 && Destino.Num == 3)
														return TRUE;
													else
													{
														if(Origem.Num == 'A' && Destino.Num == 2)
															return TRUE;
													}
												}
											}
										}
									}
								}
							}						
						}
					}
				}
			}
		}
	}
	LimpaMsg();
	EscrMsg("NAO E POSSIVEL REALIZAR A JOGADA!");
	getch();
	return FALSE;
}

bool VerificaTrocaCresc(TpPilhaM2 Monte,int NDest, TpCarta Origem, TpCarta Destino)
{
	if(PmVazia(Monte,NDest) && Origem.Num == 'A')
		return TRUE;
	else
	{
		if(Origem.Naipe == Destino.Naipe)
		{
			if(Origem.Num == 2 && Destino.Num == 'A')
				return TRUE;
			else
			{
				if(Origem.Num == 3 && Destino.Num == 2)
					return TRUE;
				else
				{
					if(Origem.Num == 4 && Destino.Num == 3)
						return TRUE;
					else
					{
						if(Origem.Num == 5 && Destino.Num == 4)
							return TRUE;
						else
						{
							if(Origem.Num == 6 && Destino.Num == 5)
								return TRUE;
							else
							{
								if(Origem.Num == 7 && Destino.Num == 6)
									return TRUE;
								else
								{
									if(Origem.Num == 8 && Destino.Num == 7)
										return TRUE;
									else
									{
										if(Origem.Num == 9 && Destino.Num == 8)
											return TRUE;
										else
										{
											if(Origem.Num == 10 && Destino.Num == 9)
												return TRUE;
											else
											{
												if(Origem.Num == 'J' && Destino.Num == 10)
													return TRUE;
												else
												{
													if(Origem.Num == 'Q' && Destino.Num == 'J')
														return TRUE;
													else
													{
														if(Origem.Num == 'K' && Destino.Num == 'Q')
															return TRUE;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	LimpaMsg();
	EscrMsg("NAO E POSSIVEL REALIZAR A JOGADA!");
	getch();
	return FALSE;
}

void TrocaPilhaCresc (TpPilhaM2 &Monte, int Origem, int Destino, int Qtde, int &Pontos)
{
	TpPilhaM2 MonteAux;
	
	Inicializar(MonteAux,1);
	
	while(!PmVazia(Monte,Origem) && Qtde>0)
	{
		PUSH(MonteAux,POP(Monte,Origem),0);
		Qtde--;
	}
	// Verifica se a troca é possível comparando os dois topos
	if(VerificaTrocaCresc(Monte,Destino,ElementoTopo(MonteAux,0),ElementoTopo(Monte,Destino)) == TRUE)
	{
		while(!PmVazia(MonteAux,0))
			PUSH(Monte,POP(MonteAux,0),Destino);
		if((Origem!=8 || !PmVazia(Monte,Origem)) && (Monte.PILHA[Monte.TOPO[Origem]].Ativo == 0 || Origem==8))
		{
			Monte.PILHA[Monte.TOPO[Origem]].Ativo = 1;
			Pontos += 10;
		}
	}
	// Se não for possível, devolve os elementos da Pilha Auxiliar para a pilha Original (Parâmetro)
	else
	{
		while(!PmVazia(MonteAux,0))
			PUSH(Monte,POP(MonteAux,0),Origem);
	}
}

void TrocaPilha (TpPilhaM2 &Monte, int Origem, int Destino, int Qtde, int &Pontos)
{
	TpPilhaM2 MonteAux;
	
	Inicializar(MonteAux,1);
	
	// Empilha as Cartas em uma Pilha Auxiliar
	while(!PmVazia(Monte,Origem) && Qtde>0)
	{
		PUSH(MonteAux,POP(Monte,Origem),0);
		Qtde--;
	}
	
	//Verifica se o Elemento a ser inserido é um K e se a Pilha está vazia
	if((ElementoTopo(Monte,Origem).Num == 'K') && (PmVazia(Monte,Destino)))
	{
		PUSH(Monte,POP(Monte,Origem),Destino);
		if(Origem>=9 && Origem<=12)
		{
			Pontos-=90;
			if(Pontos<0)
				Pontos = 0;
		}
		else
			if(Origem==8 || (!PmVazia(Monte,Origem)) && (Monte.PILHA[Monte.TOPO[Origem]].Ativo == 0))
			{
				Monte.PILHA[Monte.TOPO[Origem]].Ativo = 1;
				Pontos += 5;
			}
	}
	else
	{
		// Verifica se a troca é possível comparando os dois topos
		if(VerificaTroca(Monte,Destino,ElementoTopo(MonteAux,0),ElementoTopo(Monte,Destino)) == TRUE)
		{
			while(!PmVazia(MonteAux,0))
				PUSH(Monte,POP(MonteAux,0),Destino);
			if(Origem>=9 && Origem<=12)
			{
				Pontos-=90;
				if(Pontos<0)
					Pontos = 0;
			}
			else
				if(Origem==8 || (!PmVazia(Monte,Origem)) && (Monte.PILHA[Monte.TOPO[Origem]].Ativo == 0))
				{
					Monte.PILHA[Monte.TOPO[Origem]].Ativo = 1;
					Pontos += 5;
				}
		}
		// Se não for possível, devolve os elementos da Pilha Auxiliar para a pilha Original (Parâmetro)
		else
		{
			while(!PmVazia(MonteAux,0))
				PUSH(Monte,POP(MonteAux,0),Origem);
		}
	}
}

void SelDestino(TpPilhaM2 Monte, int Origem,int &Destino, int Qtde, int &Troca)
{
	TpCarta Carta;
	int C = 6, L = 20, Coluna=0;
	char Mov;
	
	LimpaMsg();
	EscrMsg("SELECIONE O DESTINO OU PRESSIONE [ESC] PARA CANCELAR");
	
	if(Origem == 0)
	{
		Destino = 1;
		C += 11;
		Coluna++;
	}
	
	do
	{
		L = ContPilha(Monte,Coluna) + 11;
		
		gotoxy(C,L);
		printf("%c",30);
		
		Mov = getch();
		
		gotoxy(C,L);
		printf(" ");
		
		switch(Mov)
		{
			case -32:
				Mov = getch();
				switch(Mov)
				{
					case 77:
						Coluna++;
						C+=11;
						if(Coluna>6)
							Coluna=0;
						if(C>72)
							C=6;
						if(Coluna == Origem)
						{
							if(Origem == 6)
							{
								Coluna = 0;
								C = 6;
							}
							else
							{
								Coluna++;
								C+=11;
							}
						}
						break;
					case 75:
						Coluna--;
						C-=11;
						
						if(Coluna<0)
							Coluna=6;
							
						if(C<6)
							C=72;
							
						if(Coluna == Origem)
						{
							if(Origem == 0)
							{
								Coluna = 6;
								C = 72;
							}
							else
							{
								Coluna--;
								C-=11;
							}
						}
						break;
					case 72:
						if(Qtde == 1)
						{
						C=57;
						L=7;
						
						Carta = ElementoTopo(Monte,Origem);
						
						switch(Carta.Naipe)
						{
							case 3:
								Coluna = 9;
								break;
							case 4:
								Coluna = 10;
								C += 6;
								break;
							case 5:
								Coluna = 11;
								C += 12;
								break;
							case 6:
								Coluna = 12;
								C +=18;
						}
						do
						{
							gotoxy(C,L);
							printf("%c",30);
							
							Mov = getch();
							
							gotoxy(C,L);
							printf(" ");
							
							switch(Mov)
							{
								case -32:
									Mov = getch();
									switch(Mov)
									{
										case 77:
											if(Origem==6)
											{
												Coluna = 5;
												C = 61;
											}
											else
											{
												Coluna = 6;
												C = 72;
											}
											L = 20;
											break;
										case 75:
											if(Origem==0)
											{
												Coluna = 1;
												C = 17;
											}
											else
											{
												Coluna = 0;
												C = 6;
											}
											L = 20;
											break;
										case 80:
											if(Origem==6)
											{
												Coluna = 5;
												C = 61;
											}
											else
											{
												Coluna = 6;
												C = 72;
											}
											L = 20;
											break;
									}
									break;
								case 13:
									L = 20;
									Troca = 2;
									Destino = Coluna;
									Mov = 27;
							}
						}while(L!=20);
						}
				}
				break;
			case 13:
				Troca = 1;
				Destino = Coluna;
				Mov = 27;
		}
	}while(Mov!=27);
}

int SelCarta (TpPilhaM2 Pilha, int NumPilha)
{
	int Qtde, QtdeA, C, L, QtdeCartas = 1;
	char Mov;
	
	LimpaMsg();
	EscrMsg("SELECIONE UMA CARTA");
	
	Qtde = ContPilha(Pilha,NumPilha);
	QtdeA = ContAtivo(Pilha,NumPilha);
	L = 7 + Qtde;
	C = NumPilha*11 + 2;
	
	do
	{
		gotoxy(C,L);
		printf("%c",16);
		
		Mov = getch();
		
		gotoxy(C,L);
		printf(" ");
		
		switch(Mov)
		{
			case -32:
				Mov = getch();
				switch(Mov)
				{
					case 80:
						L++;
						if(L > 7 + Qtde)
							L = 7 + Qtde;
						else
							QtdeCartas--;
						break;
					case 72:
						L--;
						if(L < (8+Qtde) - QtdeA)
							L = (8+Qtde) - QtdeA;
						else
							QtdeCartas++;
				}
				break;
			case 13:
				gotoxy(C,L);
				textcolor(4);
				printf("%c",16);
				textcolor(15);
				Mov = 27;
				break;
			case 27:
				Mov = 27;
				QtdeCartas = 0;
		}
	}while(Mov!=27);
	
	return QtdeCartas;
}
void SelPilha (TpPilhaM2 &Monte, int &Origem, int &Destino, int &Qtde, int &Troca, bool &Jogo, int &Pontos)
{
	int C=6, L=20, Coluna=0;
	char Mov;
	
	LimpaMsg();
	EscrMsg("SELECIONE UM MONTE");
	
	do
	{
		Qtde = -1;
		
		if(Coluna == 0)
			while(PmVazia(Monte,Coluna))
			{
				Coluna++;
				C+=11;
			}
		else
			if(Coluna == 6)
				while(PmVazia(Monte,Coluna))
				{
					Coluna--;
					C-=11;
				}
		
		L = ContPilha(Monte,Coluna) + 11;
		
		gotoxy(C,L);
		printf("%c",30);
		Mov = getch();
		
		gotoxy(C,L);
		printf(" ");
		
		switch(Mov)
		{
			case -32:
				Mov = getch();
				switch(Mov)
				{
					case 75:
						Coluna--;
						C-=11;
						while(PmVazia(Monte,Coluna))
						{
							Coluna--;
							C -= 11;
							if(Coluna<0)
							{
								Coluna = 6;
								C = 72;
							}
						}
						if(Coluna<0)
						{
							Coluna = 6;
							C = 72;
						}
						break;
					case 77:
						Coluna++;
						C+=11;
						while(PmVazia(Monte,Coluna))
						{
							Coluna++;
							C += 11;
							if(Coluna>6)
							{
								Coluna = 0;
								C = 6;
							}
						}
						if(Coluna>6)
						{
							Coluna = 0;
							C = 6;
						}
						break;
					case 72:
						if(C<=39)
						{
							Coluna = 8;
							C=28;
							L=4;
							gotoxy(C,L);
							printf("%c",17);
							Mov = getch();
							switch(Mov)
							{
								case 13:
									if(PmVazia(Monte,8))
									{
										LimpaMsg();
										EscrMsg("MONTE VAZIO");
										getch();
										Mov = 27;
									}
									else
									{
										gotoxy(C,L);
										textcolor(4);
										printf("%c",17);
										Mov = 27;
										textcolor(15);
										Qtde = 1;
										Origem = 8; // A pilha de Descarte é o Monte número 8.
										SelDestino(Monte,Origem,Destino,Qtde,Troca);
									}
									gotoxy(C,L);
									printf(" ");
									break;
								case -32:
									Mov = getch();
									gotoxy(C,L);
									printf(" ");
									switch(Mov)
									{
										case 77:
											gotoxy(C,L);
											printf(" ");
											Coluna = 6;
											C = 72;
											L = 20;
											break;
										case 75:
											gotoxy(C,L);
											printf(" ");
											Coluna = 0;
											C = 6;
											L = 20;
											break;
										case 80:
											gotoxy(C,L);
											printf(" ");
											Coluna = 0;
											C = 6;
											L = 20;
											Mov = 27;
											break;
										case 72:
											gotoxy(C,L);
											printf(" ");
											Coluna = 0;
											C = 6;
											L = 20;
											Mov = 27;
									}
									break;
								case 32:
									gotoxy(C,L);
									printf(" ");
									AtualizaMonte(Monte, Pontos);
									Mov = 27;
									break;
								case 27:
									gotoxy(C,L);
									printf(" ");
							}
						}
						else
						{
							C=57;
							L=7;
							Coluna = 9;
							do
							{
								gotoxy(C,L);
								printf("%c",30);
								Mov = getch();
								gotoxy(C,L);
								printf(" ");
								if(Mov == -32)
								{
									Mov = getch();
									switch(Mov)
									{
										case 77:
											Coluna ++;
											C+=6;
											if(Coluna>12)
												Coluna = 0;
											if(C>75)
												C=75;
											break;
										case 75:
											Coluna--;
											C-=6;
											if(Coluna<9)
												Coluna = 12;
											if(C<57)
												C=57;
											break;
										case 80:
											Coluna = 6;
											Mov = 27;
									}
								}
								else
								{
									if(Mov == 32)
									{
										AtualizaMonte(Monte, Pontos);
										Mov = 27;
									}
								}
								if(Mov == 13)
								{
									if(PmVazia(Monte,Coluna))
									{
										LimpaMsg();
										EscrMsg("MONTE VAZIO");
										getch();
										Mov = 27;
									}
									else
									{
										gotoxy(C,L);
										textcolor(4);
										printf("%c",30);
										Mov = 27;
										textcolor(15);
										Origem = Coluna;
										Qtde = 1;
										SelDestino(Monte, Origem,Destino,Qtde,Troca);
										if(Troca == 1)
											Mov = 27;
										gotoxy(C,L);
										printf(" ");
									}
									break;
								}
							}while(Mov!=27);
						}
						break;
				}
				break;
			case 32:
				AtualizaMonte(Monte, Pontos);
				Mov = 27;
				break;
			case 13:
				if(PmVazia(Monte,Coluna))
				{
					LimpaMsg();
					EscrMsg("MONTE VAZIO");
					getch();
					Mov = 27;
				}
				else
				{
					gotoxy(C,L);
					textcolor(4);
					printf("%c",30);
					Mov = 27;
					textcolor(15);
					Origem = Coluna;
					Qtde = SelCarta(Monte,Coluna);
					if(Qtde>0)
						SelDestino(Monte, Origem,Destino,Qtde,Troca);
					else
						Mov = 27;
					if(Troca == 1)
						Mov = 27;
				}
				break;
			case 27:
				EscrMsg("DESEJA DESISTIR DO JOGO [S/N]?");
				if(toupper(getch())=='S')
				{
					Mov = 27;
					Jogo = 0;
				}
				LimpaMsg();
		}
	}while(Mov!=27);
	
	if(Troca == 0)
		Qtde = 0;
}

char Menu(void)
{
	textcolor(15);
	gotoxy(35,12);
	printf("[1] - JOGAR");
	gotoxy(33,14);
	printf("[2] - INSTRUCOES");
	gotoxy(33,16);
	printf("[3] - HIGHSCORES");
	gotoxy(35,20);
	printf("[ESC] - SAIR");
	
	return getch();
}

void Score (void)
{
	TpPonto Reg;
	FILE *Ptr = fopen("Score\\pontuacao.dat", "rb");
	int i=0,L=10;
	
	textbackground(3);
	textcolor(15);
	gotoxy(36,4);
	printf("HIGHSCORE");
	fread(&Reg,sizeof(TpPonto),1,Ptr);
	while(!feof(Ptr) && i<10)
	{
		gotoxy(28,L);
		printf("%do. - ",i+1);
		gotoxy(34,L);
		printf("%s",Reg.Nome);
		gotoxy(47,L);
		printf("- %d",Reg.Score);
		L+=2;
		i++;
		fread(&Reg,sizeof(TpPonto),1,Ptr);
	}
	if(i<10)
	{
		while(i<10)
		{
			gotoxy(28,L);
			printf("%do. - ",i+1);
			gotoxy(34,L);
			printf("          ",Reg.Nome);
			gotoxy(47,L);
			printf("- 000",Reg.Score);
			L+=2;
			i++;
			fread(&Reg,sizeof(TpPonto),1,Ptr);
		}
	}
	
	fclose(Ptr);
}

int main (void)
{
	FILE *Ptr = fopen("Score\\pontuacao.dat","r");
	
	TpPonto Reg;
	TpCarta Copas, Ouros, Paus, Espadas;
	TpPilhaM2 Baralho, Monte;
	char op;
	int i, Pontos, HighScore, Qtde, Destino, Origem, Troca=0;
	bool Jogo;
	
	// Retira o Cursor do Prompt.
	RetiraCursor();
	// Redimensiona o Programa com o Tamanho de Linhas e Colunas necessários.
	Dimensao();
	
	Moldura(1,1,80,35,15,3);
	Fundo(3);
	Introducao();
	getch();
	
	do
	{
		Jogo = 1;
		Moldura(1,1,80,35,15,3);
		Fundo(3);
		op = Menu();
		switch(op)
		{
			case '1':
				if(Ptr == NULL)
					Ptr = fopen("Score\\pontuacao.dat","w");
				else
				{
					fread(&Reg,sizeof(TpPonto),1,Ptr);
					HighScore = Reg.Score;
				}
				fclose(Ptr);
				
				Pontos = 0;
				
				// Inicializa e Mistura as Cartas do Baralho!
				Inicializar(Baralho,1);
				Embaralha(Baralho);
				
				// Inicializa as Pilhas do Jogo!
				Inicializar(Monte,13);
				
				Fundo(2);
				MoldJogo();
	
				// Distribui as Cartas do Baralho nas Pilhas do Jogo!
				
				for(i=0;i<7;i++)
					Distribui(Baralho,Monte,i,i+1);
				
				// Distribui o restante das cartas no Monte do Jogo!
				Distribui(Baralho,Monte,7,24);
				AtivaMonte(Monte,7);
	
				do
				{
					MostraPontos(Pontos,HighScore);
					FundoJogo();
					
					for(i=0;i<7;i++)
						ExibePilha(Monte,i);
					ExibeMonte(Monte);
					FundoDesc();
					ExibeDescarte(Monte);
					for(i=9;i<13;i++)
						ExibeNaipe(Monte,i);
					
					SelPilha(Monte, Origem, Destino, Qtde, Troca, Jogo, Pontos);
					if(Troca == 1)
					{
						TrocaPilha(Monte,Origem,Destino,Qtde,Pontos);
						Troca = 0;
					}
					else
					{
						if(Troca == 2)
						{
							TrocaPilhaCresc(Monte,Origem,Destino,Qtde,Pontos);
							Troca = 0;
						}
					}
					Copas = ElementoTopo(Monte,9);
					Ouros = ElementoTopo(Monte,10);
					Paus = ElementoTopo(Monte,11);
					Espadas = ElementoTopo(Monte,12);
				}while(!(Ouros.Num=='K' && Copas.Num=='K' && Espadas.Num=='K' && Paus.Num=='K') && Jogo == 1);
				if(Jogo == 1)
				{
					Ptr = fopen("Score\\pontuacao.dat","rb+");
					
					Fundo(3);
					MoldScore();
					Score();
					textbackground(3);
					
					gotoxy(36,4);
					printf("HIGHSCORE");
					gotoxy(38,15);
					gotoxy(65,33);
					printf("PONTOS: %d",Pontos);
					EscrMsg("INSIRA SEU NOME: ");
					fflush(stdin);
					gets(Reg.Nome);
					strupr(Reg.Nome);
					
					Reg.Score = Pontos;
					fseek(Ptr,0,2);
					fwrite(&Reg,sizeof(TpPonto),1,Ptr);
					
					InsercaoDireta(Ptr);
					
					fclose(Ptr);
				}
				break;
			case '2':
				Fundo(3);
				Instrucao();
				getch();
				break;
			case '3':
				Fundo(3);
				MoldScore();
				Score();
				getch();
		}
		
	}while(op!=27);
	
	fclose(Ptr);
	Moldura(1,1,80,35,15,0);
	MsgFim();
	getch();
	
	return 0;
}
