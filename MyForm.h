#pragma once

namespace UMLprojcpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		bool tura;
		int eot;
		bool bot;
		bool MP;
		bool eog;
		void gameStart(int ustawienia)
		{
			//ustawienia: 1 lokalna 2P, 2 lokalna bot, 3 sieciowa serwer, 4 sieciowa klient
			eot=0;
			tura=true;
			eog=false;
			if(ustawienia==1) {bot=false; MP=false;}
			if(ustawienia==2) {bot=true; MP=false;}
			if(ustawienia==3) {bot=false; MP=true;}
			if(ustawienia==4) 
			{bot=false; MP=true; tura=!tura;
			//buttonOff();
			}
		
			
A1->Text="";
A1->BackColor=System::Drawing::Color::White;
A1->Visible=true;
A1->Enabled=true;
A2->Text="";
A2->BackColor=System::Drawing::Color::White;
A2->Visible=true;
A2->Enabled=true;
A3->Text="";
A3->BackColor=System::Drawing::Color::White;
A3->Visible=true;
A3->Enabled=true;
B1->Text="";
B1->BackColor=System::Drawing::Color::White;
B1->Visible=true;
B1->Enabled=true;
B2->Text="";
B2->BackColor=System::Drawing::Color::White;
B2->Visible=true;
B2->Enabled=true;
B3->Text="";
B3->BackColor=System::Drawing::Color::White;
B3->Visible=true;
B3->Enabled=true;
C1->Text="";
C1->BackColor=System::Drawing::Color::White;
C1->Visible=true;
C1->Enabled=true;
C2->Text="";
C2->BackColor=System::Drawing::Color::White;
C2->Visible=true;
C2->Enabled=true;
C3->Text="";
C3->BackColor=System::Drawing::Color::White;
C3->Visible=true;
C3->Enabled=true;
}
		void buttonOff()
		{
A1->Enabled=false;
A2->Enabled=false;
A3->Enabled=false;
B1->Enabled=false;
B2->Enabled=false;
B3->Enabled=false;
C1->Enabled=false;
C2->Enabled=false;
C3->Enabled=false;

		}
		void MPbuttonON()
		{//odblokowanie mozliwosci klikania
			if(A1->Text=="") A1->Enabled=true;
			if(A2->Text=="") A2->Enabled=true;
			if(A3->Text=="") A3->Enabled=true;
			if(B1->Text=="") B1->Enabled=true;
			if(B2->Text=="") B2->Enabled=true;
			if(B3->Text=="") B3->Enabled=true;
			if(C1->Text=="") C1->Enabled=true;
			if(C2->Text=="") C2->Enabled=true;
			if(C3->Text=="") C3->Enabled=true;

		}
		void AI()
		{ //dziala na zasadzie listy priorytetowej
			//zajac srodek!
			if(B2->Text=="") {B2->PerformClick(); return;}
			//wygrana!
            if ((A1->Text == "O") && (A2->Text == "O") && (A3->Text == ""))
            { A3->PerformClick();   return; }
            if ((A2->Text == "O") && (A3->Text == "O") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A1->Text == "O") && (A3->Text == "O") && (A2->Text == ""))
                {A2->PerformClick();   return;}
            if ((B1->Text == "O") && (B2->Text == "O") && (B3->Text == ""))
                {B3->PerformClick();   return;}
            if ((B2->Text == "O") && (B3->Text == "O") && (B1->Text == ""))
                {B1->PerformClick();   return;}
            if ((C1->Text == "O") && (C2->Text == "O") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((C2->Text == "O") && (C3->Text == "O") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((C1->Text == "O") && (C3->Text == "O") && (C2->Text == ""))
                {C2->PerformClick();   return;}
            if ((A1->Text == "O") && (B1->Text == "O") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((B1->Text == "O") && (C1->Text == "O") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A1->Text == "O") && (C1->Text == "O") && (B1->Text == ""))
                {B1->PerformClick();   return;}
            if ((A2->Text == "O") && (B2->Text == "O") && (C2->Text == ""))
                {C2->PerformClick();   return;}
            if ((B2->Text == "O") && (C2->Text == "O") && (A2->Text == ""))
                {A2->PerformClick();   return;}
            if ((A3->Text == "O") && (B3->Text == "O") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((B3->Text == "O") && (C3->Text == "O") && (A3->Text == ""))
                {A3->PerformClick();   return;}
            if ((A3->Text == "O") && (C3->Text == "O") && (B3->Text == ""))
                {B3->PerformClick();   return;}
            if ((A1->Text == "O") && (B2->Text == "O") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((B2->Text == "O") && (C3->Text == "O") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A3->Text == "O") && (B2->Text == "O") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((B2->Text == "O") && (C1->Text == "O") && (A3->Text == ""))
                {A3->PerformClick();   return;}

            //obrona!
            if ((A1->Text == "X") && (A2->Text == "X") && (A3->Text == ""))
                {A3->PerformClick();   return;}
            if ((A2->Text == "X") && (A3->Text == "X") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A1->Text == "X") && (A3->Text == "X") && (A2->Text == ""))
                {A2->PerformClick();   return;}
            if ((B1->Text == "X") && (B2->Text == "X") && (B3->Text == ""))
                {B3->PerformClick();   return;}
            if ((B2->Text == "X") && (B3->Text == "X") && (B1->Text == ""))
                {B1->PerformClick();   return;}
            if ((C1->Text == "X") && (C2->Text == "X") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((C2->Text == "X") && (C3->Text == "X") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((C1->Text == "X") && (C3->Text == "X") && (C2->Text == ""))
                {C2->PerformClick();   return;}
            if ((A1->Text == "X") && (B1->Text == "X") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((B1->Text == "X") && (C1->Text == "X") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A1->Text == "X") && (C1->Text == "X") && (B1->Text == ""))
                {B1->PerformClick();   return;}
            if ((A2->Text == "X") && (B2->Text == "X") && (C2->Text == ""))
                {C2->PerformClick();   return;}
            if ((B2->Text == "X") && (C2->Text == "X") && (A2->Text == ""))
                {A2->PerformClick();   return;}
            if ((A3->Text == "X") && (B3->Text == "X") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((B3->Text == "X") && (C3->Text == "X") && (A3->Text == ""))
                {A3->PerformClick();   return;}
            if ((A3->Text == "X") && (C3->Text == "X") && (B3->Text == ""))
                {B3->PerformClick();   return;}
            if ((A1->Text == "X") && (B2->Text == "X") && (C3->Text == ""))
                {C3->PerformClick();   return;}
            if ((B2->Text == "X") && (C3->Text == "X") && (A1->Text == ""))
                {A1->PerformClick();   return;}
            if ((A3->Text == "X") && (B2->Text == "X") && (C1->Text == ""))
                {C1->PerformClick();   return;}
            if ((B2->Text == "X") && (C1->Text == "X") && (A3->Text == ""))
                {A3->PerformClick();   return;}


            //zajac rogi!
            if (A1->Text == "") {A1->PerformClick();   return;}
            if (A3->Text == "") {A3->PerformClick();   return;}
            if (C3->Text == "") {C3->PerformClick();   return;}
            if (C1->Text == "") {C1->PerformClick();   return;}

			//cos zostalo?
            if (A2->Text == "") {A2->PerformClick();   return;}
            if (B1->Text == "") {B1->PerformClick();   return;}
            if (B3->Text == "") {B3->PerformClick();   return;}
            if (C2->Text == "") {C2->PerformClick();   return;}


		}
		void checker()
		{
			//poziomo
			if (A1->Text == A2->Text && A1->Text == A3->Text && A1->Text != "") { eog = true; A1->BackColor = System::Drawing::Color::Red; 
				A2->BackColor = System::Drawing::Color::Red; 
				A3->BackColor = System::Drawing::Color::Red; }
            if (B1->Text == B2->Text && B1->Text == B3->Text && B1->Text != "") { eog = true; B1->BackColor = System::Drawing::Color::Red; 
				B2->BackColor = System::Drawing::Color::Red; 
				B3->BackColor = System::Drawing::Color::Red; }
            if (C1->Text == C2->Text && C1->Text == C3->Text && C1->Text != "") { eog = true; C1->BackColor = System::Drawing::Color::Red; 
				C2->BackColor = System::Drawing::Color::Red; 
				C3->BackColor = System::Drawing::Color::Red; }

			//pionowo
            if (A1->Text == B1->Text && A1->Text == C1->Text && A1->Text != "") { eog = true; A1->BackColor = System::Drawing::Color::Red;
				B1->BackColor =System::Drawing::Color::Red;
				C1->BackColor = System::Drawing::Color::Red; }
            if (A2->Text == B2->Text && A2->Text == C2->Text && A2->Text != "") { eog = true; A2->BackColor = System::Drawing::Color::Red;
				B2->BackColor = System::Drawing::Color::Red;
				C2->BackColor = System::Drawing::Color::Red; }
            if (A3->Text == B3->Text && A3->Text == C3->Text && A3->Text != "") { eog = true; A3->BackColor = System::Drawing::Color::Red;
				B3->BackColor = System::Drawing::Color::Red;
				C3->BackColor = System::Drawing::Color::Red; }

			//na wskros
            if (A1->Text == B2->Text && A1->Text == C3->Text && A1->Text != "") { eog = true; A1->BackColor = System::Drawing::Color::Red;
				B2->BackColor = System::Drawing::Color::Red;
				C3->BackColor = System::Drawing::Color::Red; }
            if (A3->Text == B2->Text && A3->Text == C1->Text && A3->Text != "") { eog = true; C1->BackColor =System::Drawing::Color::Red; 
				B2->BackColor = System::Drawing::Color::Red;
				A3->BackColor = System::Drawing::Color::Red; }
            
			if(eog) 
			{
				buttonOff();
				if(!tura) {MessageBox::Show("X wygrywa!","Koniec gry!");} else {MessageBox::Show("O wygrywa!","Koniec gry!");}
			}
			if(!eog && eot==9) {MessageBox::Show("Remis!","Koniec gry!");}
		}
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  graLokalnaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zGraczemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zBotemToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graSieciowaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  uruchomSerwerToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  podlaczSieToolStripMenuItem;
	private: System::Windows::Forms::Button^  A1;

	private: System::Windows::Forms::Button^  Wyslij;
	private: System::Windows::Forms::Label^  IPinfo;


	private: System::Windows::Forms::Label^  labelSelfIP;
	private: System::Windows::Forms::Label^  labelConnectTo;


	private: System::Windows::Forms::TextBox^  textIPconnect;
	private: System::Windows::Forms::TextBox^  textMSG;


	private: System::Windows::Forms::TextBox^  textChat;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  A2;
	private: System::Windows::Forms::Button^  A3;
	private: System::Windows::Forms::Button^  B1;
	private: System::Windows::Forms::Button^  B2;
	private: System::Windows::Forms::Button^  B3;
	private: System::Windows::Forms::Button^  C3;






	private: System::Windows::Forms::Button^  C2;

	private: System::Windows::Forms::Button^  C1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->graLokalnaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zGraczemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zBotemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graSieciowaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uruchomSerwerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podlaczSieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->A1 = (gcnew System::Windows::Forms::Button());
			this->Wyslij = (gcnew System::Windows::Forms::Button());
			this->IPinfo = (gcnew System::Windows::Forms::Label());
			this->labelSelfIP = (gcnew System::Windows::Forms::Label());
			this->labelConnectTo = (gcnew System::Windows::Forms::Label());
			this->textIPconnect = (gcnew System::Windows::Forms::TextBox());
			this->textMSG = (gcnew System::Windows::Forms::TextBox());
			this->textChat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->A2 = (gcnew System::Windows::Forms::Button());
			this->A3 = (gcnew System::Windows::Forms::Button());
			this->B1 = (gcnew System::Windows::Forms::Button());
			this->B2 = (gcnew System::Windows::Forms::Button());
			this->B3 = (gcnew System::Windows::Forms::Button());
			this->C3 = (gcnew System::Windows::Forms::Button());
			this->C2 = (gcnew System::Windows::Forms::Button());
			this->C1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->graLokalnaToolStripMenuItem, 
				this->graSieciowaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(435, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// graLokalnaToolStripMenuItem
			// 
			this->graLokalnaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->zGraczemToolStripMenuItem, 
				this->zBotemToolStripMenuItem});
			this->graLokalnaToolStripMenuItem->Name = L"graLokalnaToolStripMenuItem";
			this->graLokalnaToolStripMenuItem->Size = System::Drawing::Size(78, 20);
			this->graLokalnaToolStripMenuItem->Text = L"Gra lokalna";
			// 
			// zGraczemToolStripMenuItem
			// 
			this->zGraczemToolStripMenuItem->Name = L"zGraczemToolStripMenuItem";
			this->zGraczemToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zGraczemToolStripMenuItem->Text = L"z graczem";
			this->zGraczemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zGraczemToolStripMenuItem_Click);
			// 
			// zBotemToolStripMenuItem
			// 
			this->zBotemToolStripMenuItem->Name = L"zBotemToolStripMenuItem";
			this->zBotemToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zBotemToolStripMenuItem->Text = L"z botem";
			this->zBotemToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zBotemToolStripMenuItem_Click);
			// 
			// graSieciowaToolStripMenuItem
			// 
			this->graSieciowaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->uruchomSerwerToolStripMenuItem, 
				this->podlaczSieToolStripMenuItem});
			this->graSieciowaToolStripMenuItem->Name = L"graSieciowaToolStripMenuItem";
			this->graSieciowaToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->graSieciowaToolStripMenuItem->Text = L"Gra sieciowa";
			// 
			// uruchomSerwerToolStripMenuItem
			// 
			this->uruchomSerwerToolStripMenuItem->Name = L"uruchomSerwerToolStripMenuItem";
			this->uruchomSerwerToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->uruchomSerwerToolStripMenuItem->Text = L"uruchom serwer";
			// 
			// podlaczSieToolStripMenuItem
			// 
			this->podlaczSieToolStripMenuItem->Name = L"podlaczSieToolStripMenuItem";
			this->podlaczSieToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->podlaczSieToolStripMenuItem->Text = L"podlacz sie";
			// 
			// A1
			// 
			this->A1->BackColor = System::Drawing::Color::White;
			this->A1->Location = System::Drawing::Point(35, 46);
			this->A1->Name = L"A1";
			this->A1->Size = System::Drawing::Size(50, 50);
			this->A1->TabIndex = 1;
			this->A1->UseVisualStyleBackColor = false;
			this->A1->Visible = false;
			this->A1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Wyslij
			// 
			this->Wyslij->Location = System::Drawing::Point(350, 211);
			this->Wyslij->Name = L"Wyslij";
			this->Wyslij->Size = System::Drawing::Size(75, 23);
			this->Wyslij->TabIndex = 2;
			this->Wyslij->Text = L"Wyslij";
			this->Wyslij->UseVisualStyleBackColor = true;
			// 
			// IPinfo
			// 
			this->IPinfo->AutoSize = true;
			this->IPinfo->Location = System::Drawing::Point(242, 39);
			this->IPinfo->Name = L"IPinfo";
			this->IPinfo->Size = System::Drawing::Size(52, 13);
			this->IPinfo->TabIndex = 3;
			this->IPinfo->Text = L"Twoje IP:";
			// 
			// labelSelfIP
			// 
			this->labelSelfIP->AutoSize = true;
			this->labelSelfIP->Location = System::Drawing::Point(317, 39);
			this->labelSelfIP->Name = L"labelSelfIP";
			this->labelSelfIP->Size = System::Drawing::Size(19, 13);
			this->labelSelfIP->TabIndex = 4;
			this->labelSelfIP->Text = L"----";
			// 
			// labelConnectTo
			// 
			this->labelConnectTo->AutoSize = true;
			this->labelConnectTo->Location = System::Drawing::Point(241, 77);
			this->labelConnectTo->Name = L"labelConnectTo";
			this->labelConnectTo->Size = System::Drawing::Size(66, 13);
			this->labelConnectTo->TabIndex = 5;
			this->labelConnectTo->Text = L"Polacz sie z:";
			// 
			// textIPconnect
			// 
			this->textIPconnect->Location = System::Drawing::Point(317, 77);
			this->textIPconnect->Name = L"textIPconnect";
			this->textIPconnect->Size = System::Drawing::Size(100, 20);
			this->textIPconnect->TabIndex = 6;
			// 
			// textMSG
			// 
			this->textMSG->Location = System::Drawing::Point(244, 214);
			this->textMSG->Name = L"textMSG";
			this->textMSG->Size = System::Drawing::Size(100, 20);
			this->textMSG->TabIndex = 7;
			// 
			// textChat
			// 
			this->textChat->Location = System::Drawing::Point(241, 136);
			this->textChat->Multiline = true;
			this->textChat->Name = L"textChat";
			this->textChat->Size = System::Drawing::Size(173, 72);
			this->textChat->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(242, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(29, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Chat";
			// 
			// A2
			// 
			this->A2->BackColor = System::Drawing::Color::White;
			this->A2->Location = System::Drawing::Point(91, 46);
			this->A2->Name = L"A2";
			this->A2->Size = System::Drawing::Size(50, 50);
			this->A2->TabIndex = 10;
			this->A2->UseVisualStyleBackColor = false;
			this->A2->Visible = false;
			this->A2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// A3
			// 
			this->A3->BackColor = System::Drawing::Color::White;
			this->A3->Location = System::Drawing::Point(147, 46);
			this->A3->Name = L"A3";
			this->A3->Size = System::Drawing::Size(50, 50);
			this->A3->TabIndex = 11;
			this->A3->UseVisualStyleBackColor = false;
			this->A3->Visible = false;
			this->A3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B1
			// 
			this->B1->BackColor = System::Drawing::Color::White;
			this->B1->Location = System::Drawing::Point(35, 102);
			this->B1->Name = L"B1";
			this->B1->Size = System::Drawing::Size(50, 50);
			this->B1->TabIndex = 12;
			this->B1->UseVisualStyleBackColor = false;
			this->B1->Visible = false;
			this->B1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B2
			// 
			this->B2->BackColor = System::Drawing::Color::White;
			this->B2->Location = System::Drawing::Point(91, 102);
			this->B2->Name = L"B2";
			this->B2->Size = System::Drawing::Size(50, 50);
			this->B2->TabIndex = 13;
			this->B2->UseVisualStyleBackColor = false;
			this->B2->Visible = false;
			this->B2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// B3
			// 
			this->B3->BackColor = System::Drawing::Color::White;
			this->B3->Location = System::Drawing::Point(147, 102);
			this->B3->Name = L"B3";
			this->B3->Size = System::Drawing::Size(50, 50);
			this->B3->TabIndex = 14;
			this->B3->UseVisualStyleBackColor = false;
			this->B3->Visible = false;
			this->B3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// C3
			// 
			this->C3->BackColor = System::Drawing::Color::White;
			this->C3->Location = System::Drawing::Point(147, 158);
			this->C3->Name = L"C3";
			this->C3->Size = System::Drawing::Size(50, 50);
			this->C3->TabIndex = 15;
			this->C3->UseVisualStyleBackColor = false;
			this->C3->Visible = false;
			this->C3->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// C2
			// 
			this->C2->BackColor = System::Drawing::Color::White;
			this->C2->Location = System::Drawing::Point(91, 158);
			this->C2->Name = L"C2";
			this->C2->Size = System::Drawing::Size(50, 50);
			this->C2->TabIndex = 16;
			this->C2->UseVisualStyleBackColor = false;
			this->C2->Visible = false;
			this->C2->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// C1
			// 
			this->C1->BackColor = System::Drawing::Color::White;
			this->C1->Location = System::Drawing::Point(35, 158);
			this->C1->Name = L"C1";
			this->C1->Size = System::Drawing::Size(50, 50);
			this->C1->TabIndex = 17;
			this->C1->UseVisualStyleBackColor = false;
			this->C1->Visible = false;
			this->C1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 262);
			this->Controls->Add(this->C1);
			this->Controls->Add(this->C2);
			this->Controls->Add(this->C3);
			this->Controls->Add(this->B3);
			this->Controls->Add(this->B2);
			this->Controls->Add(this->B1);
			this->Controls->Add(this->A3);
			this->Controls->Add(this->A2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textChat);
			this->Controls->Add(this->textMSG);
			this->Controls->Add(this->textIPconnect);
			this->Controls->Add(this->labelConnectTo);
			this->Controls->Add(this->labelSelfIP);
			this->Controls->Add(this->IPinfo);
			this->Controls->Add(this->Wyslij);
			this->Controls->Add(this->A1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"MyForm";
			this->Text = L"UML proj w CPP";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Button^ p = safe_cast<Button^>(sender); 
				 p->Enabled=false;
				 if(tura) {p->Text="X";} else {p->Text="O";}
				 tura=!tura;
				 eot++;
				 checker();
				 if(bot && !tura) AI();
				 //if(MP && tura) {
			 }
private: System::Void zGraczemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 gameStart(1);
		 }
private: System::Void zBotemToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 gameStart(2);
		 }
};
}
