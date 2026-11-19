#pragma once

namespace lab3 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Drawing::Drawing2D;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            SetupIcons();
            SetupGrid();
        }

    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::Label^ labelTitle;
    private: System::Windows::Forms::Label^ labelFormula;

    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ розрахунокToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ очиститиToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ розрахуватиToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ вихідToolStripMenuItem;

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code

        void InitializeComponent(void)
        {
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->labelTitle = (gcnew System::Windows::Forms::Label());
            this->labelFormula = (gcnew System::Windows::Forms::Label());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->розрахунокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->очиститиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->розрахуватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();

            // labelTitle
            this->labelTitle->AutoSize = true;
            this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
            this->labelTitle->Location = System::Drawing::Point(20, 40);
            this->labelTitle->Name = L"labelTitle";
            this->labelTitle->Size = System::Drawing::Size(400, 20);
            this->labelTitle->TabIndex = 0;
            this->labelTitle->Text = L"Варіант 11. Питома потужність генераторів";

            // labelFormula
            this->labelFormula->AutoSize = true;
            this->labelFormula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->labelFormula->Location = System::Drawing::Point(20, 70);
            this->labelFormula->Name = L"labelFormula";
            this->labelFormula->Size = System::Drawing::Size(300, 20);
            this->labelFormula->TabIndex = 1;
            this->labelFormula->Text = L"P_питома = P (кВт) / m (кг)";

            // dataGridView1
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Location = System::Drawing::Point(20, 110);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->Size = System::Drawing::Size(560, 350);
            this->dataGridView1->TabIndex = 2;

            // menuStrip1
            this->menuStrip1->Items->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem^>(1) { this->розрахунокToolStripMenuItem });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(620, 24);
            this->menuStrip1->TabIndex = 3;
            this->menuStrip1->Text = L"menuStrip1";

            // розрахунокToolStripMenuItem
            this->розрахунокToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem^>(3) { this->очиститиToolStripMenuItem, this->розрахуватиToolStripMenuItem, this->вихідToolStripMenuItem });
            this->розрахунокToolStripMenuItem->Name = L"розрахунокToolStripMenuItem";
            this->розрахунокToolStripMenuItem->Size = System::Drawing::Size(84, 20);
            this->розрахунокToolStripMenuItem->Text = L"Розрахунок";

            // очиститиToolStripMenuItem
            this->очиститиToolStripMenuItem->Name = L"очиститиToolStripMenuItem";
            this->очиститиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::O));
            this->очиститиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->очиститиToolStripMenuItem->Text = L"Очистити";
            this->очиститиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::clearFields);

            // розрахуватиToolStripMenuItem
            this->розрахуватиToolStripMenuItem->Name = L"розрахуватиToolStripMenuItem";
            this->розрахуватиToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Alt) | System::Windows::Forms::Keys::C));
            this->розрахуватиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->розрахуватиToolStripMenuItem->Text = L"Розрахувати";
            this->розрахуватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::btnCalculate_Click);

            // вихідToolStripMenuItem
            this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
            this->вихідToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
            this->вихідToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->вихідToolStripMenuItem->Text = L"Вихід";
            this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitApp);

            // MyForm
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(620, 500);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->labelFormula);
            this->Controls->Add(this->labelTitle);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"Тимур Кобеляцький ІПЗ-25";

            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();
        }
