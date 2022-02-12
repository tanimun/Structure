#include<String.h>
#include<SoftwareSerial.h>
struct servicePeople{
  int ID;
  char name[20];
  char PW[10];
  long Phone;
} myServicePeople, yourServicePeople;

void setup() {

  Serial.begin(9600);
  Serial.print("myServicePeople lvalue ");
  Serial.print((int) &myServicePeople);
  Serial.print(" yourServicePeople lvalue");
  Serial.println((int) &yourServicePeople);

  yourServicePeople.ID = 205;
  Serial.print("myServicePeople.ID rvalue: ");
  Serial.print(myServicePeople.ID);
  Serial.print(" yourServicePeople.ID rvalue");
  Serial.print(yourServicePeople.ID);

  myServicePeople = yourServicePeople;

  Serial.println("After assignemnt: ");
  Serial.print("myServicePeople.ID rvalue: ");
  Serial.print(myServicePeople.ID);
  Serial.print(" yourServicePeople.ID rvaue: ");
  Serial.println(yourServicePeople.ID);
  Serial.print("A servicePerson structure takes ");
  Serial.print(sizeof(servicePeople));
  Serial.println(" bytes of storage");
}

void loop() {
  // put your main code here, to run repeatedly:
}
