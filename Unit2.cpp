//---------------------------------------------------------------------------
#include <winsock2.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
cloche::cloche(SOCKET sock)
{
    this->sock = sock;
}
cloche::~cloche()
{

}

void cloche::cloche1()
{
	// initialisation de la trame pour sonner la cloche n°1
	char buffer[11];
	buffer[0]=0x00;
	buffer[1]=0x00;
	buffer[2]=0x00;
	buffer[3]=0x00;
	buffer[4]=0x00;
	buffer[5]=0x06;
	buffer[6]=0x00;
	buffer[7]=0x06;
	buffer[8]=0x00;
	buffer[9]=0x02;
	buffer[10]=0x00;
	buffer[11]=0x01;
	// initialisation de la trame pour arreter la cloche n°1
	char marteau[11];
	marteau[0]=0x00;
	marteau[1]=0x00;
	marteau[2]=0x00;
	marteau[3]=0x00;
	marteau[4]=0x00;
	marteau[5]=0x06;
	marteau[6]=0x00;
	marteau[7]=0x06;
	marteau[8]=0x00;
	marteau[9]=0x02;
	marteau[10]=0x00;
	marteau[11]=0x00;
	// envoie de la trame pour faire sonner
	send(sock, buffer, 12, 0);
	 // envoie de la trame pour arreter
	send(sock, marteau, 12, 0);
	Sleep(250);

}
void cloche::cloche2()
{
	// initialisation de la trame pour sonner la cloche n°2
	char buffer[11];
	buffer[0]=0x00;
	buffer[1]=0x00;
	buffer[2]=0x00;
	buffer[3]=0x00;
	buffer[4]=0x00;
	buffer[5]=0x06;
	buffer[6]=0x00;
	buffer[7]=0x06;
	buffer[8]=0x00;
	buffer[9]=0x02;
	buffer[10]=0x00;
	buffer[11]=0x02;
	// initialisation de la trame pour arreter la cloche n°2
	char marteau[11];
	marteau[0]=0x00;
	marteau[1]=0x00;
	marteau[2]=0x00;
	marteau[3]=0x00;
	marteau[4]=0x00;
	marteau[5]=0x06;
	marteau[6]=0x00;
	marteau[7]=0x06;
	marteau[8]=0x00;
	marteau[9]=0x02;
	marteau[10]=0x00;
	marteau[11]=0x00;
	// envoie de la trame pour faire sonner
	send(sock, buffer, 12, 0);
	 // envoie de la trame pour arreter
	send(sock, marteau, 12, 0);
	Sleep(250);

}
void cloche::cloche3()
{
	// initialisation de la trame pour sonner la cloche n°3
	char buffer[11];
	buffer[0]=0x00;
	buffer[1]=0x00;
	buffer[2]=0x00;
	buffer[3]=0x00;
	buffer[4]=0x00;
	buffer[5]=0x06;
	buffer[6]=0x00;
	buffer[7]=0x06;
	buffer[8]=0x00;
	buffer[9]=0x02;
	buffer[10]=0x00;
	buffer[11]=0x04;
	// initialisation de la trame pour arreter la cloche n°3
	char marteau[11];
	marteau[0]=0x00;
	marteau[1]=0x00;
	marteau[2]=0x00;
	marteau[3]=0x00;
	marteau[4]=0x00;
	marteau[5]=0x06;
	marteau[6]=0x00;
	marteau[7]=0x06;
	marteau[8]=0x00;
	marteau[9]=0x02;
	marteau[10]=0x00;
	marteau[11]=0x00;
	// envoie de la trame pour faire sonner
	send(sock, buffer, 12, 0);
	 // envoie de la trame pour arreter
	send(sock, marteau, 12, 0);
	Sleep(250);

}
void cloche::cloche4()
{
	// initialisation de la trame pour sonner la cloche n°4
	char buffer[11];
	buffer[0]=0x00;
	buffer[1]=0x00;
	buffer[2]=0x00;
	buffer[3]=0x00;
	buffer[4]=0x00;
	buffer[5]=0x06;
	buffer[6]=0x00;
	buffer[7]=0x06;
	buffer[8]=0x00;
	buffer[9]=0x02;
	buffer[10]=0x00;
	buffer[11]=0x08;
	// initialisation de la trame pour arreter la cloche n°4
	char marteau[11];
	marteau[0]=0x00;
	marteau[1]=0x00;
	marteau[2]=0x00;
	marteau[3]=0x00;
	marteau[4]=0x00;
	marteau[5]=0x06;
	marteau[6]=0x00;
	marteau[7]=0x06;
	marteau[8]=0x00;
	marteau[9]=0x02;
	marteau[10]=0x00;
	marteau[11]=0x00;
	// envoie de la trame pour faire sonner
	send(sock, buffer, 12, 0);
	 // envoie de la trame pour arreter
	send(sock, marteau, 12, 0);
	Sleep(250);

}
void cloche::toutCloche()
{
	// initialisation de la trame pour sonner toutes les cloches
	char buffer[11];
	buffer[0]=0x00;
	buffer[1]=0x00;
	buffer[2]=0x00;
	buffer[3]=0x00;
	buffer[4]=0x00;
	buffer[5]=0x06;
	buffer[6]=0x00;
	buffer[7]=0x06;
	buffer[8]=0x00;
	buffer[9]=0x02;
	buffer[10]=0x00;
	buffer[11]=0x0F;
	// initialisation de la trame pour arreter toutes les cloches
	char marteau[11];
	marteau[0]=0x00;
	marteau[1]=0x00;
	marteau[2]=0x00;
	marteau[3]=0x00;
	marteau[4]=0x00;
	marteau[5]=0x06;
	marteau[6]=0x00;
	marteau[7]=0x06;
	marteau[8]=0x00;
	marteau[9]=0x02;
	marteau[10]=0x00;
	marteau[11]=0x00;
	// envoie de la trame pour faire sonner
	send(sock, buffer, 12, 0);
	 // envoie de la trame pour arreter
	send(sock, marteau, 12, 0);
	Sleep(250);
}
