#include<stdio.h>
#include<conio.h>
int Menu();
void Bus();
void Riksha();
void Cycle();
void ShowDetails();
void Delete();
int nob = 0, nor = 0, noc = 0, amount = 0, count = 0;
void main(){
    while(1){
    switch(Menu()){
    case 1:
        Bus();
        break;
    case 2:
        Riksha();
        break;
    case 3:
        Cycle();
        break;
    case 4:
        ShowDetails();
        break;
    case 5:
        Delete();
        break;
    case 6:
        exit(0);
    default :
    printf("Invalide choice:\n");
    }
    getch();
    }
}
int Menu(){
    int ch;
    printf("1. Enter Bus:\n");
    printf("2. Enter Riksha:\n");
    printf("3. Enter Cycle:\n");
    printf("4. Status:\n");
    printf("5. Delete Data:\n");
    printf("6. exit:\n");
    printf("\n\n Enter Your Choice:\n");
    scanf("%d", &ch);
    return (ch);
}

void Bus(){
    printf("Entry Successful\n");
    nob ++;
    amount = amount + 20;
    count ++;
}
void Riksha(){
    printf("Entry Successful\n");
    nor ++;
    amount = amount + 10;
    count ++;
}
void Cycle(){
    printf("Entry Successful\n");
    noc ++;
    amount = amount + 05;
    count ++;
}
void ShowDetails(){
    printf("Number of Bus: %d\n",nob);
    printf("Number of Riksha: %d\n",nor);
    printf("Number of Cycle: %d\n",noc);
    printf("Total Gain Amount: %d\n",nob);
    printf("Total Number of Vehicles: %d\n", count);
    printf("Total Gain Amount: %d\n", amount);
}
void Delete(){
nob = 0;
nor = 0;
noc = 0;
amount = 0;
count = 0;
}
