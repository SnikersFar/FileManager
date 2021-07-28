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
	/// —водка дл€ bazeform
	/// </summary>
	public ref class bazeform : public System::Windows::Forms::Form
	{
	public:
		bazeform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
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
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
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
