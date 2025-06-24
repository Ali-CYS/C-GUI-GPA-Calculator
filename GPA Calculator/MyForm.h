#pragma once

namespace final {

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
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox11;








	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox10;


	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBar2;
	private: System::Windows::Forms::TrackBar^ trackBar3;
	private: System::Windows::Forms::TrackBar^ trackBar4;
	private: System::Windows::Forms::TrackBar^ trackBar5;
	private: System::Windows::Forms::TrackBar^ trackBar6;
	private: System::Windows::Forms::TrackBar^ trackBar7;
	private: System::Windows::Forms::TrackBar^ trackBar8;
	private: System::Windows::Forms::TrackBar^ trackBar9;
	private: System::Windows::Forms::TrackBar^ trackBar10;
	private: System::Windows::Forms::TrackBar^ trackBar11;
	private: System::Windows::Forms::TrackBar^ trackBar12;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::TextBox^ textBox29;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::TextBox^ textBox32;
	private: System::Windows::Forms::TextBox^ textBox33;
	private: System::Windows::Forms::TextBox^ textBox34;
	private: System::Windows::Forms::TextBox^ textBox35;
	private: System::Windows::Forms::TextBox^ textBox36;
	private: System::Windows::Forms::TextBox^ textBox37;
	private: System::Windows::Forms::TextBox^ textBox38;
	private: System::Windows::Forms::TextBox^ textBox39;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar7 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar8 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar9 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar10 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar11 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar12 = (gcnew System::Windows::Forms::TrackBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Red;
			this->textBox1->Location = System::Drawing::Point(180, 109);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 38);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::LightYellow;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(685, 109);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(97, 38);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1078, 427);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 38);
			this->label1->TabIndex = 3;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlText;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(1040, 109);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(153, 130);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calculate \r\nGPA";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(1045, 565);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 38);
			this->label2->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::Red;
			this->textBox3->Location = System::Drawing::Point(180, 232);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 38);
			this->textBox3->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::Red;
			this->textBox5->Location = System::Drawing::Point(180, 355);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(91, 38);
			this->textBox5->TabIndex = 4;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->ForeColor = System::Drawing::Color::Red;
			this->textBox7->Location = System::Drawing::Point(180, 460);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(91, 38);
			this->textBox7->TabIndex = 6;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->ForeColor = System::Drawing::Color::Red;
			this->textBox9->Location = System::Drawing::Point(180, 583);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(91, 38);
			this->textBox9->TabIndex = 8;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::Red;
			this->textBox11->Location = System::Drawing::Point(180, 687);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(91, 38);
			this->textBox11->TabIndex = 10;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::LightYellow;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(685, 460);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(97, 38);
			this->textBox8->TabIndex = 7;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::LightYellow;
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(685, 355);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(97, 38);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::LightYellow;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(685, 232);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(97, 38);
			this->textBox4->TabIndex = 3;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::LightYellow;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(685, 584);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(97, 38);
			this->textBox10->TabIndex = 9;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::LightYellow;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(685, 688);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(97, 38);
			this->textBox12->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label3->Location = System::Drawing::Point(1078, 311);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 38);
			this->label3->TabIndex = 13;
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->LargeChange = 1;
			this->trackBar1->Location = System::Drawing::Point(315, 91);
			this->trackBar1->Maximum = 30;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 56);
			this->trackBar1->TabIndex = 20;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 1;
			this->trackBar2->Location = System::Drawing::Point(315, 214);
			this->trackBar2->Maximum = 30;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 56);
			this->trackBar2->TabIndex = 21;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar2_Scroll);
			// 
			// trackBar3
			// 
			this->trackBar3->LargeChange = 1;
			this->trackBar3->Location = System::Drawing::Point(315, 337);
			this->trackBar3->Maximum = 30;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(104, 56);
			this->trackBar3->TabIndex = 22;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar3_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->LargeChange = 1;
			this->trackBar4->Location = System::Drawing::Point(315, 442);
			this->trackBar4->Maximum = 30;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(104, 56);
			this->trackBar4->TabIndex = 23;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar4_Scroll);
			// 
			// trackBar5
			// 
			this->trackBar5->LargeChange = 1;
			this->trackBar5->Location = System::Drawing::Point(315, 565);
			this->trackBar5->Maximum = 30;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(104, 56);
			this->trackBar5->TabIndex = 24;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar5_Scroll);
			// 
			// trackBar6
			// 
			this->trackBar6->LargeChange = 1;
			this->trackBar6->Location = System::Drawing::Point(315, 669);
			this->trackBar6->Maximum = 30;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(104, 56);
			this->trackBar6->TabIndex = 25;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar6_Scroll);
			// 
			// trackBar7
			// 
			this->trackBar7->LargeChange = 1;
			this->trackBar7->Location = System::Drawing::Point(828, 91);
			this->trackBar7->Maximum = 30;
			this->trackBar7->Name = L"trackBar7";
			this->trackBar7->Size = System::Drawing::Size(97, 56);
			this->trackBar7->TabIndex = 26;
			this->trackBar7->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar7_Scroll);
			// 
			// trackBar8
			// 
			this->trackBar8->LargeChange = 1;
			this->trackBar8->Location = System::Drawing::Point(828, 223);
			this->trackBar8->Maximum = 30;
			this->trackBar8->Name = L"trackBar8";
			this->trackBar8->Size = System::Drawing::Size(104, 56);
			this->trackBar8->TabIndex = 27;
			this->trackBar8->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar8_Scroll);
			// 
			// trackBar9
			// 
			this->trackBar9->LargeChange = 1;
			this->trackBar9->Location = System::Drawing::Point(828, 565);
			this->trackBar9->Maximum = 30;
			this->trackBar9->Name = L"trackBar9";
			this->trackBar9->Size = System::Drawing::Size(104, 56);
			this->trackBar9->TabIndex = 28;
			this->trackBar9->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar9_Scroll);
			// 
			// trackBar10
			// 
			this->trackBar10->LargeChange = 1;
			this->trackBar10->Location = System::Drawing::Point(828, 337);
			this->trackBar10->Maximum = 30;
			this->trackBar10->Name = L"trackBar10";
			this->trackBar10->Size = System::Drawing::Size(104, 56);
			this->trackBar10->TabIndex = 28;
			this->trackBar10->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar10_Scroll);
			// 
			// trackBar11
			// 
			this->trackBar11->LargeChange = 1;
			this->trackBar11->Location = System::Drawing::Point(828, 442);
			this->trackBar11->Maximum = 30;
			this->trackBar11->Name = L"trackBar11";
			this->trackBar11->Size = System::Drawing::Size(104, 56);
			this->trackBar11->TabIndex = 29;
			this->trackBar11->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar11_Scroll);
			// 
			// trackBar12
			// 
			this->trackBar12->LargeChange = 1;
			this->trackBar12->Location = System::Drawing::Point(828, 669);
			this->trackBar12->Maximum = 30;
			this->trackBar12->Name = L"trackBar12";
			this->trackBar12->Size = System::Drawing::Size(104, 56);
			this->trackBar12->TabIndex = 30;
			this->trackBar12->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar12_Scroll);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label4->Location = System::Drawing::Point(1043, 674);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 38);
			this->label4->TabIndex = 31;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// textBox13
			// 
			this->textBox13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox13->Location = System::Drawing::Point(12, 110);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(162, 37);
			this->textBox13->TabIndex = 32;
			this->textBox13->Text = L"Grade Points :";
			// 
			// textBox14
			// 
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(12, 233);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(162, 37);
			this->textBox14->TabIndex = 33;
			this->textBox14->Text = L"Grade Points :";
			// 
			// textBox15
			// 
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(12, 688);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(162, 37);
			this->textBox15->TabIndex = 34;
			this->textBox15->Text = L"Grade Points :";
			// 
			// textBox16
			// 
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox16->Location = System::Drawing::Point(12, 584);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(162, 37);
			this->textBox16->TabIndex = 35;
			this->textBox16->Text = L"Grade Points :";
			// 
			// textBox17
			// 
			this->textBox17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox17->Location = System::Drawing::Point(12, 461);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(162, 37);
			this->textBox17->TabIndex = 36;
			this->textBox17->Text = L"Grade Points :";
			// 
			// textBox18
			// 
			this->textBox18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox18->Location = System::Drawing::Point(12, 356);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(162, 37);
			this->textBox18->TabIndex = 37;
			this->textBox18->Text = L"Grade Points :";
			// 
			// textBox19
			// 
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(662, 71);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(160, 34);
			this->textBox19->TabIndex = 38;
			this->textBox19->Text = L"Credit Hours :";
			// 
			// textBox20
			// 
			this->textBox20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox20->Location = System::Drawing::Point(662, 192);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(160, 34);
			this->textBox20->TabIndex = 39;
			this->textBox20->Text = L"Credit Hours :";
			// 
			// textBox21
			// 
			this->textBox21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox21->Location = System::Drawing::Point(662, 304);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(160, 34);
			this->textBox21->TabIndex = 40;
			this->textBox21->Text = L"Credit Hours :";
			// 
			// textBox22
			// 
			this->textBox22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox22->Location = System::Drawing::Point(662, 420);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(160, 34);
			this->textBox22->TabIndex = 41;
			this->textBox22->Text = L"Credit Hours :";
			// 
			// textBox23
			// 
			this->textBox23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox23->Location = System::Drawing::Point(662, 535);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(160, 34);
			this->textBox23->TabIndex = 42;
			this->textBox23->Text = L"Credit Hours :";
			// 
			// textBox24
			// 
			this->textBox24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox24->Location = System::Drawing::Point(662, 631);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(160, 34);
			this->textBox24->TabIndex = 43;
			this->textBox24->Text = L"Credit Hours :";
			// 
			// textBox25
			// 
			this->textBox25->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox25->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox25->Location = System::Drawing::Point(474, 71);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(152, 53);
			this->textBox25->TabIndex = 44;
			this->textBox25->Text = L"Course 1 ";
			// 
			// textBox26
			// 
			this->textBox26->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox26->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox26->Location = System::Drawing::Point(474, 180);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(152, 53);
			this->textBox26->TabIndex = 45;
			this->textBox26->Text = L"Course 2";
			// 
			// textBox27
			// 
			this->textBox27->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox27->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox27->Location = System::Drawing::Point(474, 304);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(152, 53);
			this->textBox27->TabIndex = 46;
			this->textBox27->Text = L"Course 3 ";
			// 
			// textBox28
			// 
			this->textBox28->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox28->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox28->Location = System::Drawing::Point(474, 420);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(152, 53);
			this->textBox28->TabIndex = 47;
			this->textBox28->Text = L"Course 4";
			// 
			// textBox29
			// 
			this->textBox29->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox29->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox29->Location = System::Drawing::Point(474, 535);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(152, 53);
			this->textBox29->TabIndex = 48;
			this->textBox29->Text = L"Course 5";
			// 
			// textBox30
			// 
			this->textBox30->Font = (gcnew System::Drawing::Font(L"Corbel", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox30->ForeColor = System::Drawing::Color::LawnGreen;
			this->textBox30->Location = System::Drawing::Point(474, 660);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(152, 53);
			this->textBox30->TabIndex = 49;
			this->textBox30->Text = L"Course 6";
			// 
			// textBox31
			// 
			this->textBox31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox31->Location = System::Drawing::Point(991, 365);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(226, 34);
			this->textBox31->TabIndex = 50;
			this->textBox31->Text = L"Total Grade Points :\r\n";
			// 
			// textBox32
			// 
			this->textBox32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox32->Location = System::Drawing::Point(991, 619);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(178, 34);
			this->textBox32->TabIndex = 51;
			this->textBox32->Text = L"Your Grade Is :";
			// 
			// textBox33
			// 
			this->textBox33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox33->Location = System::Drawing::Point(991, 510);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(226, 34);
			this->textBox33->TabIndex = 52;
			this->textBox33->Text = L"Total Credit Hours :";
			// 
			// textBox34
			// 
			this->textBox34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox34->Location = System::Drawing::Point(996, 263);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(144, 34);
			this->textBox34->TabIndex = 53;
			this->textBox34->Text = L"Your GPA is\r\n";
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox35->Location = System::Drawing::Point(436, 71);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(7, 714);
			this->textBox35->TabIndex = 54;
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox35_TextChanged);
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox36->Location = System::Drawing::Point(954, 58);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(7, 711);
			this->textBox36->TabIndex = 55;
			// 
			// textBox37
			// 
			this->textBox37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox37->Location = System::Drawing::Point(573, 0);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(322, 45);
			this->textBox37->TabIndex = 56;
			this->textBox37->Text = L"GPA CALCULATOR :";
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox38->Location = System::Drawing::Point(-12, 43);
			this->textBox38->Name = L"textBox38";
			this->textBox38->Size = System::Drawing::Size(1250, 22);
			this->textBox38->TabIndex = 57;
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::SystemColors::Desktop;
			this->textBox39->ForeColor = System::Drawing::SystemColors::Desktop;
			this->textBox39->Location = System::Drawing::Point(641, 81);
			this->textBox39->Multiline = true;
			this->textBox39->Name = L"textBox39";
			this->textBox39->Size = System::Drawing::Size(7, 698);
			this->textBox39->TabIndex = 58;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1234, 738);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->trackBar12);
			this->Controls->Add(this->trackBar11);
			this->Controls->Add(this->trackBar10);
			this->Controls->Add(this->trackBar9);
			this->Controls->Add(this->trackBar8);
			this->Controls->Add(this->trackBar7);
			this->Controls->Add(this->trackBar6);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar12))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		// Parse inputs and calculate Total Grade Points and Credit Hours
		double grade1 = System::Convert::ToDouble(textBox1->Text);
		double credit1 = System::Convert::ToDouble(textBox2->Text);
		double grade2 = System::Convert::ToDouble(textBox3->Text);
		double credit2 = System::Convert::ToDouble(textBox4->Text);
		double grade3 = System::Convert::ToDouble(textBox5->Text);
		double credit3 = System::Convert::ToDouble(textBox6->Text);
		double grade4 = System::Convert::ToDouble(textBox7->Text);
		double credit4 = System::Convert::ToDouble(textBox8->Text);
		double grade5 = System::Convert::ToDouble(textBox9->Text);
		double credit5 = System::Convert::ToDouble(textBox10->Text);
		double grade6 = System::Convert::ToDouble(textBox11->Text);
		double credit6 = System::Convert::ToDouble(textBox12->Text);

		// Calculate Total Grade Points
		double gradepoints =
			(grade1 * credit1) +
			(grade2 * credit2) +
			(grade3 * credit3) +
			(grade4 * credit4) +
			(grade5 * credit5) +
			(grade6 * credit6);

		// Calculate Total Credit Hours
		double credithours = credit1 + credit2 + credit3 + credit4 + credit5 + credit6;

		// Display Total Grade Points and Credit Hours in labels
		label1->Text = System::Convert::ToString(gradepoints); // Total grade points
		label2->Text = System::Convert::ToString(credithours); // Total credit hours

		// Calculate GPA (Grade Points / Credit Hours) and display it
		if (credithours > 0) {
			double gpa = gradepoints / credithours;
			label3->Text = gpa.ToString("F2"); // Display GPA formatted to 2 decimal places
		}
		else {
			label3->Text = "N/A"; // Avoid division by zero
			MessageBox::Show("Error: Total credit hours cannot be zero.", "Calculation Error");
		}
	}
	catch (Exception^ ex) {
		// Handle errors gracefully
		MessageBox::Show("Error: Please ensure all input values are valid numbers.", "Input Error");
	}
	double label3Value = Convert::ToDouble(label3->Text);

	// Check the value and set label4's text accordingly
	if (label3Value >= 4.00) {
		label4->Text = "A";
	}
	else if (label3Value >= 3.50) {
		label4->Text = "B+";
	}
	else if (label3Value >= 3.00) {
		label4->Text = "B";
	}
	else if (label3Value >= 2.50) {
		label4->Text = "C+";
	}
	else if (label3Value >= 2.00) {
		label4->Text = "C";
	}
	else if (label3Value >= 1.50) {
		label4->Text = "D+";
	}
	else if (label3Value >= 1.00) {
		label4->Text = "D";
	}
	else if (label3Value >= 0.00) {
		label4->Text = "F";
	}
	else {
		label4->Text = "Invalid"; // In case of an unexpected value
	}
}




private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = trackBar1->Value.ToString();
}
private: System::Void trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Text = trackBar2->Value.ToString();
}
private: System::Void trackBar7_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox2->Text = trackBar7->Value.ToString();
}
private: System::Void trackBar8_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = trackBar8->Value.ToString();
}
private: System::Void trackBar3_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox5->Text = trackBar3->Value.ToString();
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	//textBox6->Text = trackBar6->Value.ToString();
}
private: System::Void trackBar10_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox6->Text = trackBar10->Value.ToString();
}
private: System::Void trackBar4_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox7->Text = trackBar4->Value.ToString();
}
private: System::Void trackBar11_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox8->Text = trackBar11->Value.ToString();
}
private: System::Void trackBar5_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox9->Text = trackBar5->Value.ToString();
}
private: System::Void trackBar9_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox10->Text = trackBar9->Value.ToString();
}
private: System::Void trackBar6_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox11->Text = trackBar6->Value.ToString();
}
private: System::Void trackBar12_Scroll(System::Object^ sender, System::EventArgs^ e) {
	textBox12->Text = trackBar12->Value.ToString();
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
