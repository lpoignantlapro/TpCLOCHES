//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
#include <Windows.h>
//---------------------------------------------------------------------------
 class cloche
{
	private :
		SOCKET sock;

	public :
	  cloche(SOCKET sock);
	  ~cloche();
	  void cloche1();
	  void cloche2();
	  void cloche3();
	  void cloche4();
      void toutCloche();
};

#endif


