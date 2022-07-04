#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "buyer_data.cpp"

using namespace std;
    char oke;
    bool isOke(){
        if(oke == 'y' || oke == 'Y')
        {
            return true;
        } else
        {
            return false;
        }
        
    }

    void headerResto(){
        cout << "\t\t=====================================" << endl;
        cout << "\t\t||       RESTORAN PUNYA RASA       ||" << endl;
        cout << "\t\t=====================================" << endl;
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
    void mainMenu(){
        cout << "\t\t||=================================||" << endl;
        cout << "\t\t||   1. Tampil Menu                ||" << endl;
        cout << "\t\t||   2. Pesan Makanan              ||" << endl;
        cout << "\t\t||   3. Tampil Data                ||" << endl;
        cout << "\t\t||   4. Hapus Data                 ||" << endl;
        cout << "\t\t||   5. Exit                       ||" << endl;
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
        cout << "\t\t=====================================" << endl;
        cout << "\t\t     pilih : "; cin >> go.chsCat;
        
    }

    void foodMenu(){
        system("CLS");
        headerFood();
        cout << "\t\t||   1. Ayam                           ||" << endl;
        cout << "\t\t||   2. Cumi                           ||" << endl;
        cout << "\t\t||   3. Udang                          ||" << endl;
        cout << "\t\t||   4. Sapi                           ||" << endl;
        cout << "\t\t=========================================" << endl;
        cout << "\t\t     pilih : "; cin >> ID1;
    }
    
    void detailFood(){
        system("CLS");
        headerFood(); // LAYOUT HEADER 
        switch (ID1)  
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
        default:
            cout << "Masukkan input dengan benar!";
            break;
        
    }
    getch();
    system("cls");
    // pilihMenu();
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
            switch (go.subMenu)
            {
            case 1:
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
                }
                break;
            case 2:
                do
                {
                    cout << "Apakah ingin menambah pesanan? y/n : "; cin >> oke;
                    isOke();
                } while (isOke());
                system("cls");
                break;
            case 3:
                displayData(buyer);
                getch();
                system("cls");
                break;
            case 4:
                cout << "Data sudah dihapus";
                getch();
                system("cls");
                break;
            case 5:
                pilihMenu();
                break;
            default:
                cout << "Invalid input, please try again";
                break;
            }
            
        } while (!pilihMenu());
    }

//|| !go.menuCon