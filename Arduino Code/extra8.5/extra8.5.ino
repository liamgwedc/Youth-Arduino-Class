int stcp_Pin = 4;
int shcp_Pin = 3;
int ds_Pin = 2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(stcp_Pin, OUTPUT);
  pinMode(shcp_Pin, OUTPUT);
  pinMode(ds_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  // Un-comment to loop
  loop_numbers(300);

  // Un-comment to display 1 number
  //display_binary(1);
}

void loop_numbers(int del){
  for (int i = 0; i < 256; i++){
    display_binary(i);
    delay(del);
  }
}

void display_binary(int num){
  digitalWrite(stcp_Pin, LOW);
  shiftOut(ds_Pin, shcp_Pin, LSBFIRST, num);
  digitalWrite(stcp_Pin, HIGH);
}
