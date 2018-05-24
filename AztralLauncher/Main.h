#pragma once
#include "Globals.h"
#include "Login.h"

namespace AztralLauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
			if (Globals::font != nullptr)
			{
				title->Font = gcnew Drawing::Font(Globals::font, 36);
				loading->Font = gcnew Drawing::Font(Globals::font, 15);
				exit->Font = gcnew Drawing::Font(Globals::font, 15);
			}
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  header;
	protected:


	private: System::Windows::Forms::Label^  title;
	private: System::Windows::Forms::Label^  loading;
	private: System::Windows::Forms::Button^  exit;

	private: System::Windows::Forms::Panel^  demoPanel;
	private: System::Windows::Forms::Label^  demo;
	private: System::Windows::Forms::Button^  loggedOut;
	private: System::Windows::Forms::Button^  loggedIn;
	private: System::Windows::Forms::Button^  close;






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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->header = (gcnew System::Windows::Forms::Panel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->loading = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->demoPanel = (gcnew System::Windows::Forms::Panel());
			this->close = (gcnew System::Windows::Forms::Button());
			this->loggedIn = (gcnew System::Windows::Forms::Button());
			this->loggedOut = (gcnew System::Windows::Forms::Button());
			this->demo = (gcnew System::Windows::Forms::Label());
			this->header->SuspendLayout();
			this->demoPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(211)), static_cast<System::Int32>(static_cast<System::Byte>(47)),
				static_cast<System::Int32>(static_cast<System::Byte>(47)));
			this->header->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->header->Controls->Add(this->title);
			this->header->Location = System::Drawing::Point(0, 0);
			this->header->Margin = System::Windows::Forms::Padding(0);
			this->header->Name = L"header";
			this->header->Size = System::Drawing::Size(524, 128);
			this->header->TabIndex = 2;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->title->Location = System::Drawing::Point(33, 35);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(368, 58);
			this->title->TabIndex = 1;
			this->title->Text = L"Aztral Launcher";
			// 
			// loading
			// 
			this->loading->AutoSize = true;
			this->loading->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->loading->Location = System::Drawing::Point(39, 155);
			this->loading->Name = L"loading";
			this->loading->Size = System::Drawing::Size(259, 24);
			this->loading->TabIndex = 0;
			this->loading->Text = L"Loading Launcher settings...";
			// 
			// exit
			// 
			this->exit->FlatAppearance->BorderSize = 0;
			this->exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exit->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15));
			this->exit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->exit->Location = System::Drawing::Point(383, 142);
			this->exit->Margin = System::Windows::Forms::Padding(0);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(113, 51);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Main::exit_Click);
			// 
			// demoPanel
			// 
			this->demoPanel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(225)), static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->demoPanel->Controls->Add(this->close);
			this->demoPanel->Controls->Add(this->loggedIn);
			this->demoPanel->Controls->Add(this->loggedOut);
			this->demoPanel->Controls->Add(this->demo);
			this->demoPanel->Location = System::Drawing::Point(0, 206);
			this->demoPanel->Name = L"demoPanel";
			this->demoPanel->Size = System::Drawing::Size(524, 82);
			this->demoPanel->TabIndex = 4;
			// 
			// close
			// 
			this->close->Location = System::Drawing::Point(255, 27);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(110, 34);
			this->close->TabIndex = 3;
			this->close->Text = L"Close";
			this->close->UseVisualStyleBackColor = true;
			this->close->Click += gcnew System::EventHandler(this, &Main::close_Click);
			// 
			// loggedIn
			// 
			this->loggedIn->Location = System::Drawing::Point(144, 27);
			this->loggedIn->Name = L"loggedIn";
			this->loggedIn->Size = System::Drawing::Size(105, 34);
			this->loggedIn->TabIndex = 2;
			this->loggedIn->Text = L"Logged In";
			this->loggedIn->UseVisualStyleBackColor = true;
			// 
			// loggedOut
			// 
			this->loggedOut->Location = System::Drawing::Point(17, 27);
			this->loggedOut->Name = L"loggedOut";
			this->loggedOut->Size = System::Drawing::Size(120, 34);
			this->loggedOut->TabIndex = 1;
			this->loggedOut->Text = L"Logged out";
			this->loggedOut->UseVisualStyleBackColor = true;
			this->loggedOut->Click += gcnew System::EventHandler(this, &Main::loggedOut_Click);
			// 
			// demo
			// 
			this->demo->AutoSize = true;
			this->demo->Location = System::Drawing::Point(13, 4);
			this->demo->Name = L"demo";
			this->demo->Size = System::Drawing::Size(112, 19);
			this->demo->TabIndex = 0;
			this->demo->Text = L"Demo options:";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 19);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(246)));
			this->ClientSize = System::Drawing::Size(525, 288);
			this->Controls->Add(this->demoPanel);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->loading);
			this->Controls->Add(this->header);
			this->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 1, 3, 1);
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aztral Launcher";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			this->demoPanel->ResumeLayout(false);
			this->demoPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {

	}
private: System::Void loggedOut_Click(System::Object^  sender, System::EventArgs^  e) {
	(gcnew Login(this))->Show();
	Hide();
}
private: System::Void close_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void exit_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
