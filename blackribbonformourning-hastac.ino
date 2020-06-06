/*
  Black Ribbon for Mourning

The vibration motor pulses in 1 second intervals; each pulse 
represents one black person killed by the police in 2016. The data 
comes from Mapping Police Violence.org. 

Out of deference to the creators of the dataset, we make no distinction
between the killing of those who are "unarmed" and whose who are 
"allegedly armed." 

One day is 39.3 seconds

Code by Kim Brillante Knight, in collaboration with Jessica C Murphy
and Dale MacDonald.
Fashioning Circuits; Feminist MakerSpace; SP&CE MediaLab; Emerging Gizmology Lab
UT Dallas

Prototype pepared for the HASTAC 2017 Conference exhibition, "The Wearable 
and Tangible Possible Worlds of Digital Humanities." Orlando, FL Nov 2 - 4, 2017.

  digitalWrite(Motor, HIGH); // 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
*/

int Motor = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin Motor as an output.
  pinMode(Motor, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // January 2016
  // January 1 and 2
  delay(78000); // wait for 79 seconds
  //January 3 
digitalWrite(Motor, HIGH);   // Germonta Wallace
  // turn the motor on by making the voltage HIGH
  delay(1000);                       // wait for a second
  digitalWrite(Motor, LOW);    // turn the motor off by making the voltage LOW
  delay(38300);               // wait for 38.3 seconds
  //January 4 
digitalWrite(Motor, HIGH);   // Eric John Senegal
  delay(1000);                       
  digitalWrite(Motor, LOW);   
  delay(1000);                      
digitalWrite(Motor, HIGH);  // Rodney Turner
  delay(1000);                     
  digitalWrite(Motor, LOW);   
  delay(36300);                       
  // January 5
digitalWrite(Motor, HIGH);   // Carlton Antonio Murphy
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);  
  // January 6
  delay(39300);
  // January 7
digitalWrite(Motor, HIGH);   // Samuel Dunn
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);  
  // January 8 and 9
  delay(78600);
  // January 10
digitalWrite(Motor, HIGH);   // Gynnya McMillen
/* 16 years old; died as a result of restraint when taken into custody at
a juvenile detention center in Elizabethtown, KY. 
*/
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);   
  // January 11 - 14
   delay(157200);
// January 15
digitalWrite(Motor, HIGH);   // Rakeem Bentley
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);  
  // January 16
digitalWrite(Motor, HIGH);   // Henry Bennett
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);   
  // January 17
digitalWrite(Motor, HIGH);   // Crayton West
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300); 
  //January 18 and 19
  delay(78600);
  // January 20
digitalWrite(Motor, HIGH);   // Timothy R. Albert
  delay(1000);                       
  digitalWrite(Motor, LOW);    
  delay(38300);   
  // January 21
digitalWrite(Motor, HIGH);   // Cedric Lamont Norris
  delay(1000);                       
  digitalWrite(Motor, LOW);  
  delay(38300);        
  // January 22 
digitalWrite(Motor, HIGH);   // Bryan Nelson
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300);
  // January 23
  delay(39300);
  // January 24    
digitalWrite(Motor, HIGH);   // Michelle Jenkins and Quantarius Miller
  delay(2000);                       
  digitalWrite(Motor, LOW); 
  delay(37300);   
  // January 25
  delay(39300);
  // January 26
digitalWrite(Motor, HIGH);   // Alphonzo Lamonte Porter Jr.
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  // January 27
digitalWrite(Motor, HIGH);   // Janet Wilson
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(1000);
digitalWrite(Motor, HIGH);   // Johnathan Bratcher
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(36300);  
  // January 28
digitalWrite(Motor, HIGH);   // Christopher Kalonji
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  // January 29   
digitalWrite(Motor, HIGH);   // Chrisopher Michael Dew
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(1000);
digitalWrite(Motor, HIGH);   // Randolph McClain
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(36300);       
  // January 30
