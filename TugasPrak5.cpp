#include <iostream>
#define max 3

using namespace std;

struct stack
{
	int top;
	string data[max];
};
struct stack stk;

bool IsEmpty()
{
	if(stk.top == 0)
	{
		return true;
	} else
	{
		return false;
	}
}

bool IsFull()
{
	if(stk.top >= max)
	{
		return true;
	} else
	{
		return false;
	}
}

void Push()
{
	if(!IsFull())
	{
		cout << "Masukkan Data : "; 
		cin >> stk.data[stk.top];
		stk.top++;
		cout << "Data berhasil ditambahkan." << endl;
	} else
	{
		cout << "Stack sudah penuh!" << endl;
	}
	cout << "\nTekan 0 untuk kembali ke menu : ";
}

void Pop()
{
	if(!IsEmpty())
	{
		stk.top--;
		cout << "Data berhasil dikeluarkan." << endl;
	} else
	{
		cout << "Stack masih kosong!" << endl;
	}
	cout << "\nTekan 0 untuk kembali ke menu : ";
}

void Display()
{	
	if(!IsEmpty())
	{
		cout << "Data : " << endl;
		for(int i = 0; i < stk.top; i++)
		{
			cout << i+1 << ". " << stk.data[i] << endl;
		}
	}
	if(IsEmpty())
	{
		cout << "Stack masih kosong!" << endl;
	}
	
	if(IsFull())
	{
		cout << "Stack sudah penuh!" << endl;
	}
	cout << "\nTekan 0 untuk kembali ke menu : ";
}

void Clear()
{
	stk.top = 0;
	cout << "Stack telah dikosongkan." << endl;
	cout << "\nTekan 0 untuk kembali ke menu : ";
}

int main()
{
	int opsi;
	int kembali;
	
	stack :
		system("cls");
		cout << "===== PILIH MENU STACK =====";
		cout << "\n1. Menambahkan item stack";
		cout << "\n2. Menghapus item stack";
		cout << "\n3. Menampilkan isi stack";
		cout << "\n4. Mengosongkan stack";
		cout << "\n5. Selesai";
		cout << "\nMasukkan pilihan Anda : "; cin >> opsi;
	
	if(opsi == 1)
	{
		cout << "" << endl; Push();
		cin >> kembali;
		if(kembali == 0)
		{
			goto stack;
		}
	} else if(opsi == 2)
	{
		cout << "" << endl; Pop();
		cin >> kembali;
		if(kembali == 0)
		{
			goto stack;
		}
	} else if(opsi == 3)
	{
		cout << "" << endl; Display();
		cin >> kembali;
		if(kembali == 0)
		{
			goto stack;
		} else
		{
			cout << "Maaf, opsi tidak ditemukan!";
		}
	} else if(opsi == 4)
	{
		cout << "" << endl; Clear();
		cin >> kembali;
		if(kembali == 0)
		{
			goto stack;
		}
	} else if(opsi == 5)
	{
		cout << "\nProgram Selesai" << endl;
	} else
	{
		cout << "\nMaaf, opsi tidak ditemukan!";
	}
}
