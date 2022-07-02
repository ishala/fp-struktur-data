#include <iostream>
#include <stdlib.h>
#include "projekfix.cpp"
using namespace std;
    struct pilih
    {
        int choose1;
        int choose2;
    }go;
    
    void mainMenu(){
        system("CLS");
        cout << "\t\t=====================================" << endl;
        cout << "\t\t||       RESTORAN PUNYA RASA       ||" << endl;
        cout << "\t\t=====================================" << endl;
        cout << "\t\t=====================================" << endl;
        cout << "\t\t||      MENU RESTO PUNYA RASA      ||" << endl;
        cout << "\t\t||       PILIH KATEGORI MENU       ||" << endl;
        cout << "\t\t||=================================||" << endl;
        cout << "\t\t||   1. Makanan                    ||" << endl;
        cout << "\t\t||   2. Minuman                    ||" << endl;
        cout << "\t\t||   3. Exit                       ||" << endl;
        cout << "\t\t=====================================" << endl;
        cout << "\t\t     pilih : "; cin >> go.choose1;
        
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
        cout << "\t\t     pilih : "; cin >> go.choose2;
    }

    void detailFood(){
        system("CLS");
        headerFood(); // LAYOUT HEADER 
        switch (go.choose2)  
        {
        case 1: // MEMILIH OPSI 1 DARI MENU MAKANAN
            for (int i = 0; i < 1; i++)
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
                        cout << "  ||  Rp. "; cek(&hargaMakan[i][j]);
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
                        cout << "  ||  Rp. "; cek(&hargaMakan[i][j]);
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
                        cout << "  ||  Rp. "; cek(&hargaMakan[i][j]);
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
                        cout << "  ||  Rp. "; cek(&hargaMakan[i][j]);
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
                    cout << "  ||  Rp. "; cek(&hargaMakan[i][j]);
                }
            }
        }
    }





    int main(){
        mainMenu(); //  LAYOUT MENU UTAMA
        if (go.choose1 == 1) // MEMILIH OPSI 1 DARI MENU UTAMA
        {
            foodMenu(); // LAYOUT MENU MAKANAN
            detailFood(); // LAYOUT DETAIL MAKANAN
            
            
        } 
        else if(go.choose1 == 2)
        {
            detailDrink();
        }
        
    }