digitalWrite(Motor, HIGH);   // Charles M. Smith
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  // January 31
digitalWrite(Motor, HIGH);   // Bruce Kelley Jr. 
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  // February 2016
  //Feb 1
digitalWrite(Motor, HIGH);   // Peter John
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  //Feb 2 - 3
  delay(78600);
  //Feb 4
digitalWrite(Motor, HIGH);   // Antronie Scott - San Antonio, TX
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  //Feb 5
digitalWrite(Motor, HIGH);   // Wendell Celestine Jr. 
  delay(1000);                       
  digitalWrite(Motor, LOW); 
  delay(38300); 
  //Feb 6
digitalWrite(Motor, HIGH); // David Hamilton III, Gene Mollique Jr. & Roland Rozay Zanie  
  /* David Hamilton III, Gene Mollique Jr, and Roland Rozay Zanie 
  all killed in the same police chase in San Francisco, CA
   */
  delay(3000);                       
  digitalWrite(Motor, LOW); 
  delay(36300); 
  // Feb 7
digitalWrite(Motor, HIGH); // Marese Vince Collins
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(38300);
//Feb 8
digitalWrite(Motor, HIGH); // David Joseph
/* 17 year old male running naked in streets in Austin; neighbors complain of 
  agressive behavior; shot by a police officer with 10 1/2 years experience
 */
  delay(1000);
  digitalWrite(Motor, LOW); 
  delay(1000);
digitalWrite(Motor, HIGH); // Eric Harris
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(1000);
digitalWrite(Motor, HIGH); // Shalamar Longer
  delay(1000);
  digitalWrite(Motor, LOW); 
  delay(34300);
// Feb 9 & 10
delay(78600);
// Feb 11
digitalWrite(Motor, HIGH); // Mohamed Barry
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(38300);
// Feb 12
digitalWrite(Motor, HIGH); // Jerand Ross
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(1000);  
digitalWrite(Motor, HIGH); // Jonathan Fowler
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(1000);  
digitalWrite(Motor, HIGH); // Peter Fanfan
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(1000); 
digitalWrite(Motor, HIGH); // Sahlah Ridgeway
  delay(1000);
  digitalWrite(Motor, LOW);
  delay(32300);
//Feb 13
digitalWrite(Motor, HIGH); // Ali Eisa Abdalla Yahia
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Calin Devante Roquemore
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);  
digitalWrite(Motor, HIGH); // Calvin Smith
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Dyzhawn L. Perkins 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);    
// Feb 14, 15, 16
delay(117900);
// Feb 17
digitalWrite(Motor, HIGH); // Paul Gaston
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Feb 18
digitalWrite(Motor, HIGH); // Trevor Tyreke Chambers
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);      
// Feb 19
delay(39300);
// Feb 20
digitalWrite(Motor, HIGH); // Ariel Clark
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Marcos Perea
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);  
// Feb 21
digitalWrite(Motor, HIGH); // Che Andre Taylor
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Kisha Michael and Marquntan Sandlin
      delay(2000);
      digitalWrite(Motor, LOW);
      delay(35300); 
// Feb 22
digitalWrite(Motor, HIGH); // Thomas Lane
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Feb 23
digitalWrite(Motor, HIGH); // Travis Stevenson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Feb 24
digitalWrite(Motor, HIGH); // Christopher J Davis
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);      
// Feb 25
digitalWrite(Motor, HIGH); // Cedric Larry Ford
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Greg Gunn
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);    
// Feb 26
digitalWrite(Motor, HIGH); // Kionte DeShaun Spencer
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);        
// Feb 28 and 29
delay (78600);
// Feb 29 
digitalWrite(Motor, HIGH); // Akiel Rakim Lakeith Denkings
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);    
// March
// Mar 1 - 9
delay(353700);
// Mar 10
digitalWrite(Motor, HIGH); // Arteair Porter
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);  
// Mar 11
digitalWrite(Motor, HIGH); // Tyre Privott
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);    
// Mar 12
digitalWrite(Motor, HIGH); // Marco Antonio Loud
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);  
digitalWrite(Motor, HIGH); // Peter William Gaines
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);                                                      
// Mar 13
digitalWrite(Motor, HIGH); // Jacai Colson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Keith Montgomery Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);   
// Mar 14  
digitalWrite(Motor, HIGH); // Lamar Harris
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);   
// Mar 15
delay(39300);
// Mar 16
digitalWrite(Motor, HIGH); // Cornell Gilbert and Syiid Brinkley
      delay(2000);
      digitalWrite(Motor, LOW);
      delay(37300);
