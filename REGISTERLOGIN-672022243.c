#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nama[99],pass[50],nama1 [99],pass1 [50];
int a,b,c=0;
void main()
{

    int pil;
    printf("1. REGISTER\n");
    printf("2. LOGIN\n");
    printf("3. EXIT\n");
    printf("\n PILIHAN ANDA : \n");
    scanf("%d", &pil);

    switch(pil)
    {
    case 1:
        system("cls");
        regis();
        break;
    case 2:
        system("cls");
        login();
        break;
    }
}
void regis()
{

    printf("Silahkan Registrasi\n\n");
    printf("\nNama : ");
    scanf("%s", &nama);
    printf("\nPassword : ");
    scanf("%s", &pass);
    strcpy(nama1,nama);
    strcpy(pass1,pass);
    system("cls");
    main();
}

void login()

{
    printf("Please Login\n\n");
    printf("NAMA :");
    scanf("%s",&nama);
    printf("PASS :");

    do{pass[c]=getch();
    if(pass[c]!='\r'){
        printf("*");
    }
    c++;
    }while(pass[c-1]!='\r');
    pass[c-1]='\0';

    a=strcmp(nama1,nama);
    b=strcmp(pass1,pass);
    if(a == 0 && b == 0){
        printf("\nLOGIN SUKSES");
    }else{
        printf("PASSWORD/USERNAME SALAH");
    }

}
