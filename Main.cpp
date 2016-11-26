#include"Autor.h"
#include"Gra.h"
#include"Powitanie.h"


using namespace Arkanoid;

void ZamknijOkno(Object^ sender, FormClosedEventArgs^ e)
{
	if (Application::OpenForms->Count == 0) {
		Application::Exit();
	}
	else {
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	}
}

[STAThreadAttribute]

int Main()
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Powitanie^ pierwsza = gcnew Powitanie();
	pierwsza->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	pierwsza->Show();
	Application::Run();

	return 0;
}