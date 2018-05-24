#pragma once
#include "Globals.h"

namespace AztralLauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			if (Globals::font != nullptr)
			{
				title->Font = gcnew Drawing::Font(Globals::font, 16);
			}
		}
		Login(Form^ previous) : Login()
		{
			this->previous = previous;
		}

		Form^ previous;


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  header;
	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::TextBox^  username;
	private: System::Windows::Forms::TextBox^  password;
	private: System::Windows::Forms::Label^  labelUsername;
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::Button^  loginButton;

	private: System::Windows::Forms::Button^  free;
	private: System::Windows::Forms::Button^  demo;


	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->header = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->labelUsername = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->free = (gcnew System::Windows::Forms::Button());
			this->demo = (gcnew System::Windows::Forms::Button());
			this->header->SuspendLayout();
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->header->Controls->Add(this->title);
			this->header->Location = System::Drawing::Point(0, 0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(524, 47);
			this->header->TabIndex = 0;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 16));
			this->title->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->title->Location = System::Drawing::Point(29, 9);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(145, 27);
			this->title->TabIndex = 0;
			this->title->Text = L"Aztral - Login";
			// 
			// username
			// 
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->username->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->username->Location = System::Drawing::Point(30, 81);
			this->username->MaxLength = 400;
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(236, 27);
			this->username->TabIndex = 1;
			this->username->Text = L"Username...";
			this->username->Enter += gcnew System::EventHandler(this, &Login::username_Enter);
			this->username->Leave += gcnew System::EventHandler(this, &Login::username_Leave);
			// 
			// password
			// 
			this->password->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->password->Location = System::Drawing::Point(30, 142);
			this->password->MaxLength = 400;
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(236, 27);
			this->password->TabIndex = 2;
			this->password->Text = L"Password...";
			this->password->Enter += gcnew System::EventHandler(this, &Login::password_Enter);
			this->password->Leave += gcnew System::EventHandler(this, &Login::password_Leave);
			// 
			// labelUsername
			// 
			this->labelUsername->AutoSize = true;
			this->labelUsername->Location = System::Drawing::Point(30, 59);
			this->labelUsername->Name = L"labelUsername";
			this->labelUsername->Size = System::Drawing::Size(84, 19);
			this->labelUsername->TabIndex = 3;
			this->labelUsername->Text = L"Username";
			// 
			// labelPassword
			// 
			this->labelPassword->AutoSize = true;
			this->labelPassword->Location = System::Drawing::Point(30, 120);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(141, 19);
			this->labelPassword->TabIndex = 4;
			this->labelPassword->Text = L"Account password";
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(43)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->loginButton->FlatAppearance->BorderSize = 0;
			this->loginButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->loginButton->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->loginButton->Location = System::Drawing::Point(312, 81);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(75, 27);
			this->loginButton->TabIndex = 5;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			// 
			// free
			// 
			this->free->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(102)),
				static_cast<System::Int32>(static_cast<System::Byte>(89)));
			this->free->FlatAppearance->BorderSize = 0;
			this->free->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->free->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->free->Location = System::Drawing::Point(409, 81);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(75, 27);
			this->free->TabIndex = 6;
			this->free->Text = L"Free";
			this->free->UseVisualStyleBackColor = false;
			// 
			// demo
			// 
			this->demo->Location = System::Drawing::Point(312, 142);
			this->demo->Name = L"demo";
			this->demo->Size = System::Drawing::Size(172, 27);
			this->demo->TabIndex = 7;
			this->demo->Text = L"Demo - Back";
			this->demo->UseVisualStyleBackColor = true;
			this->demo->Click += gcnew System::EventHandler(this, &Login::demo_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 181);
			this->Controls->Add(this->demo);
			this->Controls->Add(this->free);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelUsername);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->header);
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(0);
			this->MaximizeBox = false;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aztral - Login";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Login::form_closed);
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void form_closed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}
	private: System::Void username_Enter(System::Object^  sender, System::EventArgs^  e) {
		if (username->Text == "Username...")
		{
			username->Text = "";
			username->ForeColor = System::Drawing::SystemColors::ControlText;
		}
	}
private: System::Void username_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (username->Text == "")
	{
		username->Text = "Username...";
		username->ForeColor = System::Drawing::SystemColors::ControlDark;
	}
}
private: System::Void password_Enter(System::Object^  sender, System::EventArgs^  e) {
	if (password->Text == "Password...")
	{
		password->Text = "";
		password->ForeColor = System::Drawing::SystemColors::ControlText;
	}
}
private: System::Void password_Leave(System::Object^  sender, System::EventArgs^  e) {
	if (password->Text == "")
	{
		password->Text = "Password...";
		password->ForeColor = System::Drawing::SystemColors::ControlDark;
	}
}
private: System::Void demo_Click(System::Object^  sender, System::EventArgs^  e) {
	if (previous != nullptr)
	{
		previous->Show();
		Hide();
	} else Close();
}
};
}
