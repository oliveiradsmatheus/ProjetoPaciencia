void Moldura (int CI,int LI,int CF,int LF,int CorT,int CorF)
{
	int i;
	
	textcolor(CorT);
	textbackground(CorF);
	
	gotoxy(CI,LI);
	printf("%c",201);
	gotoxy(CF,LI);
	printf("%c",187);
	gotoxy(CI,LF);
	printf("%c",200);
	gotoxy(CF,LF);
	printf("%c",188);
	
	for(i=CI+1;i<CF;i++)
	{
		gotoxy(i,LI);
		printf("%c",205);
		gotoxy(i,LF);
		printf("%c",205);
	}
	for(i=LI+1;i<LF;i++)
	{
		gotoxy(CI,i);
		printf("%c",186);
		gotoxy(CF,i);
		printf("%c",186);
	}
	
	textbackground(2);
	textcolor(15);
}

void RetiraCursor (void)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO info;
    info.dwSize = 100;
    info.bVisible = FALSE;
    SetConsoleCursorInfo(consoleHandle, &info);
}

void Dimensao (void)
{
	system("mode con cols=80 lines=35");
}

void Fundo (int Cor)
{
	int L=2;
	
	textbackground(Cor);
	while(L<35)
	{
		gotoxy(2,L);
		printf("                                                                              ");
		L++;
	}
}

void FundoJogo (void)
{
	int L=7;
	
	textbackground(2);
	while(L<32)
	{
		gotoxy(2,L);
		printf("                                                                              ");
		L++;
	}
}

void LimpaLinha(int Num)
{
	gotoxy(2,Num);
		printf("                                                                             ");
}

