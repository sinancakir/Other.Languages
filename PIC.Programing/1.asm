LIST P=16F877A

PORTA EQU h'05'

PORTB EQU h'06'

STATUS EQU h'03'

TRISA EQU h'85'

TRISB EQU h'86'

ADCON1 EQU h'9F'


CLRF PORTB

BSF STATUS,5

CLRF TRISB

MOVLW h'06'

MOVWF ADCON1

MOVLW h'FF'

MOVWF TRISA

BCF STATUS,5


TEST

BTFSC PORTA,0

GOTO YAK

CLRF PORTB

GOTO TEST

YAK

MOVLW h'FF'

MOVWF PORTB

GOTO TEST

END
