void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    char ans = Serial.read();
    if(ans == '0') setColor(0, 0, 255);
    else if(ans == '4') setColor(255, 255, 50);
    else if(ans == '7') setColor(255, 203, 219);
    else setColor(255, 255, 0);
  }
}

void setColor(int vermelho, int verde, int azul){
  analogWrite(10, vermelho); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'vermelho'
  analogWrite(9, verde); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'verde'
  analogWrite(6, azul); //DEFINE O BRILHO DO LED DE ACORDO COM O VALOR INFORMADO PELA VARIÁVEL 'azul'
}
