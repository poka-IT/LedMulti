int redPin1 = 3;
int greenPin1 = 6;
int bluePin1 = 5;

int redPin2 = 9;
int greenPin2 = 11;
int bluePin2 = 10;

int typeCouleur = 1;
int r = 0;
int g = 0;
int b = 0;
 
void setup()
{
  pinMode(redPin1, OUTPUT);
  pinMode(greenPin1, OUTPUT);
  pinMode(bluePin1, OUTPUT);  
}
 
void loop()
{
  style2();
  //setColor(143,186,57);
  
}
 
void setColor(int red, int green, int blue)
{
  //analogWrite(50);
  analogWrite(redPin1, 255-red);
  analogWrite(greenPin1, 255-green);
  analogWrite(bluePin1, 255-blue);
  
  analogWrite(redPin2, 255-red);
  analogWrite(greenPin2, 255-green);
  analogWrite(bluePin2, 255-blue); 
}
