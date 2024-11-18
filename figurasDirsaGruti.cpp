#include <iostream>
using namespace std;

void pirm() { // Uzzīmē taisnļeņķa trijstūri
     for(int i=0; i<=5; i++){
        for(int a=0; a<=i; a++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void otra() { // Uzzīmē apgrieztu taisnļēņķa trijstūri
    int n = 5;
   for (int x = n; x >= 1; x--) { 
       for (int y = 1; y <= x; y++) {
           cout << "*";
       }
       cout << endl;
   }
}

void tre() {  // Piramīda
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++){
            cout<<" ";
        }
         for (int k = 1; k <= (2 * i - 1); k++){
             cout<<"*";
         }
         cout<<endl;
    }
}

void cetr() { // Apgriezta piramida
      for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 + i - 1; j++) {
            if (j <= 5 - i) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
    
}

void piec() { //Dimants
     for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 5 - i; j++){
            cout<<" ";
        }
         for (int k = 1; k <= (2 * i - 1); k++){
             cout<<"*";
         }
         cout<<endl;
    }
    
    for (int x = 5; x >= 1; x--) {
        for (int y = 1; y <= 5 + x - 1; y++) {
            if (y <= 5 - x) {
                cout << " ";
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void sesi() { // Uzzīmēt kvadrātu bez iekšām
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<" ";
            
            if(i == 0 || i== 4 || j == 0 || j == 4){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void sep() { //Paskāla piramīda
 int n;

    cout << "Ievadi augstumu: ";
    cin >> n;

    int pascal[n][n];


    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            } else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    
}

void ost() { // Zigzagā līnijas (2)
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j || (i + j == 5 - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
}

void dev() {   //Dimants bez ieksam
       for (int i = 1; i <= 10; i++) {
        for (int j = i; j < 10; j++)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = 10 - 1; i >= 1; i--) {
        for (int j = 10; j > i; j--)
            cout << " ";
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) 
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

void desm() { //Sirds
      int n=10;
   for (int i = n / 2; i <= n; i += 2) {
        for (int j = 1; j < n - i; j += 2)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = i; j < n; j++)
            cout << " ";
        for (int j = 1; j <= (i * 2 - 1); j++)
            cout << "*";
        cout << endl;
    }
}

void vien() { // 


}
int main() {
    int user;

    
    cout<<"Figuru veidosana ar loop(for) palidzibu."<<endl;
    cout<<"Ievadi 0, lai izietu!!"<<endl;
    cout<<"Izvelies kadu figuru gribesi apsaktit!"<<endl;
    do{
    cout<<"1. Tainlenka trijsturis"<<endl;
    cout<<"2. Apgriezts taisnleka trijsturis"<<endl;
    cout<<"3. Piramida"<<endl;
    cout<<"4. Apgiezta pirmaida"<<endl;
    cout<<"5. Dimants"<<endl;
    cout<<"6. Kvadrats bez ieksam"<<endl;
    cout<<"7. Paskala piramida"<<endl;
    cout<<"8. Krustiskas taisnes"<<endl;
    cin>>user; 
    system("CLS");

    switch(user) {
        case 1:
        cout<<"Figura"<<endl;
          pirm();
          cout<<endl;
          break;

         case 2:
          cout<<"Figura"<<endl;
          otra();
            cout<<endl;
          break;

          case 3:
           cout<<"Figura"<<endl;
          tre();
            cout<<endl;
          break;

          case 4:
           cout<<"Figura"<<endl;
          cetr();
            cout<<endl;
          break;

          case 5:
           cout<<"Figura"<<endl;
          piec();
            cout<<endl;
          break;

          case 6:
           cout<<"Figura"<<endl;
          sesi();
            cout<<endl;
          break;

          case 7:
           cout<<"Figura"<<endl;
          sep();
            cout<<endl;
          break;
           
           case 8:
            cout<<"Figura"<<endl;
          ost();
            cout<<endl;
          break;

          default:
          cout<<"Nepareiza ievade"<<endl;
          break;
    }

    } while(user != 0);
     system("pause");
    return 0;
}