void Introducao(void)
{
	int i;
	
	i=2;
    gotoxy(25,i),printf("%c",202);//Base p
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(25,i),printf("%c",202);//Base p
    	Sleep(1);
    }
    
	i=2;
    gotoxy(29,i),printf("%c",202);//Base A1
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(29,i),printf("%c",202);//Base A1
    	Sleep(1);
    }
	i=2;
    gotoxy(31,i),printf("%c",202);//Base A2
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(31,i),printf("%c",202);//Base A2
    	Sleep(1);
    }
    
	i=2;
    gotoxy(33,i),printf("%c",200);//Base c1
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(33,i),printf("%c",200);//Base c1
    	Sleep(1);
    }
    i=2;
	gotoxy(34,i),printf("%c",205);//Base c2
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(34,i),printf("%c",205);//Base c2
    	Sleep(1);
    }
    i=2;
    gotoxy(35,i),printf("%c",188);//Base c3
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(35,i),printf("%c",188);//Base c3
    	Sleep(1);
    }
	
	i=2;
    gotoxy(37,i),printf("%c",202);//Base I
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(37,i),printf("%c",202);//Base I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(39,i),printf("%c",200);//Base E
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(39,i),printf("%c",200);//Base E
    	Sleep(1);
    }
	i=2;
    gotoxy(40,i),printf("%c",205);//Base E
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(40,i),printf("%c",205);//Base E
    	Sleep(1);
    }
    i=2;
    gotoxy(41,i),printf("%c",205);//Base E
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(41,i),printf("%c",205);//Base E
    	Sleep(1);
    }
    
    i=2;
    gotoxy(43,i),printf("%c",202);//Base N
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(43,i),printf("%c",202);//Base N
    	Sleep(1);
    }
    i=2;
    gotoxy(45,i),printf("%c",202);//Base N
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(45,i),printf("%c",202);//Base N
    	Sleep(1);
    }
    
    i=2;
    gotoxy(47,i),printf("%c",200);//Base c1
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(47,i),printf("%c",200);//Base c1
    	Sleep(1);
    }
    i=2;
	gotoxy(48,i),printf("%c",205);//Base c2
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(48,i),printf("%c",205);//Base c2
    	Sleep(1);
    }
    i=2;
    gotoxy(49,i),printf("%c",188);//Base c3
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(49,i),printf("%c",188);//Base c3
    	Sleep(1);
    }
    
    i=2;
    gotoxy(51,i),printf("%c",202);//Base I
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(51,i),printf("%c",202);//Base I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(53,i),printf("%c",202);//Base A1
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(53,i),printf("%c",202);//Base A1
    	Sleep(1);
    }
	i=2;
    gotoxy(55,i),printf("%c",202);//Base A2
    Sleep(1);
    while(i<14){
    	LimpaLinha(i++);
    	gotoxy(55,i),printf("%c",202);//Base A2
    	Sleep(1);
    }
    
    i=2;
    gotoxy(25,i),printf("%c",204);//Mid P
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(25,i),printf("%c",204);//Mid P
    	Sleep(1);
    }
    i=2;
    gotoxy(26,i),printf("%c",205);//Mid P
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(26,i),printf("%c",205);//Mid P
    	Sleep(1);
    }
    i=2;
    gotoxy(27,i),printf("%c",188);//Mid P
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(27,i),printf("%c",188);//Mid P
    	Sleep(1);
    }
    
    i=2;
    gotoxy(29,i),printf("%c",204);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(29,i),printf("%c",204);//Mid a
    	Sleep(1);
    }
    i=2;
    gotoxy(30,i),printf("%c",205);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(30,i),printf("%c",205);//Mid a
    	Sleep(1);
    }
    i=2;
    gotoxy(31,i),printf("%c",185);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(31,i),printf("%c",185);//Mid a
    	Sleep(1);
    }
    
    i=2;
    gotoxy(33,i),printf("%c",186);//Mid C
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(33,i),printf("%c",186);//Mid C
    	Sleep(1);
    }
    
    i=2;
    gotoxy(37,i),printf("%c",186);//Mid I
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(37,i),printf("%c",186);//Mid I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(39,i),printf("%c",204);//Mid E
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(39,i),printf("%c",204);//Mid E
    	Sleep(1);
    }
    i=2;
    gotoxy(40,i),printf("%c",205);//Mid E
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(40,i),printf("%c",205);//Mid E
    	Sleep(1);
    }
    i=2;
    gotoxy(41,i),printf("%c",205);//Mid E
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(41,i),printf("%c",205);//Mid E
    	Sleep(1);
    }
    
    i=2;
    gotoxy(43,i),printf("%c",186);//Mid N
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(43,i),printf("%c",186);//Mid N
    	Sleep(1);
    }
    i=2;
    gotoxy(45,i),printf("%c",186);//Mid N
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(45,i),printf("%c",186);//Mid N
    	Sleep(1);
    }
	
	i=2;
    gotoxy(47,i),printf("%c",186);//Mid C
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(47,i),printf("%c",186);//Mid C
    	Sleep(1);
    }
    
    i=2;
    gotoxy(51,i),printf("%c",186);//Mid I
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(51,i),printf("%c",186);//Mid I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(53,i),printf("%c",204);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(53,i),printf("%c",204);//Mid a
    	Sleep(1);
    }
    i=2;
    gotoxy(54,i),printf("%c",205);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(54,i),printf("%c",205);//Mid a
    	Sleep(1);
    }
    i=2;
    gotoxy(55,i),printf("%c",185);//Mid a
    Sleep(1);
    while(i<13){
    	LimpaLinha(i++);
    	gotoxy(55,i),printf("%c",185);//Mid a
    	Sleep(1);
    }
    
    i=2;
    gotoxy(25,i),printf("%c",201);//Topo P
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(25,i),printf("%c",201);//Topo P
    	Sleep(1);
    }
    i=2;
    gotoxy(26,i),printf("%c",205);//Topo P
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(26,i),printf("%c",205);//Topo P
    	Sleep(1);
    }
    i=2;
    gotoxy(27,i),printf("%c",187);//Topo P
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(27,i),printf("%c",187);//Topo P
    	Sleep(1);
    }
    
    i=2;
    gotoxy(29,i),printf("%c",201);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(29,i),printf("%c",201);//Topo A
    	Sleep(1);
    }
    i=2;
    gotoxy(30,i),printf("%c",205);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(30,i),printf("%c",205);//Topo A
    	Sleep(1);
    }
    i=2;
    gotoxy(31,i),printf("%c",187);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(31,i),printf("%c",187);//Topo A
    	Sleep(1);
    }
    
    i=2;
    gotoxy(33,i),printf("%c",201);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(33,i),printf("%c",201);//Topo C
    	Sleep(1);
    }
    i=2;
    gotoxy(34,i),printf("%c",205);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(34,i),printf("%c",205);//Topo C
    	Sleep(1);
    }
    i=2;
    gotoxy(35,i),printf("%c",187);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(35,i),printf("%c",187);//Topo C
    	Sleep(1);
    }
    
    i=2;
    gotoxy(37,i),printf("%c",203);//Topo I
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(37,i),printf("%c",203);//Topo I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(39,i),printf("%c",201);//Topo E
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(39,i),printf("%c",201);//Topo E
    	Sleep(1);
    }
    i=2;
    gotoxy(40,i),printf("%c",205);//Topo E
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(40,i),printf("%c",205);//Topo E
    	Sleep(1);
    }
    i=2;
    gotoxy(41,i),printf("%c",205);//Topo E
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(41,i),printf("%c",205);//Topo E
    	Sleep(1);
    }
	
    i=2;
    gotoxy(43,i),printf("%c",203);//Topo N
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(43,i),printf("%c",203);//Topo N
    	Sleep(1);
    }
    i=2;
    gotoxy(44,i),printf("%c",205);//Topo N
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(44,i),printf("%c",205);//Topo N
    	Sleep(1);
    }
    i=2;
    gotoxy(45,i),printf("%c",187);//Topo N
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(45,i),printf("%c",187);//Topo N
    	Sleep(1);
    }
    
    i=2;
    gotoxy(47,i),printf("%c",201);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(47,i),printf("%c",201);//Topo C
    	Sleep(1);
    }
    i=2;
    gotoxy(48,i),printf("%c",205);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(48,i),printf("%c",205);//Topo C
    	Sleep(1);
    }
    i=2;
    gotoxy(49,i),printf("%c",187);//Topo C
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(49,i),printf("%c",187);//Topo C
    	Sleep(1);
    }
    
    i=2;
    gotoxy(51,i),printf("%c",203);//Topo I
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(51,i),printf("%c",203);//Topo I
    	Sleep(1);
    }
    
    i=2;
    gotoxy(53,i),printf("%c",201);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(53,i),printf("%c",201);//Topo A
    	Sleep(1);
    }
    i=2;
    gotoxy(54,i),printf("%c",205);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(54,i),printf("%c",205);//Topo A
    	Sleep(1);
    }
    i=2;
    gotoxy(55,i),printf("%c",187);//Topo A
    Sleep(1);
    while(i<12){
    	LimpaLinha(i++);
    	gotoxy(55,i),printf("%c",187);//Topo A
    	Sleep(1);
    }
    
	i=2;
    gotoxy(39,i),printf("%c",201);//TIO E
    Sleep(1);
    while(i<11){
    	LimpaLinha(i++);
    	gotoxy(39,i),printf("%c",201);//TIO E
    	Sleep(1);
    }
    i=2;
    gotoxy(40,i),printf("%c",187);//TIO E
    Sleep(1);
    while(i<11){
    	LimpaLinha(i++);
    	gotoxy(40,i),printf("%c",187);//TIO E
    	Sleep(1);
    }
    LimpaLinha(11);
    LimpaLinha(12);
    LimpaLinha(13);
	gotoxy(25,12),printf("%c",201);
	gotoxy(26,12),printf("%c",205);
	gotoxy(27,12),printf("%c",187);
	gotoxy(25,13),printf("%c",204); //Letra P
	gotoxy(26,13),printf("%c",205);
	gotoxy(27,13),printf("%c",188);
	gotoxy(25,14),printf("%c",202);
	
	gotoxy(29,12),printf("%c",201);
	gotoxy(29,13),printf("%c",204); 
	gotoxy(30,12),printf("%c",205);
	gotoxy(30,13),printf("%c",205); //Letra A
	gotoxy(31,12),printf("%c",187);
	gotoxy(31,13),printf("%c",185);
	gotoxy(29,14),printf("%c",202);
	gotoxy(31,14),printf("%c",202);
	
	gotoxy(33,12),printf("%c",201);
	gotoxy(33,14),printf("%c",200);
	gotoxy(33,13),printf("%c",186);
	gotoxy(34,12),printf("%c",205); //Letra C
	gotoxy(34,14),printf("%c",205);
	gotoxy(35,12),printf("%c",187);
	gotoxy(35,14),printf("%c",188);
	
	gotoxy(37,12),printf("%c",203);
	gotoxy(37,13),printf("%c",186); //Letra I
	gotoxy(37,14),printf("%c",202);
	
	gotoxy(39,12),printf("%c",201);
	gotoxy(40,12),printf("%c",205);
	gotoxy(40,13),printf("%c",205);  //Letra E
	gotoxy(40,14),printf("%c",205);
	gotoxy(39,14),printf("%c",200);
	gotoxy(39,13),printf("%c",204);
	gotoxy(39,11),printf("%c",201);
	gotoxy(40,11),printf("%c",187);
	gotoxy(41,12),printf("%c",205);
	gotoxy(41,13),printf("%c",205);
	gotoxy(41,14),printf("%c",205);
	
	gotoxy(43,12),printf("%c",203);
	gotoxy(44,12),printf("%c",205);
	gotoxy(45,12),printf("%c",187);
	gotoxy(43,13),printf("%c",186); //Letra N
	gotoxy(45,13),printf("%c",186);
	gotoxy(43,14),printf("%c",202);
	gotoxy(45,14),printf("%c",202);
	
	gotoxy(47,12),printf("%c",201);
	gotoxy(47,14),printf("%c",200);
	gotoxy(47,13),printf("%c",186);
	gotoxy(48,12),printf("%c",205); //Letra C
	gotoxy(48,14),printf("%c",205);
	gotoxy(49,12),printf("%c",187);
	gotoxy(49,14),printf("%c",188);
	
	gotoxy(51,12),printf("%c",203);
	gotoxy(51,13),printf("%c",186); //Letra I
	gotoxy(51,14),printf("%c",202);
	
	gotoxy(53,12),printf("%c",201);
	gotoxy(53,13),printf("%c",204); 
	gotoxy(54,12),printf("%c",205);
	gotoxy(54,13),printf("%c",205); //Letra A
	gotoxy(55,12),printf("%c",187);
	gotoxy(55,13),printf("%c",185);
	gotoxy(53,14),printf("%c",202);
	gotoxy(55,14),printf("%c",202);
	gotoxy(20,15);
	printf("PRESSIONE QUALQUER TECLA PARA CONTINUAR...");
}

void MoldJogo (void)
{
	Moldura(1,1,80,35,15,2); // Moldura Externa
	Moldura(2,2,79,6,15,2); // Moldura do Baralho e Montes de Naipes
	Moldura(2,32,79,34,15,2); // Moldura da Mensagem Inferior
}

void MoldScore()
{
	Moldura(1,1,80,35,15,3);
	Moldura(2,2,79,6,15,3);
	Moldura(2,32,79,34,15,3);
}

void MoldFim()
{
	Moldura(1,1,80,35,11,1);
}
