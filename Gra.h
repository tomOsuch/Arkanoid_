#pragma once

namespace Arkanoid {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Gra
	/// </summary>
	public ref class Gra : public System::Windows::Forms::Form
	{
	public:
		Gra(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Gra()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pilka;
	private: System::Windows::Forms::Timer^  zegar;
	private: System::Windows::Forms::PictureBox^  deska;
	private: System::Windows::Forms::Label^  lblPunkty;
	private: System::Windows::Forms::Label^  lblZycie;
	private: System::Windows::Forms::PictureBox^  picNowa;

	private: System::Windows::Forms::PictureBox^  picKoniec;
	private: System::Windows::Forms::PictureBox^  picPrzegrana;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;




	protected:

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda obs³ugi projektanta — nie nale¿y modyfikowaæ 
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gra::typeid));
			this->pilka = (gcnew System::Windows::Forms::PictureBox());
			this->zegar = (gcnew System::Windows::Forms::Timer(this->components));
			this->deska = (gcnew System::Windows::Forms::PictureBox());
			this->lblPunkty = (gcnew System::Windows::Forms::Label());
			this->lblZycie = (gcnew System::Windows::Forms::Label());
			this->picNowa = (gcnew System::Windows::Forms::PictureBox());
			this->picKoniec = (gcnew System::Windows::Forms::PictureBox());
			this->picPrzegrana = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNowa))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			this->SuspendLayout();
			// 
			// pilka
			// 
			this->pilka->BackColor = System::Drawing::Color::Transparent;
			this->pilka->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.BackgroundImage")));
			this->pilka->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pilka->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pilka.Image")));
			this->pilka->Location = System::Drawing::Point(139, 447);
			this->pilka->Name = L"pilka";
			this->pilka->Size = System::Drawing::Size(27, 27);
			this->pilka->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pilka->TabIndex = 0;
			this->pilka->TabStop = false;
			// 
			// zegar
			// 
			this->zegar->Enabled = true;
			this->zegar->Interval = 20;
			this->zegar->Tick += gcnew System::EventHandler(this, &Gra::timer1_Tick);
			// 
			// deska
			// 
			this->deska->BackColor = System::Drawing::Color::Transparent;
			this->deska->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"deska.Image")));
			this->deska->Location = System::Drawing::Point(93, 472);
			this->deska->Name = L"deska";
			this->deska->Size = System::Drawing::Size(133, 28);
			this->deska->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->deska->TabIndex = 1;
			this->deska->TabStop = false;
			// 
			// lblPunkty
			// 
			this->lblPunkty->AutoSize = true;
			this->lblPunkty->BackColor = System::Drawing::Color::Transparent;
			this->lblPunkty->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblPunkty->ForeColor = System::Drawing::Color::White;
			this->lblPunkty->Location = System::Drawing::Point(525, 22);
			this->lblPunkty->Name = L"lblPunkty";
			this->lblPunkty->Size = System::Drawing::Size(46, 24);
			this->lblPunkty->TabIndex = 2;
			this->lblPunkty->Text = L"000";
			// 
			// lblZycie
			// 
			this->lblZycie->AutoSize = true;
			this->lblZycie->BackColor = System::Drawing::Color::Transparent;
			this->lblZycie->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lblZycie->ForeColor = System::Drawing::Color::White;
			this->lblZycie->Location = System::Drawing::Point(659, 22);
			this->lblZycie->Name = L"lblZycie";
			this->lblZycie->Size = System::Drawing::Size(22, 24);
			this->lblZycie->TabIndex = 3;
			this->lblZycie->Text = L"5";
			// 
			// picNowa
			// 
			this->picNowa->BackColor = System::Drawing::Color::Transparent;
			this->picNowa->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picNowa.Image")));
			this->picNowa->Location = System::Drawing::Point(249, 283);
			this->picNowa->Name = L"picNowa";
			this->picNowa->Size = System::Drawing::Size(199, 86);
			this->picNowa->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picNowa->TabIndex = 4;
			this->picNowa->TabStop = false;
			this->picNowa->Visible = false;
			this->picNowa->Click += gcnew System::EventHandler(this, &Gra::pictureBox1_Click);
			// 
			// picKoniec
			// 
			this->picKoniec->BackColor = System::Drawing::Color::Transparent;
			this->picKoniec->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picKoniec.Image")));
			this->picKoniec->Location = System::Drawing::Point(249, 375);
			this->picKoniec->Name = L"picKoniec";
			this->picKoniec->Size = System::Drawing::Size(199, 85);
			this->picKoniec->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picKoniec->TabIndex = 5;
			this->picKoniec->TabStop = false;
			this->picKoniec->Visible = false;
			this->picKoniec->Click += gcnew System::EventHandler(this, &Gra::pictureBox2_Click);
			// 
			// picPrzegrana
			// 
			this->picPrzegrana->BackColor = System::Drawing::Color::Transparent;
			this->picPrzegrana->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picPrzegrana.Image")));
			this->picPrzegrana->Location = System::Drawing::Point(454, 302);
			this->picPrzegrana->Name = L"picPrzegrana";
			this->picPrzegrana->Size = System::Drawing::Size(251, 200);
			this->picPrzegrana->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->picPrzegrana->TabIndex = 6;
			this->picPrzegrana->TabStop = false;
			this->picPrzegrana->Visible = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"blok_czerwony.png");
			this->imageList1->Images->SetKeyName(1, L"blok_metal.png");
			this->imageList1->Images->SetKeyName(2, L"blok_metal_rozbity.png");
			this->imageList1->Images->SetKeyName(3, L"blok_niebieski.png");
			this->imageList1->Images->SetKeyName(4, L"blok_zielony.png");
			this->imageList1->Images->SetKeyName(5, L"blok_zolty.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(314, 241);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(76, 36);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"c";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(80, 73);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(76, 36);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Tag = L"t";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(80, 157);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(76, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"c";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(80, 115);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"c";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(158, 199);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(76, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Tag = L"c";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(2, 73);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(76, 36);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Tag = L"t";
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(158, 73);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(76, 36);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox7->TabIndex = 13;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Tag = L"t";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(236, 73);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(76, 36);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox8->TabIndex = 14;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Tag = L"t";
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(314, 73);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(76, 36);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox9->TabIndex = 15;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Tag = L"t";
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(392, 73);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(76, 36);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox10->TabIndex = 16;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Tag = L"t";
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(470, 73);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(76, 36);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox11->TabIndex = 17;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Tag = L"t";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(548, 73);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(76, 36);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox12->TabIndex = 18;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Tag = L"t";
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(626, 73);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(76, 36);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox13->TabIndex = 19;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Tag = L"t";
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(158, 115);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(76, 36);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox14->TabIndex = 20;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Tag = L"c";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(236, 115);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(76, 36);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox15->TabIndex = 21;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Tag = L"c";
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(314, 115);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(76, 36);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox16->TabIndex = 22;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Tag = L"c";
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(392, 115);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(76, 36);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox17->TabIndex = 23;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Tag = L"c";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(470, 115);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(76, 36);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox18->TabIndex = 24;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Tag = L"c";
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(548, 115);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(76, 36);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox19->TabIndex = 25;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Tag = L"c";
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(158, 157);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(76, 36);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox20->TabIndex = 26;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Tag = L"c";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(236, 157);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(76, 36);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox21->TabIndex = 27;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Tag = L"c";
			// 
			// pictureBox22
			// 
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(392, 157);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(76, 36);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox22->TabIndex = 28;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Tag = L"c";
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(314, 157);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(76, 36);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox23->TabIndex = 29;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Tag = L"c";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(470, 157);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(76, 36);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox24->TabIndex = 30;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Tag = L"c";
			// 
			// pictureBox25
			// 
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(548, 157);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(76, 36);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox25->TabIndex = 31;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Tag = L"c";
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(236, 199);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(76, 36);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox26->TabIndex = 32;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Tag = L"c";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(314, 199);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(76, 36);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox27->TabIndex = 33;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Tag = L"c";
			// 
			// pictureBox28
			// 
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(392, 199);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(76, 36);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox28->TabIndex = 34;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Tag = L"c";
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(470, 199);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(76, 36);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox29->TabIndex = 35;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Tag = L"c";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(158, 241);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(76, 36);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox30->TabIndex = 7;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Tag = L"c";
			// 
			// pictureBox31
			// 
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(236, 241);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(76, 36);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox31->TabIndex = 36;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Tag = L"c";
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(392, 241);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(76, 36);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox32->TabIndex = 37;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Tag = L"c";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(470, 241);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(76, 36);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox33->TabIndex = 38;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Tag = L"c";
			// 
			// Gra
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(704, 501);
			this->Controls->Add(this->deska);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->picPrzegrana);
			this->Controls->Add(this->picKoniec);
			this->Controls->Add(this->picNowa);
			this->Controls->Add(this->lblZycie);
			this->Controls->Add(this->lblPunkty);
			this->Controls->Add(this->pilka);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"Gra";
			this->Text = L"Gra";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::RuszajDeska);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Gra::Gra_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pilka))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->deska))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picNowa))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picKoniec))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picPrzegrana))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int x = 0, y = 0, zycie = 5, punkty = 0;
		char kierunek;
		bool blokada = false;
		int cegly = 0;

	private: Void DzwiekGraj(String^ dzwiek) {
		try {
			System::Media::SoundPlayer^ graj = gcnew System::Media::SoundPlayer();
			graj->SoundLocation = dzwiek;
			graj->Load();
			graj->Play();
		}
		catch (...) {

		}
	}

	private: Void zbijCegle(System::Windows::Forms::Control^ cegla) {
		if ((pilka->Top + pilka->Height > cegla->Top) && 
			(pilka->Top < cegla->Top + cegla->Height) && 
			(pilka->Left + pilka->Width > cegla->Left) && 
			(pilka->Left < cegla->Left + cegla->Width) && 
			(cegla->Visible == true)) {
			y = -y;
			
			if (cegla->Tag != "t") {
				cegla->Visible = false;
				punkty += 10;
				cegly += 1;
				DzwiekGraj("../dzwieki/zbicie.wav");
			}
			else
			{
				PictureBox^ ceglaRozbita = (PictureBox^)cegla;
				ceglaRozbita->Image = imageList1->Images[2];
				cegla->Tag = "ct";
				punkty += 20;
				DzwiekGraj("../dzwieki/kruszenie.wav");
			}
		}
		lblPunkty->Text = "" + punkty;
		if (cegly == 33) {
			DzwiekGraj("../dzwieki/wygrana.wav");
			zegar->Enabled = false;
			picKoniec->Visible = true;
			picNowa->Visible = true;
			cegly = 0;
			//Dodaæ jeszcze tylko obrazek z napisem wygra³eœ!!!!
			Gra::BackgroundImage = Image::FromFile("../grafiki/tlo_koniec.png");
		}
	}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

		for each(Control^ element in this->Controls) {
			if (element->Tag == "c" || element->Tag == "t" || element->Tag == "ct") {
				zbijCegle(element);
			}
		}



		// ruch pi³ki
		pilka->Left += x;
		pilka->Top += y;

		//Odbicie od sciany prawej
		if (pilka->Left >= Gra::Width - pilka->Width-10) x = -x;
		//odbicie od góry
		if (pilka->Top <= 75) y = -y;
		//Odbicie od lewej sciany
		if (pilka->Left <= 5) x = -x;

		//ruch paletki w prawo
		if ((kierunek == 'R') && (deska->Left < Gra::Width - deska->Width - 15)) {
			deska->Left += 20;
			if ((x == 0) && (y == 0)) pilka->Left += 20;
		}
		//rych paletki w lewo
		if ((kierunek == 'L') && (deska->Left > 10)) {
			deska->Left -= 20;
			if ((x == 0) && (y == 0)) pilka->Left -= 20;
		}
		//Odbicie pi³ki od deski
		if ((pilka->Left > deska->Left+5) && (pilka->Left < deska->Left+5 + deska->Width) && (pilka->Top + pilka->Height > deska->Top)) {
			y = -y;
			DzwiekGraj("../dzwieki/paletka.wav");
			DzwiekGraj("../dzwieki/paletka.wav");
			DzwiekGraj("../dzwieki/paletka.wav");
			DzwiekGraj("../dzwieki/paletka.wav");
			DzwiekGraj("../dzwieki/paletka.wav");
		}
		//Utrata pi³ki
		else if (pilka->Top + pilka->Height >= deska->Top + 10) {
			zegar->Enabled = false;
			pilka->Visible = false;
			punkty -= 50;
			zycie -= 1;
			lblPunkty->Text = "" + punkty;
			if (zycie > 0) {
				MessageBox::Show("Upuszczona Pi³ka", "Arkanoid", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				pilka->Top = deska->Top - pilka->Height;
				pilka->Left = deska->Left + deska->Width / 2;
				x = 0;
				y = 0;
				zegar->Enabled = true;
				pilka->Visible = true;
				lblZycie->Text = "" + zycie;
			}
			else
			{
				DzwiekGraj("../dzwieki/smiech.wav");
				lblZycie->Text = ":(";
				picKoniec->Visible = true;
				picNowa->Visible = true;
				picPrzegrana->Visible = true;
			}
			
		}
		

	}
	private: System::Void RuszajDeska(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Left) kierunek = 'L';
		if (e->KeyCode == Keys::Right) kierunek = 'R';
		if ((e->KeyCode == Keys::Space)&&(blokada=true))
		{
			x = -5;
			y = -5;
			blokada = false;
		}
	}
private: System::Void Gra_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
	kierunek = 'S';
}
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	zycie = 5;
	punkty = 0;
	lblPunkty->Text = "" + punkty;
	lblZycie->Text = "" + zycie;
	picKoniec->Visible = false;
	picNowa->Visible = false;
	picPrzegrana->Visible = false;
	pilka->Top = deska->Top - pilka->Height;
	pilka->Left = deska->Left + deska->Width / 2;
	x = 0;
	y = 0;
	zegar->Enabled = true;
	pilka->Visible = true;
	blokada = false;
	for each(Control^ elementy in this->Controls) {
		if (elementy->Tag == "c" || elementy->Tag == "t" || elementy->Tag == "ct") {
			elementy->Visible = true;
			if (elementy->Tag == "ct") {
				elementy->Tag = "t";
				PictureBox^ obraz = (PictureBox^)elementy;
				obraz->Image = imageList1->Images[1];
				Gra::BackgroundImage = Image::FromFile("../grafiki/tlo_gra_01.png");
			}
		}
	}
}
};
}