// Mar 17
digitalWrite(Motor, HIGH); // Christopher Nelms and Scott Bennet
      delay(2000);
      digitalWrite(Motor, LOW);
      delay(37300);
// Mar 18
delay(39300);
// Mar 19
digitalWrite(Motor, HIGH); // India M. Beaty
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Thurman Reynolds
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Torrey Lamar Robinson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
 // Mar 20
 digitalWrite(Motor, HIGH); // Robert Dentmond
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Mar 21 and 22
delay(78600);
// Mar 23
digitalWrite(Motor, HIGH); // Alexio Allen
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Mar 24
digitalWrite(Motor, HIGH); // Dominique "Nonny" Silva
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);   
digitalWrite(Motor, HIGH); //  Jermon Seals
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300); 
// Mar 25 and 26
delay(78600);
// Mar 27 Easter Sunday
digitalWrite(Motor, HIGH); // Deriante Deon Miller
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);  
// Mar 29 and 30
delay(78600);
// Mar 31
digitalWrite(Motor, HIGH); // James Brown III
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);   
digitalWrite(Motor, HIGH); // James Craig Simpson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // John Parham
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Kimani Johnson and Matthew Wood
      delay(2000);
      digitalWrite(Motor, LOW);
      delay(31300);
// April
// April 1
delay(39300);
// April 2
digitalWrite(Motor, HIGH); // Cameron Glover
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Grant Hamilton
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300); 
// April 3 and 4
delay(78600);
// April 5
digitalWrite(Motor, HIGH); // Kevin Hicks
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 6
digitalWrite(Motor, HIGH); // Laronda Sweatt
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 7
digitalWrite(Motor, HIGH); // Darius Randell Robinson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 8
digitalWrite(Motor, HIGH); // Dazion Flenaugh
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Lamont Gulley
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// April 9
digitalWrite(Motor, HIGH); // Diahlo Grant
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Quron Williams
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// April 10
delay(39300);
// April 11
digitalWrite(Motor, HIGH); // Pierre Loury
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 12
delay(39300);
// April 13
digitalWrite(Motor, HIGH); // Rodney Watts
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 14
delay(39300);
// April 15
digitalWrite(Motor, HIGH); // Robert Howard
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 16
delay(39300);
// April 17
digitalWrite(Motor, HIGH); // Edson Thevenin
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // George Tillman
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Kisha Arrone
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Richard Bard Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(31300);
// April 18
digitalWrite(Motor, HIGH); // Demetrius Dorsey
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Rico Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 19
digitalWrite(Motor, HIGH); // Jorevis Scruggs
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 20, 21, 22
delay(117900);
// April 23
digitalWrite(Motor, HIGH); // Demarcus Semer
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Orlando Collins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Willie Tillman
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// April 24 and 35
delay(78600);
// April 26
digitalWrite(Motor, HIGH); // Joshua Brooks
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 27
delay(39300);
// April 28
digitalWrite(Motor, HIGH); // Ashtain Barnes
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// April 29 and 30
delay(78600);
// May
// May 1
digitalWrite(Motor, HIGH); // Benston Calvin Clinkscales
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Charlin Charles
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 2
digitalWrite(Motor, HIGH); // Reginal Darnell Dogan
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 3 and 4
delay(78600);
// May 5
digitalWrite(Motor, HIGH); // Burt T. Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Deresha Armstrong
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 6
digitalWrite(Motor, HIGH); // Ronald D. Williams Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 7
digitalWrite(Motor, HIGH); // Alton Witchard
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 8
digitalWrite(Motor, HIGH); // Lionel Gibson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 9
digitalWrite(Motor, HIGH); // Jaffort Demont Smith
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 10
digitalWrite(Motor, HIGH); // Arthur DaRosa
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 11
digitalWrite(Motor, HIGH); // Michael Kennedy
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Sean Ryan Mondragon
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 12
digitalWrite(Motor, HIGH); // David Dementarius Canty
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// May 13, 14, 15
delay(117900);
// May 16
digitalWrite(Motor, HIGH); // Jabril Robinson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 17
delay(39300);
// May 18
digitalWrite(Motor, HIGH); // Antwand Tyreese Cousins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 19
digitalWrite(Motor, HIGH); // Jessica Williams
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Kentrill William Carraway
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 20 and 21
delay(78600);
// May 22
digitalWrite(Motor, HIGH); // Michael Eugene Wilson Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Vernell Bing Jr.
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 23 and 24
delay(78600); 
// May 25
digitalWrite(Motor, HIGH); // Doll Pierre Louis
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 26
digitalWrite(Motor, HIGH); // Devonte Gates
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 27
delay(39300);
// May 28
digitalWrite(Motor, HIGH); // Dennis Hudson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Ollie Lee Brooks
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// May 29
delay(39300);
// May 30
digitalWrite(Motor, HIGH); // Osee Calix
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// May 31
delay(39300);
// June
// June 1
digitalWrite(Motor, HIGH); // Michael Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 2
digitalWrite(Motor, HIGH); // Rodney Rodriguez Smith
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // William Demetrius "Meat-Meat" James
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// June 3
delay(39300);
// June 4
digitalWrite(Motor, HIGH); // Demarco Rhymes
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 5
delay(39300);
// June 6
digitalWrite(Motor, HIGH); //  Henry Green
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 7
digitalWrite(Motor, HIGH); // Willis Walker Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 8
delay(39300);
// June 9
digitalWrite(Motor, HIGH); // John Michael Brisco
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Lorez Rayfond Chambers
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// June 10
digitalWrite(Motor, HIGH); // Keith Bursey
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 11
digitalWrite(Motor, HIGH); // 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 12
digitalWrite(Motor, HIGH); // Lyndarius Witherspoon
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 12
digitalWrite(Motor, HIGH); // John Williams
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 13
digitalWrite(Motor, HIGH); // Frank Anthony Kelley
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Michael Moore
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// June 14
digitalWrite(Motor, HIGH); // Mohammad Sadegh Moghaddam
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 15, 16, 17
delay(117900);
// June 18
digitalWrite(Motor, HIGH); // Antwun Shumpert
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 19
digitalWrite(Motor, HIGH); // Anthony Ford
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Clarence Mahogany X. Howard
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Rashaun Lloyd
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Terry Maddox aka Gary Porter
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);
// June 20
digitalWrite(Motor, HIGH); // Raphael M. Bostick
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 21
delay(39300);
// June 22
digitalWrite(Motor, HIGH); // Antonio Richardson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Deravis Rogers
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Isaiah Core III
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Quencezola Splunge
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);
// June 23
digitalWrite(Motor, HIGH); // Angelo Brown
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jay Anderson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// June 24
digitalWrite(Motor, HIGH); // Ismael Miranda
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 25
delay(39300);
// June 26
digitalWrite(Motor, HIGH); // Donte Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Germichael Kennedy
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// June 27
digitalWrite(Motor, HIGH); // Sherman Evans
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 28
delay(39300);
// June 29
digitalWrite(Motor, HIGH); // Lafayette Evans
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Tyrone Reado
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// June 30
digitalWrite(Motor, HIGH); // Kawme Patrick
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July
// July 1
digitalWrite(Motor, HIGH); // Jimmy Malone
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
 digitalWrite(Motor, HIGH); // Ronals Arrington
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 2
 digitalWrite(Motor, HIGH); // Jai "Jerry" Williams
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 3
delay(39300);
// July 4
 digitalWrite(Motor, HIGH); // Delrawn Small
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Name withheld by police
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Sidney Washington Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// July 5
 digitalWrite(Motor, HIGH); // Alton Sterling
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 6
 digitalWrite(Motor, HIGH); // Kenyatta Lee Moorehead
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Philando Castile
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 7
 digitalWrite(Motor, HIGH); // Earnest Fells
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Micah Xavier Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 8
delay(39300);
// July 9
 digitalWrite(Motor, HIGH); // Andre Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Tyler Gebhard
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 10
digitalWrite(Motor, HIGH); // Alva Braziel
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 11
digitalWrite(Motor, HIGH); // Jason Brooks
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Joseph Mann
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Orville Edwards
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// July 12
delay(39300);
// July 13
 digitalWrite(Motor, HIGH); // DeAngelo W. Webb
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 14
 digitalWrite(Motor, HIGH); // Dayten Ernest Harper
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Isaiah Soehngen
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 15 and 16
delay(78600);
// July 17
 digitalWrite(Motor, HIGH); // Gavin Eugene Long
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
 digitalWrite(Motor, HIGH); // Jermaine Johnson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 18 - 20
