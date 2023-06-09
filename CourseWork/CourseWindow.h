#pragma once


#include "Header.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <regex>

namespace CourseWork {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CourseWindow
	/// </summary>
	public ref class CourseWindow : public System::Windows::Forms::Form
	{
	public:
		CourseWindow(void)
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
		~CourseWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox_A;
	private: System::Windows::Forms::TextBox^ textBox_B;
	private: System::Windows::Forms::TextBox^ textBox_C;



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: String^ first_c = " ";
	private: String^ second_c = " ";
	private: String^ third_c = " ";
	private: System::Windows::Forms::Label^ label_answer;
	private: System::Windows::Forms::Label^ label_main;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_podbor;
	private: System::Windows::Forms::Button^ button2;











	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CourseWindow::typeid));
			this->textBox_A = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B = (gcnew System::Windows::Forms::TextBox());
			this->textBox_C = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->label_main = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_podbor = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(119, 192);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(60, 20);
			this->textBox_A->TabIndex = 2;
			this->textBox_A->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_A_TextChanged);
			// 
			// textBox_B
			// 
			this->textBox_B->BackColor = System::Drawing::Color::White;
			this->textBox_B->Location = System::Drawing::Point(273, 192);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(60, 20);
			this->textBox_B->TabIndex = 3;
			this->textBox_B->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_B_TextChanged);
			// 
			// textBox_C
			// 
			this->textBox_C->BackColor = System::Drawing::Color::White;
			this->textBox_C->Location = System::Drawing::Point(449, 191);
			this->textBox_C->Name = L"textBox_C";
			this->textBox_C->Size = System::Drawing::Size(60, 20);
			this->textBox_C->TabIndex = 4;
			this->textBox_C->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_C_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(183, 266);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Решить уравнение";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CourseWindow::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(90, 195);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"А - ";
			this->label1->Click += gcnew System::EventHandler(this, &CourseWindow::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(244, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"В - ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(420, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"С - ";
			// 
			// label_answer
			// 
			this->label_answer->BackColor = System::Drawing::Color::White;
			this->label_answer->Location = System::Drawing::Point(83, 337);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(424, 32);
			this->label_answer->TabIndex = 10;
			this->label_answer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_answer->Click += gcnew System::EventHandler(this, &CourseWindow::label_answer_Click);
			// 
			// label_main
			// 
			this->label_main->BackColor = System::Drawing::Color::White;
			this->label_main->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_main->Location = System::Drawing::Point(82, 106);
			this->label_main->Name = L"label_main";
			this->label_main->Size = System::Drawing::Size(424, 30);
			this->label_main->TabIndex = 11;
			this->label_main->Text = L"Ax^2 + Bx + C = 0";
			this->label_main->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(82, 53);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(424, 30);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Введите коэффициенты для уравнения:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label5->Click += gcnew System::EventHandler(this, &CourseWindow::label5_Click);
			// 
			// label_podbor
			// 
			this->label_podbor->BackColor = System::Drawing::Color::White;
			this->label_podbor->Location = System::Drawing::Point(85, 393);
			this->label_podbor->Name = L"label_podbor";
			this->label_podbor->Size = System::Drawing::Size(422, 32);
			this->label_podbor->TabIndex = 13;
			this->label_podbor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_podbor->Click += gcnew System::EventHandler(this, &CourseWindow::label_podbor_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Location = System::Drawing::Point(574, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 26);
			this->button2->TabIndex = 14;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CourseWindow::button2_Click);
			// 
			// CourseWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(600, 460);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label_podbor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_main);
			this->Controls->Add(this->label_answer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_C);
			this->Controls->Add(this->textBox_B);
			this->Controls->Add(this->textBox_A);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CourseWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вычисления корней квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//проверка на запрещенные символы
		bool IsStringNumeric(String^ input)
		{
			std::string strInput = msclr::interop::marshal_as<std::string>(input);

			try
			{
				// Преобразование строки в число
				std::stod(strInput);
				return true;
			}
			catch (const std::exception&)
			{
				return false;
			}
		}

		//проверка, является ли строка только нулями
		bool IsStringAllZeros(String^ text) {
			if (text->Length > 1) {
				for (int i = 0; i < text->Length; i++) {
					if (text[i] != '0') {
						return false;
					}
				}
				return true;
			}
			return false;
		}

		//преобразование double в string
		String^ ConvertDoubleToString(double value)
		{
			// Преобразование double в String^ с помощью метода System::Convert::ToString()
			String^ str = Convert::ToString(value);

			return str;
		}

		//преобразование String^ в string
		String^ ConvertToManagedString(const std::string& nativeString)
		{
			return msclr::interop::marshal_as<String^>(nativeString);
		}

		//преобразование string в double
		double ConvertStringToDouble(String^ str)
		{
			// Преобразование System::String^ в std::string
			std::string stdStr = msclr::interop::marshal_as<std::string>(str);

			// Преобразование std::string в double
			double result = std::stod(stdStr);

			return result;
		}



	private: System::Void textBox_A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		first_c = textBox_A->Text;
	}
	private: System::Void textBox_B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		second_c = textBox_B->Text;
	}
	private: System::Void textBox_C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		third_c = textBox_C->Text;
	}




	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		if (IsStringNumeric(first_c) && IsStringNumeric(second_c) && IsStringNumeric(third_c)) {

			if (IsStringAllZeros(first_c) || IsStringAllZeros(second_c) || IsStringAllZeros(third_c)) {
				MessageBox::Show("Неправильно введены коэффициенты!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			//1
			if (first_c == "0" && second_c == "0" && third_c == "0") {
				type1 eq1;
				label_answer->Text = ConvertToManagedString(eq1.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
				label_main->Text = ConvertToManagedString(eq1.show());
			}
			//2
			else if (first_c != "0" && second_c == "0" && third_c == "0") {
				type2 eq2(Convert::ToInt32(first_c));
				label_answer->Text = ConvertToManagedString(eq2.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
				label_main->Text = ConvertToManagedString(eq2.show());
			}
			//3
			else if (first_c == "0" && second_c == "0" && third_c != "0") {
				type3 eq3(Convert::ToInt32(third_c));;
				label_answer->Text = ConvertToManagedString(eq3.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
				label_main->Text = ConvertToManagedString(eq3.show());
			}
			//4
			else if (first_c != "0" && second_c == "0" && third_c != "0") {
				type4 eq4(Convert::ToInt32(first_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq4.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq4.Get_answer_podbor());
				label_main->Text = ConvertToManagedString(eq4.show());
			}
			//5
			else if (first_c == "0" && second_c != "0" && third_c != "0") {
				type5 eq5(Convert::ToInt32(second_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq5.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq5.Get_answer_podbor());
				label_main->Text = ConvertToManagedString(eq5.show());
			}
			//6
			else if (first_c != "0" && second_c != "0" && third_c != "0") {
				type6 eq6(Convert::ToInt32(first_c), Convert::ToInt32(second_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq6.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq6.Get_answer_podbor());
				label_main->Text = ConvertToManagedString(eq6.show());
			}
			//7
			else if (first_c == "0" && second_c != "0" && third_c == "0") {
				type7 eq7(Convert::ToInt32(second_c));
				label_answer->Text = ConvertToManagedString(eq7.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
				label_main->Text = ConvertToManagedString(eq7.show());
			}
			//8
			else if (first_c != "0" && second_c != "0" && third_c == "0") {
				type8 eq8(Convert::ToInt32(first_c), Convert::ToInt32(second_c));
				label_answer->Text = ConvertToManagedString(eq8.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq8.Get_answer_podbor());
				label_main->Text = ConvertToManagedString(eq8.show());
			}
		}

		else {
			MessageBox::Show("Неправильно введены коэффициенты!                                    Введите коэффициенты повторно", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void label_answer_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_podbor_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


