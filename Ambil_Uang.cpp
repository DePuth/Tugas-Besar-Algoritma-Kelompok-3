#include <iostream>

using namespace std;

int main(){
    int cek, pin;

    pin = 123456;
    awal:
    // Opening
    cout << "\n=============================================\n";
    cout << "    Selamat datang di ATM BCA Kampung sawah\n";
    cout << "        Pecahan Rp.50.000 / Rp.100.000\n";
    cout << "=============================================\n";

    
    
    cout << "\nMasukkan pin anda = ";
        cin >> cek;

    if (cek != pin){
        cout << "Pin Anda Salah";

        cout << "\nMasukkan pin anda = ";
        cin >> cek;
        
        if (cek != pin){
        cout << "Pin Anda Salah";

        cout << "\nMasukkan pin anda = ";
        cin >> cek;
        } else {
            int pilih;
        string input;
        

        cout << "\n\nPenarikan Tunai/Transaksi Lainnya";
        cout << "\nPilih Nominal : ";
        cout << "\n1. Rp. 200.000\n";
        cout << "2. Rp. 500.000\n";
        cout << "3. Rp. 700.000\n";
        cout << "4. Rp. 1.000.000\n";
        cout << "5. Rp. 2.000.000\n";
        cout << "6. Transaksi Lainnya : \n";
        cout << "\nPilih Angka [1,2,3,4,5,6] : " ;
        cin >> pilih;

        switch (pilih){

        case 1:
        //Penarikan Rp.200.000
        cout << "\nRp. 200.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 2:
        //Penarikan Rp.500.000
        cout << "\nRp. 500.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 3:
        //Penarikan Rp.700.000
        cout << "\nRp. 700.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 4:
        //Penarikan Rp.1.000.000
        cout << "\nRp. 1.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 5:
        //Penarikan Rp.2.000.000
        cout << "\nRp. 2.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 6:
        int uang1, uang2, pecahan;
        

        cout << "\nPenarikan Tunai : \n";
        cout << "Silahkan Memilih Pecahan Uang\n";
        cout << "\n1. Rp.50.000\n";
        cout << "2. Rp.100.000\n";
        cout << "\nPilih Angka [1,2] = ";
        cin >> pecahan;

        if (pecahan == 1) {

            //Pecahan Uang Rp.50.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?\n";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        } else if (pecahan == 2){
            //Pecahan Uang Rp. 100.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        }
        break;
        }
        }
        
        if (cek != pin){
        cout << "Pin Anda Terblokir";
        } else {
            int pilih;
        string input;
        

        cout << "\n\nPenarikan Tunai/Transaksi Lainnya";
        cout << "\nPilih Nominal : ";
        cout << "\n1. Rp. 200.000\n";
        cout << "2. Rp. 500.000\n";
        cout << "3. Rp. 700.000\n";
        cout << "4. Rp. 1.000.000\n";
        cout << "5. Rp. 2.000.000\n";
        cout << "6. Transaksi Lainnya : \n";
        cout << "\nPilih Angka [1,2,3,4,5,6] : " ;
        cin >> pilih;

        switch (pilih){

        case 1:
        //Penarikan Rp.200.000
        cout << "\nRp. 200.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 2:
        //Penarikan Rp.500.000
        cout << "\nRp. 500.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 3:
        //Penarikan Rp.700.000
        cout << "\nRp. 700.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 4:
        //Penarikan Rp.1.000.000
        cout << "\nRp. 1.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 5:
        //Penarikan Rp.2.000.000
        cout << "\nRp. 2.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 6:
        int uang1, uang2, pecahan;
        

        cout << "\nPenarikan Tunai : \n";
        cout << "Silahkan Memilih Pecahan Uang\n";
        cout << "\n1. Rp.50.000\n";
        cout << "2. Rp.100.000\n";
        cout << "\nPilih Angka [1,2] = ";
        cin >> pecahan;

        if (pecahan == 1) {

            //Pecahan Uang Rp.50.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?\n";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        } else if (pecahan == 2){
            //Pecahan Uang Rp. 100.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        }
        break;
        }
        }
    } else {
        int pilih;
        string input;
        

        cout << "\n\nPenarikan Tunai/Transaksi Lainnya";
        cout << "\nPilih Nominal : ";
        cout << "\n1. Rp. 200.000\n";
        cout << "2. Rp. 500.000\n";
        cout << "3. Rp. 700.000\n";
        cout << "4. Rp. 1.000.000\n";
        cout << "5. Rp. 2.000.000\n";
        cout << "6. Transaksi Lainnya : \n";
        cout << "\nPilih Angka [1,2,3,4,5,6] : " ;
        cin >> pilih;

        switch (pilih){

        case 1:
        //Penarikan Rp.200.000
        cout << "\nRp. 200.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 2:
        //Penarikan Rp.500.000
        cout << "\nRp. 500.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 3:
        //Penarikan Rp.700.000
        cout << "\nRp. 700.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 4:
        //Penarikan Rp.1.000.000
        cout << "\nRp. 1.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 5:
        //Penarikan Rp.2.000.000
        cout << "\nRp. 2.000.000\n";
        cout << "\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
        cin >> input;
        if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        }

        case 6:
        int uang1, uang2, pecahan;
        

        cout << "\nPenarikan Tunai : \n";
        cout << "Silahkan Memilih Pecahan Uang\n";
        cout << "\n1. Rp.50.000\n";
        cout << "2. Rp.100.000\n";
        cout << "\nPilih Angka [1,2] = ";
        cin >> pecahan;

        if (pecahan == 1) {

            //Pecahan Uang Rp.50.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?\n";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        } else if (pecahan == 2){
            //Pecahan Uang Rp. 100.000

            cout << "\nMasukkan Nominal Yang Anda Inginkan\n";
            cout << "Rp. ";
            cin >> uang1;
            cout << "\nIngin Cetak Struk?";
            cout << "[Ya/Tidak] = ";
            cin >> input;

            //Menggunakan Struk
            if (input == "Ya" || input == "ya") {
                cout << "\n=======================================\n";
                cout << "                 BCA                   \n";
                cout << "=======================================\n" ;
                cout << "Uang Yang Anda Tarik : \nRp. " << uang1 ;
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 

            //Tidak Menggunakan Struk
            } else {
                cout << "\n\nPerlu Transaksi Lain? \n[Ya/Tidak] = ";
                cin >> input;
                if (input == "Ya" || input == "ya"){
            goto awal;
        } else {
            cout << "\n=============================================\n";
            cout << "       Terimakasih Atas Kunjungan Anda\n";
            cout << "      Silahkan Cek Kembali Uang Anda dan\n";
            cout << "             Ambil Kartu Anda\n";
            cout << "=============================================\n";
            break;
        } 
            }

        }
        break;
        }
    }

    cin.get ();
    return 0;
}
