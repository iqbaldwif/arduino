const int button = 2; // tmbl
const int lpin = 13;   // led
bool led = false;    

void setup() {
  pinMode(button, INPUT_PULLUP); 
  pinMode(lpin, OUTPUT);
}

void loop() {
  if (digitalRead(button) == LOW) { //jiak tmbol ditekn slma 50ms
    delay(50);// debouncing butoon
    if (digitalRead(button) == LOW) { // dan jika tombol ditekan
      led = !led; // balik kondisi bool led
      digitalWrite(lpin, led ? HIGH : LOW);// cek kondisi terahkir boolean led
    while (digitalRead(button) == LOW) { } //menunggu smpai tombol ditekan dan kemudian melepaskannya
    }
  }
}