delay(117900);
// July 21
digitalWrite(Motor, HIGH); // Derek Love
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 22
delay(39300);
// July 23
digitalWrite(Motor, HIGH); // Austin Jerry Lee Howard Jr.
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Bernard Wells III
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 24
delay(39300);
// July 25
digitalWrite(Motor, HIGH); // Jeff Cornell Tyson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Richard Risher Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// July 26
delay(39300);
// July 27
digitalWrite(Motor, HIGH); // Dalvin Hollins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Devon Martes
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jason Earl Armstrong Jr
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// July 28
digitalWrite(Motor, HIGH); // Donnell Thompson Jr
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jeffrey Smith
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Paul O'Neal
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// July 29 and 30
delay(78600);
//July 31
digitalWrite(Motor, HIGH); // Limichael Shine
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August
// August 1
digitalWrite(Motor, HIGH); // Korryn Gaines
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Richard Gene Swihart
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// August 2
digitalWrite(Motor, HIGH); // Demarco Newman
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 3 and 4
delay(78600);
// August 5
digitalWrite(Motor, HIGH); // Jamarion Rashad Robinson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 6
delay(39300);
// August 7
digitalWrite(Motor, HIGH); // Earl "Shaleek" Pinckney
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jawari Porter
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 8
digitalWrite(Motor, HIGH); // Darnell Wicker
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 9
digitalWrite(Motor, HIGH); // Fred Barlow
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 10 - 12
delay(117900);
// August 13
digitalWrite(Motor, HIGH); // Dominic M Neal
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Kendrick Brown
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Sylville Smith
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// August 14 and 15
delay(78600);
// August 16
digitalWrite(Motor, HIGH); // Colby Friday
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Kenney Watkins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// August 17
digitalWrite(Motor, HIGH); // Omer Ismail Ali
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 18, 19, 20
delay(117900);
// August 21
digitalWrite(Motor, HIGH); // Bernie Porche
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Brandon Coles
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// August 22
digitalWrite(Motor, HIGH); // Kelley Brandon Forte
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 23 - 24
delay(78600);
// August 25
digitalWrite(Motor, HIGH); // Donta Taylor
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 26
delay(39300);
// August 27
digitalWrite(Motor, HIGH); // Alfred Toe
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// August 28
delay(39300);
// August 29
digitalWrite(Motor, HIGH); // Jaqwan Julius Terry
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// August 30
digitalWrite(Motor, HIGH); // Levonia Riggins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// August 31
delay(39300);
// September
// September 1
delay(39300);  
// September 2
digitalWrite(Motor, HIGH); // Michael Thompson Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// September 3
digitalWrite(Motor, HIGH); // Jerome Damon
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// September 4
delay(39300); 
// September 5
digitalWrite(Motor, HIGH); // Moses Ruben
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// September 6
digitalWrite(Motor, HIGH); // Dylan Papa
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// September 7
digitalWrite(Motor, HIGH); // Robert Lee Brown
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Sadiq Bishara-Abaker Idris
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// September 8
delay(39300); 
// September 9
digitalWrite(Motor, HIGH); // Gregory Frazier
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Stacy Hardy
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// September 10
delay(39300); 
// September 11
digitalWrite(Motor, HIGH); // Terrence Sterling
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// September  12
digitalWrite(Motor, HIGH); // Markell Lamarr Bivins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
//September 13
delay(39300);
// September 14
digitalWrite(Motor, HIGH); // Tyre King 13 years old
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);  
// September 15
delay(39300); 
// September 16
digitalWrite(Motor, HIGH); // Terence Crutcher
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// September 17
digitalWrite(Motor, HIGH); // Dahir Aidan
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Nicolas Glenn
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Tawon Boyd
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// Sept 18
digitalWrite(Motor, HIGH); // Philip Hasan
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Sept 19
delay(39300);
// Sept 20
digitalWrite(Motor, HIGH); // Keith Lamont Scott
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Sept 21 and 22
delay(78600);
// Sept 23
digitalWrite(Motor, HIGH); // Oddis Colvin
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Sept 24 - 26
delay(117900);
// Sept 27
digitalWrite(Motor, HIGH); // Alfred Olango
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Sept 28
digitalWrite(Motor, HIGH); // Christopher Sowell
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Sept 29
delay(39300);
// Sept 30
digitalWrite(Motor, HIGH); // Douglas Rainey
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jacquarius Robinson 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Reginald Thomas Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // George Richards-Meyers and Najier Salaam
      delay(2000);
      digitalWrite(Motor, LOW);
      delay(31300);
