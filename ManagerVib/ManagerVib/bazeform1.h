#pragma once
#include "MyForm.h"
namespace ManagerVib {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� bazeform
	/// </summary>
	public ref class bazeform : public System::Windows::Forms::Form
	{
	public:
		bazeform(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~bazeform()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// bazeform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"bazeform";
			this->Text = L"bazeform";
			this->Load += gcnew System::EventHandler(this, &bazeform::bazeform_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bazeform_Load(System::Object^ sender, System::EventArgs^ e) {

		// loading
		MyForm^ start = gcnew MyForm();
		start->Show();
		//this->Hide();
		bazeform::Hide();


	}
	};
}