#pragma endregion

    private: System::Void SetupGrid() {
        dataGridView1->Columns->Clear();
        dataGridView1->Columns->Add("N", "№");
        dataGridView1->Columns->Add("P", "Потужність P (кВт)");
        dataGridView1->Columns->Add("m", "Маса m (кг)");
        dataGridView1->Columns->Add("P_ud", "Питома потужність (кВт/кг)");

        dataGridView1->Columns[0]->Width = 40;
        dataGridView1->Columns[1]->Width = 150;
        dataGridView1->Columns[2]->Width = 150;
        dataGridView1->Columns[3]->Width = 180;

        for (int i = 1; i <= 5; i++) {
            dataGridView1->Rows->Add(i, "", "", "");
        }
    }

    private: System::Void SetupIcons() {
        this->очиститиToolStripMenuItem->Image = CreateClearIcon();
        this->розрахуватиToolStripMenuItem->Image = CreateCalcIcon();
        this->вихідToolStripMenuItem->Image = CreateExitIcon();
    }

    private: System::Drawing::Image^ CreateClearIcon() {
        Bitmap^ bmp = gcnew Bitmap(16, 16);
        Graphics^ g = Graphics::FromImage(bmp);
        g->SmoothingMode = SmoothingMode::AntiAlias;
        Pen^ p = gcnew Pen(Color::Black, 2.0f);
        p->StartCap = LineCap::ArrowAnchor;
        p->EndCap = LineCap::ArrowAnchor;
        g->DrawArc(p, 3, 3, 10, 10, 45, 270);
        delete g;
        return bmp;
    }

    private: System::Drawing::Image^ CreateCalcIcon() {
        Bitmap^ bmp = gcnew Bitmap(16, 16);
        Graphics^ g = Graphics::FromImage(bmp);
        g->SmoothingMode = SmoothingMode::AntiAlias;
        Pen^ p = gcnew Pen(Color::Black, 1.5f);
        g->DrawEllipse(p, 2, 2, 12, 12);
        Brush^ b = gcnew SolidBrush(Color::Black);
        g->FillEllipse(b, 5, 6, 2, 2);
        g->FillEllipse(b, 9, 6, 2, 2);
        g->DrawLine(p, 5, 10, 11, 10);
        delete g;
        return bmp;
    }

    private: System::Drawing::Image^ CreateExitIcon() {
        Bitmap^ bmp = gcnew Bitmap(16, 16);
        Graphics^ g = Graphics::FromImage(bmp);
        g->SmoothingMode = SmoothingMode::AntiAlias;
        Pen^ p = gcnew Pen(Color::Black, 2.0f);
        g->DrawEllipse(p, 2, 2, 12, 12);
        g->DrawLine(p, 5, 5, 11, 11);
        g->DrawLine(p, 11, 5, 5, 11);
        delete g;
        return bmp;
    }

    private: System::Void clearFields(System::Object^ sender, System::EventArgs^ e) {
        dataGridView1->Rows->Clear();
        for (int i = 1; i <= 5; i++) {
            dataGridView1->Rows->Add(i, "", "", "");
        }
    }

    private: System::Void exitApp(System::Object^ sender, System::EventArgs^ e) {
        Application::Exit();
    }

    private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            dataGridView1->EndEdit();

            int n = dataGridView1->Rows->Count - 1;

            if (n <= 0) {
                MessageBox::Show("Немає даних для розрахунку!", "Увага",
                    MessageBoxButtons::OK, MessageBoxIcon::Warning);
                return;
            }

            array<double>^ P = gcnew array<double>(n);
            array<double>^ m = gcnew array<double>(n);
            array<double>^ P_ud = gcnew array<double>(n);

            for (int i = 0; i < n; i++) {
                DataGridViewRow^ row = dataGridView1->Rows[i];

                String^ pText = (row->Cells[1]->Value != nullptr) ? row->Cells[1]->Value->ToString()->Trim() : "";
                String^ mText = (row->Cells[2]->Value != nullptr) ? row->Cells[2]->Value->ToString()->Trim() : "";

                if (String::IsNullOrWhiteSpace(pText) || String::IsNullOrWhiteSpace(mText)) {
                    MessageBox::Show("Рядок " + (i + 1) + ": заповніть обидва поля (P та m)!",
                        "Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }

                double pVal, mVal;
                if (!Double::TryParse(pText, pVal)) {
                    MessageBox::Show("Рядок " + (i + 1) + ": невірна потужність P!",
                        "Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }
                if (!Double::TryParse(mText, mVal)) {
                    MessageBox::Show("Рядок " + (i + 1) + ": невірна маса m!",
                        "Помилка введення", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }
                if (mVal == 0) {
                    MessageBox::Show("Рядок " + (i + 1) + ": маса не може дорівнювати 0!",
                        "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
                    return;
                }

                P[i] = pVal;
                m[i] = mVal;
            }

            int index = 0;
            for each (double p in P) {
                P_ud[index] = p / m[index];
                index++;
            }

            for (int i = 0; i < n; i++) {
                dataGridView1->Rows[i]->Cells[3]->Value = P_ud[i].ToString("F3");
            }

            MessageBox::Show("Розрахунок успішно виконано! Оброблено генераторів: " + n,
                "Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Помилка: " + ex->Message, "Помилка",
                MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    };
}