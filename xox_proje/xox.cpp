#include <iostream>
#include <ctype.h>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;


char tahta[10] = {'0','1','2','3','4','5','6','7','8','9'};    
char PLAYER1 = 'X';
char PLAYER2 = 'O';
char kazanan = ' ';

void tahta_ciz();
void tahta_sil();
int bos_kontrol();
void oyuncu_secim();
void player1_hamle();
void player2_hamle();
void bot_hamleX();
void bot_hamleO();
char kazanan_kontrol();
void ana_menu();
void oynama_secenek();
void nasil_oynanir();


int main()
{  
    int secim,istek,menu,secim2,egg;
    char tekrar;
    do
    {
        ana_menu();
        cin >> secim;
        switch(secim)
        {
            case 1 : oynama_secenek();
                     cin >> istek;
                     switch(istek)
                     {
                        case 1 : do
                                 {
                                    system("CLS");
                                    oyuncu_secim();
                                    system("CLS");
                                    tahta_sil();
                                    tahta_ciz();
                                    while(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                    {
                                        if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                        {
                                            player1_hamle();
                                            tahta_ciz();
                                            kazanan_kontrol();
                                            bos_kontrol();
                                        }
                                        else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                        {
                                            break;
                                        }

                                        if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                        {
                                            player2_hamle();
                                            tahta_ciz();
                                            kazanan_kontrol();
                                            bos_kontrol();
                                        }
                                        else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                        {
                                            break;
                                        }
                                    }
                                    if(kazanan_kontrol() == 'X')
                                    {
                                        cout << "\nKazanan : X";
                                    }
                                    else if(kazanan_kontrol() == 'O')
                                    {
                                        cout << "\nKazanan : O";
                                    }
                                    else if(kazanan_kontrol() == ' ')
                                    {
                                        cout << "\nKazanan yok ! Berabere";
                                    }
                                    cout << "\n\nTekrar oynamak ister misiniz ? (E - H)  : ";
                                    cin >> tekrar;
                                    }while(toupper(tekrar) == 'E');
                                    break;

     

                            case 2 : system("cls");
                                     do
                                     {
                                        do
                                        {
                                            system("CLS");
                                            cout << "1. X" << endl;
                                            cout << "2. O" << endl << endl;
                                            cout << "Seciminizi giriniz : ";
                                            cin >> secim2;
                                        }while(secim2 > 2 && secim2 < 1);

                                        if(secim2 == 1)
                                        {
                                            system("CLS");
                                            tahta_sil();
                                            tahta_ciz();
                                            while(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                            {   
                                                if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                                {
                                                    player1_hamle();
                                                    tahta_ciz();
                                                    kazanan_kontrol();
                                                    bos_kontrol();
                                                }
                                                else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                                {
                                                    break;
                                                }

                                                if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                                {
                                                    bot_hamleO();
                                                    tahta_ciz();
                                                    kazanan_kontrol();
                                                    bos_kontrol();
                                                }
                                                else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                                {
                                                    break;
                                                }
                                            }
                                            if(kazanan_kontrol() == 'X')
                                            {
                                                cout << "\nKazanan : X";
                                            }
                                            else if(kazanan_kontrol() == 'O')
                                            {
                                                cout << "\nKazanan : O";
                                            }
                                            else if(kazanan_kontrol() == ' ')
                                            {
                                                cout << "\nKazanan yok ! Berabere";
                                            }
                                            cout << "\n\nTekrar oynamak ister misiniz ? (E - H)  : ";
                                            cin >> tekrar;
                                        }

                                        else if(secim2 == 2)
                                        {
                                            system("CLS");
                                            tahta_sil();
                                            tahta_ciz();
                                            while(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                            {   
                                                if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                                {
                                                    bot_hamleX();
                                                    tahta_ciz();
                                                    kazanan_kontrol();
                                                    bos_kontrol();
                                                }
                                                else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                                {
                                                    break;
                                                }

                                                if(kazanan_kontrol() == ' ' && bos_kontrol() != 0)
                                                {
                                                    player2_hamle();
                                                    tahta_ciz();
                                                    kazanan_kontrol();
                                                    bos_kontrol();
                                                }
                                                else if(kazanan_kontrol() != ' ' || bos_kontrol() == 0)
                                                {
                                                    break;
                                                }
                                            }
                                            if(kazanan_kontrol() == 'X')
                                            {
                                                cout << "\nKazanan : X";
                                            }
                                            else if(kazanan_kontrol() == 'O')
                                            {
                                                cout << "\nKazanan : O";
                                            }
                                            else if(kazanan_kontrol() == ' ')
                                            {
                                                cout << "\nKazanan yok ! Berabere";
                                            }
                                            cout << "\n\nTekrar oynamak ister misiniz ? (E - H)  : ";
                                            cin >> tekrar;
                                        }
                                     }while(toupper(tekrar) == 'E');
                                    break;

                            case 3 : break;                
                        
                     }
                 break;

             case 2 : do
                      {
                        nasil_oynanir();
                        cin >> menu;
                      }while(menu != 0);
                      break;
                      

             case 0 : cout << "Cikis yaptiniz !";
                      break;         
        }   
         
    }while(secim != 0);
    
}

void tahta_ciz()
{
    system("cls");
    cout << " " << tahta[1] << " | " << tahta[2] << " | " << tahta[3] << endl;      //tahtayı ekrana çiziyoruz.
    cout << "---|---|---" << endl;
    cout << " " << tahta[4] << " | " << tahta[5] << " | " << tahta[6] << endl;
    cout << "---|---|---" << endl;
    cout << " " << tahta[7] << " | " << tahta[8] << " | " << tahta[9] << endl;
}

void tahta_sil()
{
    tahta[0] = '0';
    tahta[1] = '1';
    tahta[2] = '2';          //tahtayı tekrardan siliyoruz.
    tahta[3] = '3';
    tahta[4] = '4';
    tahta[5] = '5';
    tahta[6] = '6';
    tahta[7] = '7';
    tahta[8] = '8';
    tahta[9] = '9';
}

int bos_kontrol()
{
    int bosAlan = 9;

    if(tahta[1] != '1')
    {
        bosAlan--;
    }
    if(tahta[2] != '2')         //tahtada boş yer kaldı mı diye kontrol ediyor
    {                           // eğer kalmazsa ve kazanan yoksa berabere bitiyor.
        bosAlan--;
    }
    if(tahta[3] != '3')
    {
        bosAlan--;
    }
    if(tahta[4] != '4')
    {
        bosAlan--;
    }
    if(tahta[5] != '5')
    {
        bosAlan--;
    }
    if(tahta[6] != '6')
    {
        bosAlan--;
    }
    if(tahta[7] != '7')
    {
        bosAlan--;
    }
    if(tahta[8] != '8')
    {
        bosAlan--;
    }
    if(tahta[9] != '9')
    {
        bosAlan--;
    }

    return bosAlan;
}

void oyuncu_secim()
{
    string ilkOyuncu,ikinciOyuncu;
    char xveyao;
    int zar,ilkTahmin,ikinciTahmin,ilkUzaklik,ikinciUzaklik;

    srand(time(NULL));
    system("CLS");

    do
    {
        cout << "X veya O olmak icin 1 ile 6 arasinda sayi tutuldu.." << endl;    //kimin x veya o olacağına karar vermek için ufak bir oyun.
        cout << "Ilk oyuncu lutfen tahmininizi giriniz : ";
        cin >> ilkTahmin;
        cout << "Ikinci oyuncu lutfen tahmininizi giriniz : ";
        cin >> ikinciTahmin;
        zar = (rand() % 6) + 1;
        ilkUzaklik = abs(ilkTahmin - zar);
        ikinciUzaklik = abs(ikinciTahmin - zar);
    }while(ilkUzaklik == ikinciUzaklik);
    
    if(ilkUzaklik > ikinciUzaklik)
    {
        cout << "Zardan gelen sayi : " << zar << endl;
        cout << "Ikinci oyuncu : (X - O) : ";
        cin >> xveyao;
        
        if(toupper(xveyao) == 'X');
        {
            ikinciOyuncu = PLAYER1;
            ilkOyuncu = PLAYER2;
        }
        if(toupper(xveyao) == 'O');
        {
            ilkOyuncu = PLAYER1;
            ikinciOyuncu = PLAYER2;
        }
    }

    else if(ilkUzaklik < ikinciUzaklik)
    {
        cout << "Zardan gelen sayi : " << zar << endl;
        cout << "Ilk oyuncu : (X - O) : ";
        cin >> xveyao;
        
        if(xveyao == 'X');
        {
            ikinciOyuncu = PLAYER1;
            ilkOyuncu = PLAYER2;
        }
        if(xveyao == 'O');
        {
            ilkOyuncu = PLAYER1;
            ikinciOyuncu = PLAYER2;
        }
    }
}

void player1_hamle()
{
    int hamle;
    cout << "Hamle sirasi  : X" << endl;

    do
    {
        cout << "Hamlenizi yapiniz : ";      //hamle yapıyoruz ama şartlar tamamsa.
        cin >> hamle;
    }while(tahta[hamle] == 'X' || tahta[hamle] == 'O' || hamle > 9 || hamle < 1); // şartlar

    tahta[hamle] = 'X';
}

void player2_hamle()
{
    int hamle;
    cout << "Hamle sirasi  : O" << endl;

    do
    {
        cout << "Hamlenizi yapiniz : ";
        cin >> hamle;
    }while(tahta[hamle] == 'X' || tahta[hamle] == 'O' || hamle > 9 || hamle < 1); // şartlar

    tahta[hamle] = 'O';
}

void bot_hamleX()
{
    int hamle;
    cout << "\n\nHamle sirasi  : X" << endl;
    srand(time(NULL));
    do
    {
        hamle = (rand() % 6) + 1;
    }while(tahta[hamle] == 'X' || tahta[hamle] == 'O');
    tahta[hamle] = 'X';
}

void bot_hamleO()
{
    int hamle;
    cout << "\n\nHamle sirasi  : O" << endl;
    srand(time(NULL));
    do
    {
        hamle = (rand() % 6) + 1;
    }while(tahta[hamle] == 'X' || tahta[hamle] == 'O');
    tahta[hamle] = 'O';
}

char kazanan_kontrol()
{
    if(tahta[1] == tahta[2] && tahta[2] == tahta[3])
    {
        return tahta[1];
    }
    else if(tahta[4] == tahta[5] && tahta[5] == tahta[6])        //kazananı kontrol etmesi için bir fonksiyon.
    {
        return tahta[4];
    }
    else if(tahta[7] == tahta[8] && tahta[8] == tahta[9])
    {
        return tahta[7];
    }
    else if(tahta[1] == tahta[4] && tahta[4] == tahta[7])
    {
        return tahta[1];
    }
    else if(tahta[2] == tahta[5] && tahta[5] == tahta[8])
    {
        return tahta[2];
    }
    else if(tahta[3] == tahta[6] && tahta[6] == tahta[9])
    {
        return tahta[3];
    }
    else if(tahta[1] == tahta[5] && tahta[5] == tahta[9])
    {
        return tahta[1];
    }
    else if(tahta[3] == tahta[5] && tahta[5] == tahta[7])
    {
        return tahta[3];
    }
    return ' ';
}

void ana_menu()
{
    system("cls");
    cout << " ---- >>  X O X  << ----" << endl << endl;
    cout << "1 - Oyunu oyna" << endl;
    cout << "2 - Nasil oynanir ?" << endl;
    cout << "0 - Cikis yap" << endl << endl;
    cout << "Seciminizi giriniz : ";
}

void oynama_secenek()
{
    system("CLS");
    cout << "1 - Arkadasina karsi oyna" << endl;
    cout << "2 - Bilgisayara karsi oyna" << endl;
    cout << "0 - Menuye don" << endl << endl;
    cout << "Seciminizi giriniz : ";
}

void nasil_oynanir()
{
    system("CLS");
    cout << "Ilk olarak, oyun baslamadan asagidaki konulara karar verilir." << endl;
    cout << "- Acilisi kim yapacak." << endl;
    cout << "- Sembol secimi (x ve o sembolleri arasindan)" << endl;
    cout << "Daha sonra, oyun baslayinca, acilisi yapan oyuncu hamlesini yapar." << endl;
    cout << "Diger oyuncu da kendi hamlesini bos kalan yerlerden birine yapar. " << endl;
    cout << "Boylece her oyuncu sirayla devam eder. " << endl;
    cout << "Oyunculardan birisi kendi 3 tasini dikey, yatay ya da capraz dizerse oyunun galibi o olur. " << endl << endl;
    cout << "Menuye donmek icin 0 ' a basiniz  : ";
}



