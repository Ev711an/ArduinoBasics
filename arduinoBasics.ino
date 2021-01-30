/**
 * Some basic programming stuff!
 * This is a comment, a block comment to be specific,
 * comments are ignored by the compiler.
 * There are two type of comments:
 */

//This is an inline comment, everything after the // is ignored, but it only works for one line!

/* This is a block comment, everything between the symbols is ignored by the compiler.
It can cover multiple lines!*/




#define LED_PIN 13 //This is one way to write a constant. You'll notice that there isn't a semicolon after the statement, because this is a special kind of statement in the program. Anything with a '#' preceding it is taken care of by the pre-compiler

const int someConstant = 0; //This is another way to define a constant. The preceding method can only be used for global constants, whilst this one method can be used to create local constants as well. This particular one is global, though.




/*
 * Here are some global variable declarations of various different types! Any of these can be made into constants by preceding the data type with 'const.'
 */
int someInt;
float someFloat;
char someChar;
String someStr;

/*
 * You can declare multiple variables of the same type like this:
 */
int 
ledOn,
ledOff;




/*
 * This setup function will run once, when the arduino boots up.
 * This is where you should put any initialization code.
 */
void setup() {
  // put your setup code here, to run once:

/*
 * These are variable definitions, where we actually put a value inside a variable.
 */
  someInt = 600;
  someFloat = 0.75;
  someChar = 'c';
  someStr = "Hello There!";
  ledOn = HIGH;
  ledOff = LOW;

  int anotherInt = 98; //You can also declare and define a variable in a single statement. This particular variable is also a local variable, meaning it can only be used inside the setup() function, since it was declared there.

  pinMode(LED_PIN, OUTPUT); //:This will initialize LED_PIN to be an output

  Serial.begin(9600); //This will begin serial communication at 9600 bits per second.
}




/**
 * This loop function will run repeatedly, after the setup function finishes.
 * This is where you should put your main code.
 */
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_PIN, ledOn); //Writes the value of ledOn, HIGH, to LED_PIN
  Serial.println("Turned LED on!"); //Prints message to Serial monitor
  delay(someInt); //pauses the program for someInt milliseconds
  
  digitalWrite(LED_PIN, ledOff); //Writes the value of ledOff, LOW, to LED)_PIN
  Serial.println("Turned LED off!");
  delay(someInt);

}
