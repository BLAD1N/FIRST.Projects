#pragma once

namespace KaifBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btn_poisk;
	private: System::Windows::Forms::TextBox^ Vvod_box;
	protected:

	protected:


	private: System::Windows::Forms::WebBrowser^ WebConsole;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->btn_poisk = (gcnew System::Windows::Forms::Button());
			this->Vvod_box = (gcnew System::Windows::Forms::TextBox());
			this->WebConsole = (gcnew System::Windows::Forms::WebBrowser());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn_poisk
			// 
			this->btn_poisk->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)));
			this->btn_poisk->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btn_poisk->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_poisk->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_poisk->Font = (gcnew System::Drawing::Font(L"Gadugi", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_poisk->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->btn_poisk->Location = System::Drawing::Point(1377, 559);
			this->btn_poisk->Name = L"btn_poisk";
			this->btn_poisk->Size = System::Drawing::Size(112, 44);
			this->btn_poisk->TabIndex = 0;
			this->btn_poisk->Text = L"Найти";
			this->btn_poisk->UseVisualStyleBackColor = false;
			this->btn_poisk->Click += gcnew System::EventHandler(this, &MyForm::btn_poisk_Click);
			// 
			// Vvod_box
			// 
			this->Vvod_box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->Vvod_box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Vvod_box->Font = (gcnew System::Drawing::Font(L"Gadugi", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Vvod_box->ForeColor = System::Drawing::Color::DimGray;
			this->Vvod_box->Location = System::Drawing::Point(451, 559);
			this->Vvod_box->Multiline = true;
			this->Vvod_box->Name = L"Vvod_box";
			this->Vvod_box->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->Vvod_box->Size = System::Drawing::Size(928, 44);
			this->Vvod_box->TabIndex = 2;
			this->Vvod_box->Text = L" Введите свой поисковый запрос : ";
			this->Vvod_box->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Vvod_box->Click += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->Vvod_box->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// WebConsole
			// 
			this->WebConsole->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WebConsole->Location = System::Drawing::Point(487, 569);
			this->WebConsole->MinimumSize = System::Drawing::Size(20, 20);
			this->WebConsole->Name = L"WebConsole";
			this->WebConsole->Size = System::Drawing::Size(341, 28);
			this->WebConsole->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(0, 0);
			this->button1->TabIndex = 4;
			this->button1->Text = L"🔚";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Location = System::Drawing::Point(3, 3);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(0, 0, 1, 0);
			this->button2->Size = System::Drawing::Size(0, 0);
			this->button2->TabIndex = 5;
			this->button2->Text = L"<<";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(41)));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Location = System::Drawing::Point(68, 3);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(4, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(0, 0);
			this->button3->TabIndex = 6;
			this->button3->Text = L">>";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(27)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(27)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 1061);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btn_poisk);
			this->Controls->Add(this->Vvod_box);
			this->Controls->Add(this->WebConsole);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"KAIF Browser";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: 
			String^ url_back; 
			String^ url_fd; 

	private: System::Void btn_poisk_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->url_back = Convert::ToString(this->WebConsole->Url); 

		this->WebConsole->Navigate(this->Vvod_box->Text); 
		this->Text = "Browser - " + this->Vvod_box->Text; 

		this->WebConsole->Location = System::Drawing::Point(-1, 48);
		this->WebConsole->Size = System::Drawing::Size(1926, 1021);
		this->Vvod_box->Size = System::Drawing::Size(1818, 44);
		this->Vvod_box->Location = System::Drawing::Point(-1, 2);
		this->btn_poisk->Location = System::Drawing::Point(1807, 2);

		if(this->Vvod_box->Text == " ")
		{
			this->Vvod_box->Text == "Введите корректный запрос : "; 
		}

		this->button2->Size = System::Drawing::Size(63, 43);
		this->button3->Size = System::Drawing::Size(63, 43);

	}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
		if (this->Vvod_box->Text == " Введите свой поисковый запрос : ")
		{
			Vvod_box->Clear();
			Vvod_box->ForeColor = Color::WhiteSmoke;
		}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->url_back = Convert::ToString(this->WebConsole->Url);
	this->WebConsole->Navigate(this->url_fd); 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->url_fd = Convert::ToString(this->WebConsole->Url);
	this->WebConsole->Navigate(this->url_back);
}
};
}