// October
// Oct 1
digitalWrite(Motor, HIGH); // Carnell Snell Jr
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 2
digitalWrite(Motor, HIGH); // Donte Jones
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 3 - 6
delay(157200);
// Oct 7
digitalWrite(Motor, HIGH); // Christopher Darnell Shackleford
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Larry Daneil Matthews
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// Oct 8
delay(39300);
// Oct 9
digitalWrite(Motor, HIGH); // Deric Brown
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 10
digitalWrite(Motor, HIGH); // Tavon Desean Jenkins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 11
delay(39300);
// Oct 12
digitalWrite(Motor, HIGH); // Kirk Figueroa
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 13 - 17
delay(196500);
// Oct 18
digitalWrite(Motor, HIGH); // Darius Winberly
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Deborah Danner
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// Oct 19 -22
delay(157200);
// Oct 23
digitalWrite(Motor, HIGH); // Demetrious Mac Moore
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 24
digitalWrite(Motor, HIGH); // Aaron Ballard
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 25
digitalWrite(Motor, HIGH); // Jeremiah Barnes, Chiquita Barnes Flowers, and Yshaneet Magee
/* Jeremiah was 2 years old and in a car with adults which crashed into a tree f
  following a high speed chase
 */
      delay(3000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Roy Lee Richards
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(35300);
// Oct 26
digitalWrite(Motor, HIGH); // Malcolm Loren Hickson
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 27
digitalWrite(Motor, HIGH); // Lamont Perry
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Thad Hale
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// Oct 28
digitalWrite(Motor, HIGH); // Jason King
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 29
delay(39300);
// Oct 30
digitalWrite(Motor, HIGH); // Terrence Coleman
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Oct 31
digitalWrite(Motor, HIGH); // Michelle Lee Shirley
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// November
// Nov 1
digitalWrite(Motor, HIGH); // Keenan Bradley
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 2
delay(39300);
// Nov 3
digitalWrite(Motor, HIGH); // Ferguson Claude Laurent Jr. 
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 4
delay(39300);
// Nov 5
digitalWrite(Motor, HIGH); // Joshua Beal
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 6
delay(39300);
// Nov 7
digitalWrite(Motor, HIGH); // Darryl Chisholm
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 8
digitalWrite(Motor, HIGH); // Ritchie Lee Harbison
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 9 and 10
delay(78600);
// Nov 11
digitalWrite(Motor, HIGH); // Andrew Depeiza
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 12 - 14
delay(117900);
// Nov 15
digitalWrite(Motor, HIGH); // Rasheem Singletary
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 16 and 17
delay(78600);
// Nov 18
digitalWrite(Motor, HIGH); // Darius Jones
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Dontrell Montese Carter
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Gabriel Parker
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Samson Fleurant
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);
// Nov 19
digitalWrite(Motor, HIGH); // Erickson Gomez Brito
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300); 
// Nov 20
delay(39300);
// Nov 21
digitalWrite(Motor, HIGH); // George Bush III
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 22
digitalWrite(Motor, HIGH); // Elijah Cobb
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000); 
digitalWrite(Motor, HIGH); // Frank Clark
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Ivory C. Pantallion III
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Talif Scudder
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);
//Nov 23
digitalWrite(Motor, HIGH); // Kajuan Raye
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 24 Thanksgiving Day
delay(39300);
// Nov 25
digitalWrite(Motor, HIGH); // Cleotha Mitchell
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jerome Chris Harmon
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(36300);
// Nov 26
delay(39300);
// Nov 27
digitalWrite(Motor, HIGH); // Richard Grimes
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Terrell Walker
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Nov 28
digitalWrite(Motor, HIGH); // Abdul Razak Ali Artan
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Irecas Rayshion "Suga Ray" Valentine
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Jason Stringer
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(32300);
// Nov 29
delay(39300);
// Nov 30
digitalWrite(Motor, HIGH); // David K. Crosby-Dowdy
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// December
// Dec 1
digitalWrite(Motor, HIGH); // Bruce R. Johnson II
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 2
digitalWrite(Motor, HIGH); // Paul Mebane
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 3
delay(39300);
// Dec 4
digitalWrite(Motor, HIGH); // Norman Gary
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 5 and 6
delay(78600);
// Dec 7
digitalWrite(Motor, HIGH); // Mark Anthony Hicks
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Name withheld by police
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Redrick Jevon Batiste
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// Dec 8 and 9
delay(78600);
// Dec 10
digitalWrite(Motor, HIGH); // Waltki Cermoun Williams
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 11
delay(39300);
// Dec 12
digitalWrite(Motor, HIGH); // Kenneth Robledo
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
// Dec 13
digitalWrite(Motor, HIGH); // Earl Labon Eubanks Jr
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(1000);
digitalWrite(Motor, HIGH); // Lavar Montray Douglas
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(34300);
// Dec 14
delay(39300);
// Dec 15
digitalWrite(Motor, HIGH); // Marlon Lewis
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 16 and 17
delay(78600);
// Dec 18
digitalWrite(Motor, HIGH); // Ryan Joseph
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 19 and 20
delay(39300);
// Dec 21
digitalWrite(Motor, HIGH); // Anthony Lovell Eddington
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 22
digitalWrite(Motor, HIGH); // Terrence Thomas Jr
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 23
digitalWrite(Motor, HIGH); // Marcus Dushane White
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 24 Christmas Eve
digitalWrite(Motor, HIGH); // Name withheld by police
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 25 Christmas Day
digitalWrite(Motor, HIGH); // Gerald Javon Hall
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 26 - 27
delay(78600);
// Dec 28
digitalWrite(Motor, HIGH); // Nathan Howard Hamilton
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 29
digitalWrite(Motor, HIGH); // James Rich II
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 30 
digitalWrite(Motor, HIGH); // Jamal Robbins
      delay(1000);
      digitalWrite(Motor, LOW);
      delay(38300);
// Dec 31 New Year's Eve
delay(39300);

}
