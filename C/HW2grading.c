#include <stdio.h>
#define LENGTH 10
void printLot(int parkingLot[LENGTH][LENGTH]);
void parkCar(int parkingLot[LENGTH][LENGTH], int car);
void removeCar(int parkingLot[LENGTH][LENGTH], int car);
int main() {
int parkingLot[LENGTH][LENGTH] = {};
int i, j, command, ticket;
for(i=0;i<LENGTH;i++) {
for(j=0;j<LENGTH;j++){
parkingLot[i][j] = -1;
}
}
printf("Welcome\n");
do{
printf("Please input your command:\n");
scanf("%d", &command);
switch (command){
case 0: printf("Goodbye. Here is the final ");
case 1: printLot(parkingLot);
break;
case 2: printf("A new car is entering. Please input a ticket number:\n");
scanf("%d", &ticket);
parkCar(parkingLot, ticket);
break;
case 3: printf("A car is leaving. Please input the ticket number of the leaving car:\n");
scanf("%d", &ticket);
removeCar(parkingLot, ticket);
break;
default:printf("Incorrect command, new command needed. ");
}
} while (command!=0);
return 0;
}
void printLot(int parkingLot[LENGTH][LENGTH]) {
int i, j;
printf("Parking Lot:\n");
for(i=0; i<LENGTH; i++) {
for (j=0; j<LENGTH; j++) {
printf("%d\t", parkingLot[i][j]);
}
printf("\n");
}
printf("\n");
}
void parkCar(int parkingLot[LENGTH][LENGTH], int car) {
int i, j;
for(i=0;i<LENGTH;i++) {
for(j=0;j<LENGTH;j++){
if (parkingLot[i][j] == -1) {
parkingLot[i][j] = car;
return;
}
}
}
printf("No more empty spots. ");
}
void removeCar(int parkingLot[LENGTH][LENGTH], int car) {
int i, j;
for(i=LENGTH;i>0;i--) {
for(j=LENGTH;j>0;j--){
if (parkingLot[i-1][j-1] == car) {
parkingLot[i-1][j-1] = -1;
return;
}
}
}
printf("No such car was found. New command required. ");
}
