#pragma once
#include <cmath>
#include <math.h>
#include "MyForm1.h"
double xn, xk, xh, x, y, a, ymax, ymin, yt;

int i, k, j;
int h;
int m;
namespace Five {
	using namespace System::Windows::Forms::DataVisualization::Charting;
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ таблицаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветТекстаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаЯчеекToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ высотаСтрокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ширинаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ параметрыШрифтаЗаголовкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветШрифтаЗаголовкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ графикToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ цветФонаГрафикаToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem1;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->таблицаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветТекстаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаЯчеекToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->высотаСтрокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ширинаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->параметрыШрифтаЗаголовкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветШрифтаЗаголовкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->графикToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->цветФонаГрафикаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->файлToolStripMenuItem,
					this->видToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(454, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem,
					this->выходToolStripMenuItem1
			});
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem
			// 
			this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem->Name = L"сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem";
			this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem->Size = System::Drawing::Size(320, 22);
			this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem->Text = L"Сохранить данные таблицы в файл     Ctrl+S ";
			this->сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem1
			// 
			this->выходToolStripMenuItem1->Name = L"выходToolStripMenuItem1";
			this->выходToolStripMenuItem1->Size = System::Drawing::Size(320, 22);
			this->выходToolStripMenuItem1->Text = L"Выход";
			this->выходToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem1_Click);
			// 
			// видToolStripMenuItem
			// 
			this->видToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->таблицаToolStripMenuItem,
					this->графикToolStripMenuItem
			});
			this->видToolStripMenuItem->Name = L"видToolStripMenuItem";
			this->видToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->видToolStripMenuItem->Text = L"Вид";
			// 
			// таблицаToolStripMenuItem
			// 
			this->таблицаToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->цветТекстаToolStripMenuItem,
					this->цветФонаЯчеекToolStripMenuItem, this->высотаСтрокToolStripMenuItem, this->ширинаToolStripMenuItem, this->параметрыШрифтаЗаголовкаToolStripMenuItem,
					this->цветШрифтаЗаголовкаToolStripMenuItem
			});
			this->таблицаToolStripMenuItem->Name = L"таблицаToolStripMenuItem";
			this->таблицаToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->таблицаToolStripMenuItem->Text = L"Таблица";
			// 
			// цветТекстаToolStripMenuItem
			// 
			this->цветТекстаToolStripMenuItem->Name = L"цветТекстаToolStripMenuItem";
			this->цветТекстаToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->цветТекстаToolStripMenuItem->Text = L"Цвет текста";
			this->цветТекстаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветТекстаToolStripMenuItem_Click);
			// 
			// цветФонаЯчеекToolStripMenuItem
			// 
			this->цветФонаЯчеекToolStripMenuItem->Name = L"цветФонаЯчеекToolStripMenuItem";
			this->цветФонаЯчеекToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->цветФонаЯчеекToolStripMenuItem->Text = L"Цвет фона ячеек";
			this->цветФонаЯчеекToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветФонаЯчеекToolStripMenuItem_Click);
			// 
			// высотаСтрокToolStripMenuItem
			// 
			this->высотаСтрокToolStripMenuItem->Name = L"высотаСтрокToolStripMenuItem";
			this->высотаСтрокToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->высотаСтрокToolStripMenuItem->Text = L"Высота строк";
			this->высотаСтрокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::высотаСтрокToolStripMenuItem_Click);
			// 
			// ширинаToolStripMenuItem
			// 
			this->ширинаToolStripMenuItem->Name = L"ширинаToolStripMenuItem";
			this->ширинаToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->ширинаToolStripMenuItem->Text = L"Ширина столбцов";
			this->ширинаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ширинаToolStripMenuItem_Click);
			// 
			// параметрыШрифтаЗаголовкаToolStripMenuItem
			// 
			this->параметрыШрифтаЗаголовкаToolStripMenuItem->Name = L"параметрыШрифтаЗаголовкаToolStripMenuItem";
			this->параметрыШрифтаЗаголовкаToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->параметрыШрифтаЗаголовкаToolStripMenuItem->Text = L"Параметры шрифта заголовка";
			this->параметрыШрифтаЗаголовкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::параметрыШрифтаЗаголовкаToolStripMenuItem_Click);
			// 
			// цветШрифтаЗаголовкаToolStripMenuItem
			// 
			this->цветШрифтаЗаголовкаToolStripMenuItem->Name = L"цветШрифтаЗаголовкаToolStripMenuItem";
			this->цветШрифтаЗаголовкаToolStripMenuItem->Size = System::Drawing::Size(244, 22);
			this->цветШрифтаЗаголовкаToolStripMenuItem->Text = L"Цвет шрифта заголовка";
			this->цветШрифтаЗаголовкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветШрифтаЗаголовкаToolStripMenuItem_Click);
			// 
			// графикToolStripMenuItem
			// 
			this->графикToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->цветToolStripMenuItem,
					this->цветФонаГрафикаToolStripMenuItem
			});
			this->графикToolStripMenuItem->Name = L"графикToolStripMenuItem";
			this->графикToolStripMenuItem->Size = System::Drawing::Size(120, 22);
			this->графикToolStripMenuItem->Text = L"График";
			// 
			// цветToolStripMenuItem
			// 
			this->цветToolStripMenuItem->Name = L"цветToolStripMenuItem";
			this->цветToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->цветToolStripMenuItem->Text = L"Цвет графика";
			this->цветToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветToolStripMenuItem_Click);
			// 
			// цветФонаГрафикаToolStripMenuItem
			// 
			this->цветФонаГрафикаToolStripMenuItem->Name = L"цветФонаГрафикаToolStripMenuItem";
			this->цветФонаГрафикаToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->цветФонаГрафикаToolStripMenuItem->Text = L"Цвет фона графика";
			this->цветФонаГрафикаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::цветФонаГрафикаToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(13, 28);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(429, 355);
			this->tabControl1->TabIndex = 1;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(421, 329);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ввод данных";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(267, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(267, 169);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(267, 143);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave_1);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(267, 117);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->Leave += gcnew System::EventHandler(this, &MyForm::textBox1_Leave);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(197, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Введите положительное значение A=";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(95, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Введите шаг XH=";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 146);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Введите конечное значение XK=";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(179, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Введите начальное значение XN=";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(106, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ввод данных промежутка";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox5);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(421, 329);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Таблица данных промежутка";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(262, 269);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(262, 189);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(226, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(174, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Минимальное значение функции";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(223, 154);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 13);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Максимальное значение функции";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(19, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(384, 16);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Таблица значений функции на промежутке[XN;XK]";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 57);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(203, 266);
			this->dataGridView1->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(421, 329);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"График функции на промежутке";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(24, 23);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->IsVisibleInLegend = false;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(379, 284);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button1->Location = System::Drawing::Point(12, 389);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(430, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(454, 424);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void выходToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	double xn, xk, xh, x, y, a, ymax, ymin, yt;
	int n, i;
	Series^ plot1 = chart1->Series[0];
	plot1->Points->Clear();
	if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3 -> Text != "") && (textBox4->Text != "")) {
		xn = Convert::ToDouble(textBox1->Text);
		xk = Convert::ToDouble(textBox2->Text);
		xh = Convert::ToDouble(textBox3->Text); 
		a  = Convert::ToDouble(textBox4->Text);

		if ((xn >= xk) || (xh > (xk - xn))) {
			MessageBox::Show("Данные заполнены неверно", "Ошибка ввода данных", MessageBoxButtons::OK,

				MessageBoxIcon::Exclamation);
		}
		else
		{
			x = xn;
dataGridView1->Columns->Clear();
//Заполнение DGView столбцами
dataGridView1->ColumnCount = 2;
//Заполнение DGView строками
dataGridView1->Rows->Add(ceil((xk-xn) / xh) + 1); 
dataGridView1->Rows[0]->Cells[0]->Value= Convert::ToString(" x");
dataGridView1->Rows[0]->Cells[1]->Value = Convert::ToString("Y");
	i = 0,11; x = xn; ymax = 8,5; ymin = -3,7; 
	while (x <= xk)
{
		if (x <= 0) { y = pow(fabs(x), (x + 2)) + sin(x); }
	else
		if (x <= a) { y = pow(3,(x + 3)) + x + x; }
		else
			if (x > a) { y = pow(pow(x,2) + x + 1, 1/5); }
	plot1->Points->AddXY(x, y);
	dataGridView1->Rows[i]->Cells[0]->Value = Convert::ToString(x);
	//переменной yt присваивает округленное до двух знаков после запятой значение у
	yt = ceil(y * 100) / 100;
	//Вывод во втором столбце таблицы значение функции
	dataGridView1->Rows[i]->Cells[1]->Value
		= Convert::ToString(yt);
	//находит максимальное и минимальное значение и округляет до двух знаков после запятой if (y > ymax) ymax = ceil(y * 100) / 100;
	if (y < ymin) ymin = ceil(y * 100) / 100;
	x = x + xh;
	i++;
}
		}
		//выводит в компоненты textbox максимальное и минимальное значение функции
		textBox5->Text = Convert::ToString(ymax);
		textBox6->Text = Convert::ToString(ymin);
	}
	else
	{
		MessageBox::Show("Заполните, пожалуйста, данные", "Ошибка вводаданных",MessageBoxButtons::OK,MessageBoxIcon::Exclamation );}
}
private: System::Void цветТекстаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog;
	if (colorDialog1->ShowDialog() == System::Windows:: Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle->ForeColor = colorDialog1 -> Color;
	}
}
private: System::Void цветФонаЯчеекToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog;
	if (colorDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		dataGridView1->DefaultCellStyle -> BackColor = colorDialog1->Color;
	}
}
private: System::Void высотаСтрокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f = gcnew MyForm1();
	this->Hide(); f -> ShowDialog(); this -> Show();
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		DataGridViewRow^ row = dataGridView1->Rows[i];
		row->Height = h;
	}
}
private: System::Void ширинаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MyForm1^ f = gcnew MyForm1();
	this->Hide(); f -> ShowDialog(); this -> Show();
	for (int i = 0; i < dataGridView1->ColumnCount; i++)
	{
		DataGridViewColumn^ column = dataGridView1->Columns[i];
		column->Width = m;
	}
}
private: System::Void параметрыШрифтаЗаголовкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	FontDialog^ fontDialog1 = gcnew FontDialog;
	if (fontDialog1 -> ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		label6->Font = fontDialog1->Font;
	}
}
private: System::Void цветШрифтаЗаголовкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	ColorDialog^ colorDialog1 = gcnew ColorDialog;
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK)
	{
		label6->ForeColor = colorDialog1->Color;
	}
}
private: System::Void цветToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	ColorDialog^ colorDialog1 = gcnew ColorDialog;
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK)
		plot1->Color = colorDialog1->Color;
}
private: System::Void цветФонаГрафикаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Series^ plot1 = chart1->Series[0];
	ColorDialog^ colorDialog1 = gcnew ColorDialog;
	if (colorDialog1->ShowDialog() == System:: Windows::Forms::DialogResult::OK) {
		chart1 -> BackColor = colorDialog1->Color;
	}
}
private: System::Void сохранитьДанныеТаблицыВФайлCtrlSToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2; saveFileDialog1 -> RestoreDirectory = true; 
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms:: DialogResult::OK)
	{
		StreamWriter^ pwriter = gcnew StreamWriter(saveFileDialog1->FileName);
		for (int i = 0; i < dataGridView1->RowCount; i++) pwriter -> WriteLine(dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "| "+dataGridView1->Rows[i]->Cells[1]->Value->ToString());
			pwriter->Close();
	}
}
private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà

		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'

		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð Õ íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox2->Focus();
	}
}
private: System::Void textBox2_Leave_1(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà

		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'

		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð Õ íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox2->Focus();
	}
}
private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà

		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'

		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð Õ íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox2->Focus();
	}
}
private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox1->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì 
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà
		{
			if (t == l - 1 || k > 0) a = false; k++;

		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'
		else if (str[t] < '0' || str[t] > '9') a = false;

		t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð À íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox1->Focus();
	}
}
private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
	int l, t, k; bool a = true; String^ str; str = textBox2->Text;
	l = str->Length;
	//èíäåêñ ñèìâîëà, ñ êîòîðûì ðàáîòàåì
	t = 0;
	//êîëëè÷åñòâî çàïÿòûõ â ñòðîêå (äàáû èçáåæàòü âàðèàíòà 0, 2384, 1254, 1251 – ýòî íå ÷èñëî) 
	k = 0;
	//äâèãàåì èíäåêñàòîð, åñëè íàøå ÷èñëî îòðèöàòåëüíîå 
	if (str[t] == '-') t++;
	//÷èñëî íå ìîæåò íà÷èíàòüñÿ ñ çàïÿòîé 
	if (str[t] == ',') a = false; while (t < l)
	{
		if (str[t] == ',')
			//åñëè çàïÿòàÿ ñòîèò ïîñëåäíèì ñèìâîëîì èëè çàïÿòàÿ óæå áûëà íàéäåíà

		{
			if (t == l - 1 || k > 0) a = false; k++;
		}

		//åñëè t-ûé ñèìâîë íå ëåæèò â äèàïàçîíå îò '0' äî '9'

		else if (str[t] < '0' || str[t]>'9') a = false; t++;
	}
	if (a == false)
	{
		MessageBox::Show("ïàðàìåòð Õ íå ÿâëÿåòñÿ ÷èñëîì", "Îøèáêà ââîäà äàííûõ", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		//âîçâðàò ôîêóñà òåêñòîâîìó ïîëþ this->textBox2->Focus();
	}
}
};
}
