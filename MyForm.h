#pragma once
#include <math.h>
namespace Lab1 {

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
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox3;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(58, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(79, 22);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(59, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(78, 22);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(59, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(78, 22);
			this->textBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Honeydew;
			this->button1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(77, 368);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(151, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Stencil", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(166, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(277, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Обчислити значення функції";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(201, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(225, 62);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-5, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(597, 602);
			this->tabControl1->TabIndex = 9;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->tabPage1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 28);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(589, 570);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 2";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Honeydew;
			this->button4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(368, 368);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(151, 30);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Обчислити";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(54, 168);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(174, 146);
			this->panel1->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"c=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 16);
			this->label3->TabIndex = 11;
			this->label3->Text = L"b=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(10, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(22, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L"a=";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->richTextBox1->Location = System::Drawing::Point(275, 168);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(263, 146);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(239, 109);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(160, 22);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 28);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(589, 570);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 1";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(355, 360);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 34);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(85, 360);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(134, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->richTextBox2->Location = System::Drawing::Point(313, 176);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(217, 165);
			this->richTextBox2->TabIndex = 6;
			this->richTextBox2->Text = L"";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(50, 176);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(211, 165);
			this->panel2->TabIndex = 5;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 9, System::Drawing::FontStyle::Bold));
			this->label7->Location = System::Drawing::Point(30, 15);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 17);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Введіть значення х";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(93, 56);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(66, 22);
			this->textBox4->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 10.2F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(29, 58);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 20);
			this->label6->TabIndex = 4;
			this->label6->Text = L"х=";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(145, 57);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(276, 52);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria Math", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(128, -18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(320, 100);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Обчислення значення функції";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(586, 592);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		double a, b, c, f;
		a = Convert::ToDouble(textBox1->Text);
		b = Convert::ToDouble(textBox2->Text);
		c = Convert::ToDouble(textBox3->Text);
		f = (a * b + (pow(a, c) - cos(a)) / (atan(b)));
		richTextBox1->AppendText("\na=" + textBox1->Text + ", b=" + textBox2->Text + ", c=" + textBox3->Text);
		richTextBox1->AppendText("\nf=" + f.ToString("0.00") + "\r");

	}
private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0,2";
	textBox2->Text = "4,5";
	textBox3->Text = "8";
	richTextBox1->AppendText("Лабораторна робота - Лінійні алгоритми" + "\r\n");
	richTextBox2->AppendText("Лабораторна робота - Лінійні алгоритми" + "\r\n");
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, y;
	x = Convert::ToDouble(textBox4->Text);
	y = ((2*pow(x,2)-1)/(pow(x, 2)+sin(x)))-((2*x+1)/((x+2)*(x+3)));
	richTextBox2->AppendText("\nx=" + textBox4->Text);
	richTextBox2->AppendText("\ny=" + y.ToString("0.00") + "\r");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = " ";
}
};
}
