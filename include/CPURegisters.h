#define DDRB  (*(volatile unsigned char*)0x24) // 13.4.3 DDRB – The Port B Data Direction Register / Page 72

// DDRB > DDB7 DDB6 DDB5 DDB4 DDB3 DDB2 DDB1 DDB0
#define DDB7 7
#define DDB6 6
#define DDB5 5
#define DDB4 4
#define DDB3 3
#define DDB2 2
#define DDB1 1
#define DDB0 0

#define PORTB (*(volatile unsigned char*)0x25) // 13.4.2 PORTB – The Port B Data Register / Page 72

// PORTB > PORTB7 PORTB6 PORTB5 PORTB4 PORTB3 PORTB2 PORTB1 PORTB0
#define PORTB7 7
#define PORTB6 6
#define PORTB5 5
#define PORTB4 4
#define PORTB3 3
#define PORTB2 2
#define PORTB1 1
#define PORTB0 0

#define PINB  (*(volatile unsigned char*)0x23) // 13.4.4 PINB – The Port B Input Pins Address / Page 72

// PINB > PINB7 PINB6 PINB5 PINB4 PINB3 PINB2 PINB1 PINB0
#define PINB7 7
#define PINB6 6
#define PINB5 5
#define PINB4 4
#define PINB3 3
#define PINB2 2
#define PINB1 1
#define PINB0 0

#define DDRC  (*(volatile unsigned char*)0x27) // 13.4.6 DDRC – The Port C Data Direction Register / Page 73

// DDRC > – DDC6 DDC5 DDC4 DDC3 DDC2 DDC1 DDC0
#define DDC6 6
#define DDC5 5
#define DDC4 4
#define DDC3 3
#define DDC2 2
#define DDC1 1
#define DDC0 0

#define PORTC (*(volatile unsigned char*)0x28) // 13.4.5 PORTC – The Port C Data Register / Page 73

// PORTC > – PORTC6 PORTC5 PORTC4 PORTC3 PORTC2 PORTC1 PORTC0
#define PORTC6 6
#define PORTC5 5
#define PORTC4 4
#define PORTC3 3
#define PORTC2 2
#define PORTC1 1
#define PORTC0 0

#define PINC  (*(volatile unsigned char*)0x26) // 13.4.7 PINC – The Port C Input Pins Address / Page 73
// PINC > – PINC6 PINC5 PINC4 PINC3 PINC2 PINC1 PINC0
#define PINC6 6
#define PINC5 5
#define PINC4 4
#define PINC3 3
#define PINC2 2
#define PINC1 1
#define PINC0 0

#define DDRD  (*(volatile unsigned char*)0x2A) // 13.4.9 DDRD – The Port D Data Direction Register / Page 73
// DDRD > DDD7 DDD6 DDD5 DDD4 DDD3 DDD2 DDD1 DDD0

#define DDD7 7
#define DDD6 6
#define DDD5 5
#define DDD4 4
#define DDD3 3
#define DDD2 2
#define DDD1 1
#define DDD0 0

#define PORTD (*(volatile unsigned char*)0x2B) // 13.4.8 PORTD – The Port D Data Register / Page 73

// PORTD > PORTD7 PORTD6 PORTD5 PORTD4 PORTD3 PORTD2 PORTD1 PORTD0
#define PORTD7 7
#define PORTD6 6
#define PORTD5 5
#define PORTD4 4
#define PORTD3 3
#define PORTD2 2
#define PORTD1 1
#define PORTD0 0

#define PIND  (*(volatile unsigned char*)0x29) // 13.4.10 PIND – The Port D Input Pins Address / Page 73

// PIND > PIND7 PIND6 PIND5 PIND4 PIND3 PIND2 PIND1 PIND0
#define PIND7 7
#define PIND6 6
#define PIND5 5
#define PIND4 4
#define PIND3 3
#define PIND2 2
#define PIND1 1
#define PIND0 0

#define ADCH  (*(volatile unsigned char*)0x79) // ADCH – The ADC Data Register / Page 219

// ADCH > – – – – – – ADC9 ADC8
#define ADC9 1
#define ADC8 0

#define ADCL  (*(volatile unsigned char*)0x78) // ADCL – The ADC Data Register / Page 219

// ADCL > ADC7 ADC6 ADC5 ADC4 ADC3 ADC2 ADC1 ADC0
#define ADC7 7
#define ADC6 6
#define ADC5 5
#define ADC4 4
#define ADC3 3
#define ADC2 2
#define ADC1 1
#define ADC0 0

#define ADMUX  (*(volatile unsigned char*)0x7C) // 23.9.1 ADMUX – ADC Multiplexer Selection Register / Page 217 / reference voltage

// ADMUX > REFS1 REFS0 ADLAR – MUX3 MUX2 MUX1 MUX0
#define REFS1 7
#define REFS0 6
#define ADLAR 5
#define MUX3 3
#define MUX2 2
#define MUX1 1
#define MUX0 0

#define ADCSRA  (*(volatile unsigned char*)0x7A) // 23.9.2 ADCSRA – ADC Control and Status Register A / Page 218 

// ADCSRA >ADEN ADSC ADATE ADIF ADIE ADPS2 ADPS1 ADPS0
#define ADEN 7
#define ADSC 6
#define ADATE 5
#define ADIF 4
#define ADIE 3
#define ADPS2 2
#define ADPS1 1
#define ADPS0 0
