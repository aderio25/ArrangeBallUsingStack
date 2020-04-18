/* Oleh Muhammad Raihan Satrio P.P. */
/* Sabtu, 18 April 2020 */
/* Tugas Struktur Data dan Algoritma */
/* Stack Susun Bola */

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

const int limit = 3;
struct Stack
{
    int top;
    string tmp[limit];

    void buatStack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(top==limit-1)
            return true;
        else
            return false;
    }

    string popData()
    {
        if(isEmpty()==false)
        {
            return tmp[top--];

        }
        else
        {
            cout<<"Kosong"<<endl;
        }

    }

    void pushData(string a)
    {
        if(isFull()==false)
        {
            top++;
            tmp[top] = a;
        }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }

    void show()
    {
        if(isEmpty()==false)
        {
            for(int i=top;i>=0;i--)
            {
                cout<<" | "<<tmp[i]<<" |"<<endl;
            }
            cout<<setw(5)<<"---"<<endl<<endl;;
        }
        else
        {
            cout<<"Stack underflow"<<endl;
        }
    }


};

void intro()
{
    cout<<setw(10)<<"-----------------------------------"<<endl;
    cout<<setw(10)<<"|   Ilustrasi Susun Bola Dengan   |"<<endl;
    cout<<setw(10)<<"|     Program C++ Menggunakan     |"<<endl;
    cout<<setw(10)<<"|          Konsep Stack           |"<<endl;
    cout<<setw(10)<<"-----------------------------------"<<endl;
    cout<<setw(10)<<"|          Kode Warna :           |"<<endl;
    cout<<setw(10)<<"|   Pink: 1  Biru: 2  Hijau: 3    |"<<endl;
    cout<<setw(10)<<"|  Wadah 1 - 4 dari atas kebawah  |"<<endl;
    cout<<setw(10)<<"-----------------------------------"<<endl;

}

int main()
{
    Stack stack1, stack2, stack3, stack4;
    string next,temp;

    stack1.buatStack();stack2.buatStack();stack3.buatStack();stack4.buatStack();

    cout<<"Oleh : Muhammad Raihan Satrio P. P."<<endl;
    cout<<"NIM : 1902897"<<endl;
    cout<<"Kelas : 2A RPL"<<endl<<endl;

    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;

    system("CLS");

    intro();

    cout<<endl<<endl;
    cout<<"Masukan apapun dan enter untuk memulai ilustrasi : ";
    cin>>next;
    system("CLS");

    /* Awal */
    cout<<"Ilustrasi Awal "<<endl<<endl;
    stack1.pushData("2C");stack1.pushData("1A");stack1.pushData("3C");
    stack2.pushData("1C");stack2.pushData("1B");stack2.pushData("3B");
    stack3.pushData("3A");stack3.pushData("2A");stack3.pushData("2B");
    stack1.show();stack2.show();stack3.show();
    cout<<" |    |"<<endl;
    cout<<"  ---"<<endl<<endl;

    /* Move Pertama */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan pertama : "<<endl<<endl;
    stack4.pushData(stack1.popData());
    stack1.show();stack2.show();stack3.show();stack4.show();

    /* Move Kedua */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan kedua : "<<endl<<endl;
    stack4.pushData(stack2.popData());
    stack1.show();stack2.show();stack3.show();stack4.show();

    /* Move Ketiga */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan ketiga : "<<endl<<endl;
    stack2.pushData(stack1.popData());
    stack1.show();stack2.show();stack3.show();stack4.show();

    /* Move Keempat */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan keempat : "<<endl<<endl;
    stack1.pushData(stack3.popData());
    stack1.show();stack2.show();stack3.show();stack4.show();

    /* Move Kelima */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan kelima : "<<endl<<endl;
    stack1.pushData(stack3.popData());
    stack1.show();stack2.show();stack3.show();stack4.show();

    /* Move Keenam */
    cout<<"-----------------------------------------------"<<endl;
    cout<<"Masukan apapun dan enter untuk melanjutkan : ";
    cin>>next;
    system("CLS");
    cout<<"Gerakan keenam : "<<endl;
    cout<<"Ilustrasi Tersusun : "<<endl<<endl;
    stack4.pushData(stack3.popData());
    stack1.show();stack2.show();
    cout<<" |    |"<<endl;
    cout<<"  ---"<<endl<<endl;
    stack4.show();

    return 0;

}
