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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;

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
			this->graSieciowaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zGraczemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zBotemToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uruchomSerwerToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->podlaczSieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->graLokalnaToolStripMenuItem, 
				this->graSieciowaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(666, 24);
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
			// graSieciowaToolStripMenuItem
			// 
			this->graSieciowaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->uruchomSerwerToolStripMenuItem, 
				this->podlaczSieToolStripMenuItem});
			this->graSieciowaToolStripMenuItem->Name = L"graSieciowaToolStripMenuItem";
			this->graSieciowaToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->graSieciowaToolStripMenuItem->Text = L"Gra sieciowa";
			// 
			// zGraczemToolStripMenuItem
			// 
			this->zGraczemToolStripMenuItem->Name = L"zGraczemToolStripMenuItem";
			this->zGraczemToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zGraczemToolStripMenuItem->Text = L"z graczem";
			// 
			// zBotemToolStripMenuItem
			// 
			this->zBotemToolStripMenuItem->Name = L"zBotemToolStripMenuItem";
			this->zBotemToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->zBotemToolStripMenuItem->Text = L"z botem";
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
			// button1
			// 
			this->button1->Location = System::Drawing::Point(35, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(590, 227);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(482, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(557, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(481, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(557, 93);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(484, 230);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(481, 152);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(173, 20);
			this->textBox3->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(482, 136);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(666, 262);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
	};
}
