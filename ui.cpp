#include <iostream>
#include <stdlib.h>
#include "buyer_data.cpp"

using namespace std;

    void headerResto(){
        cout << "\t\t=====================================" << endl;
        cout << "\t\t||       RESTORAN PUNYA RASA       ||" << endl;
        cout << "\t\t=====================================" << endl;
    }

    void mainMenu(){
        cout << "\t\t||=================================||" << endl;
        cout << "\t\t||   1. Tampil Menu                ||" << endl;
        cout << "\t\t||   2. Pesan Makanan              ||" << endl;
        cout << "\t\t||   3. Tampil Data                ||" << endl;
        cout << "\t\t||   4. Hapus Data                 ||" << endl;
        cout << "\t\t||   5. Menu                       ||" << endl;
        cout << "\t\t||   6. Exit                       ||" << endl;
        cout << "\t\t=====================================" << endl;
        cout << "\t\t     pilih : "; cin >> go.subMenu;
    }


    void category(){
        system("CLS");
        cout << "\t\t=====================================" << endl;
        cout << "\t\t||      MENU RESTO PUNYA RASA      ||" << endl;
        cout << "\t\t||       PILIH KATEGORI MENU       ||" << endl;
        cout << "\t\t||=================================||" << endl;
        cout << "\t\t||   1. Makanan                    ||" << endl;
        cout << "\t\t||   2. Minuman                    ||" << endl;
        cout << "\t\t||   3. Exit                       ||" << endl;
        cout << "\t\t=====================================" << endl;
        cout << "\t\t     pilih : "; cin >> go.chsCat;
        
    }

    void headerFood(){
        system("CLS");
        cout << "\t\t=========================================" << endl;
        cout << "\t\t||               MAKANAN               ||" << endl;
        cout << "\t\t=========================================" << endl;
    }

    void headerDrink(){
        system("CLS");
        cout << "\t\t=========================================" << endl;
        cout << "\t\t||               MINUMAN               ||" << endl;
        cout << "\t\t=========================================" << endl;
    }

    void foodMenu(){
        system("CLS");
        headerFood();
        cout << "\t\t||   1. Ayam                           ||" << endl;
        cout << "\t\t||   2. Cumi                           ||" << endl;
        cout << "\t\t||   3. Udang                          ||" << endl;
        cout << "\t\t||   4. Sapi                           ||" << endl;
        cout << "\t\t||   5. Exit                           ||" << endl;
        cout << "\t\t=========================================" << endl;
        cout << "\t\t     pilih : "; cin >> go.chsFood;
    }
    void add(){
        cout << "Mau menambah?(y/n) ";
        cin >> p.pass;
        system("CLS");
        pilih();
    }
    void detailFood(){
        system("CLS");
        headerFood(); // LAYOUT HEADER 
        switch (go.chsFood)  
        {
        case 1: // MEMILIH OPSI 1 DARI MENU MAKANAN
            for (int i = 0; i < 1; i++)
            {
                for (int j = 0; j < secondD; j++)
                {   
                    if (menuMakan[i][j] == "em" || hargaMakan[i][j] == 0) // JIKA SISA ARRAY KOSONG
                    {   
                        cout << " ";
                    } else
                    { // JIKA ARRAY TIDAK KOSONG
                        cout << "\t\t " << j+1 << ". " << menuMakan[i][j];
                        for (int k = 0; k < space; k++)
                        {
                            cout << " ";
                        }
                        cout << "  ||  Rp. "; dot(&hargaMakan[i][j]);
                    }
                }
            }
            break;
//i
        case 2: // MEMILIH OPSI 2 DARI MENU MAKANAN
            for (int i = 1; i < 2; i++)
            {
                for (int j = 0; j < secondD; j++)
                {   
                    if (menuMakan[i][j] == "em" || hargaMakan[i][j] == 0) // JIKA SISA ARRAY KOSONG
                    {   
                        cout << " ";
                    } else{ // JIKA ARRAY TIDAK KOSONG
                        cout << "\t\t " << j+1 << ". " << menuMakan[i][j];
                        for (int k = 0; k < space; k++)
                        {
                            cout << " ";
                        }
                        cout << "  ||  Rp. "; dot(&hargaMakan[i][j]);
                        }
                }
            }
            break;

        case 3: // MEMILIH OPSI 3 DARI MENU MAKANAN
            for (int i = 2; i < 3; i++)
            {
                for (int j = 0; j < secondD; j++)
                {   
                    if (menuMakan[i][j] == "em" || hargaMakan[i][j] == 0) // JIKA SISA ARRAY KOSONG
                    {   
                        cout << " ";
                    } else{ // JIKA ARRAY TIDAK KOSONG
                        cout << "\t\t " << j+1 << ". " << menuMakan[i][j];
                        for (int k = 0; k < space; k++)
                        {
                            cout << " ";
                        }
                        cout << "  ||  Rp. "; dot(&hargaMakan[i][j]);
                        }
                }
            }
            break;
        
        case 4: // MEMILIH OPSI 2 DARI MENU MAKANAN
            for (int i = 3; i < 4; i++)
            {
                for (int j = 0; j < secondD; j++)
                {   
                    if (menuMakan[i][j] == "em" || hargaMakan[i][j] == 0) // JIKA SISA ARRAY KOSONG
                    {   
                        cout << " ";
                    } 
                    else
                    { // JIKA ARRAY TIDAK KOSONG
                        cout << "\t\t " << j+1 << ". " << menuMakan[i][j];
                        for (int k = 0; k < space; k++)
                        {
                            cout << " ";
                        }
                        cout << "  ||  Rp. "; dot(&hargaMakan[i][j]);
                    }
                }
            }
            break;
        case 5:
        
        default:
            cout << "Masukkan input dengan benar!";
            break;
        }
    }

    void detailDrink()
    {
    system("CLS");
    headerDrink();
    for (int i = 4; i <= 4; i++)
        {
            for (int j = 0; j < secondD; j++)
            {   
                if (menuMakan[i][j] == "em" || hargaMakan[i][j] == 0) // JIKA SISA ARRAY KOSONG
                {   
                    cout << " ";
                } 
                else
                { // JIKA ARRAY TIDAK KOSONG
                    cout << "\t\t " << j+1 << ". " << menuMakan[i][j];
                    for (int k = 0; k < space; k++)
                    {
                        cout << " ";
                    }
                    cout << "  ||  Rp. "; dot(&hargaMakan[i][j]);
                }
            }
        }
    
    }



    int main(){
        do
        {
            headerResto();
            mainMenu();
            if (go.subMenu == 1)
            {
                category();
                if (go.chsCat == 1)
                {
                    headerFood();
                    foodMenu();
                    detailFood();
                } else if (go.chsCat == 2)
                {
                    headerDrink();
                    detailDrink();
                } else if (go.chsCat == 3)
                {
                    !pilih();
                }
                
            } else if (go.subMenu == 2)
            {
                
            }
            
        } while (pilih());
    }
