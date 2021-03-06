#byte TOSU = 0xFFF
#word TOS = 0xFFE
#byte STKPTR = 0xFFC
#bit    STKOVF = STKPTR.7
#byte STKPTR = 0xFFC
#bit    STKPTR0 = STKPTR.0
#bit    STKPTR1 = STKPTR.1
#bit    STKPTR2 = STKPTR.2
#bit    STKPTR3 = STKPTR.3
#bit    STKPTR4 = STKPTR.4
#bit    STKUNF = STKPTR.6
#bit    STKFUL = STKPTR.7
#byte PCLATU = 0xFFB
#byte PCLATH = 0xFFA
#byte PCL = 0xFF9
#byte TBLPTRU = 0xFF8
#bit    TBLPTRU0 = TBLPTRU.0
#bit    TBLPTRU1 = TBLPTRU.1
#bit    TBLPTRU2 = TBLPTRU.2
#bit    TBLPTRU3 = TBLPTRU.3
#bit    TBLPTRU4 = TBLPTRU.4
#bit    ACSS = TBLPTRU.5
#word TBLPTR = 0xFF7
#byte TABLAT = 0xFF5
#word PROD = 0xFF4
#byte INTCON = 0xFF2
#bit    RBIF = INTCON.0
#bit    INT0IF = INTCON.1
#bit    TMR0IF = INTCON.2
#bit    RBIE = INTCON.3
#bit    INT0IE = INTCON.4
#bit    TMR0IE = INTCON.5
#bit    PEIE_GIEL = INTCON.6
#bit    GIE_GIEH = INTCON.7
#byte INTCON = 0xFF2
#bit    PEIE = INTCON.6
#bit    GIE = INTCON.7
#byte INTCON = 0xFF2
#bit    INT0F = INTCON.1
#bit    T0IF = INTCON.2
#bit    INT0E = INTCON.4
#bit    T0IE = INTCON.5
#bit    GIEL = INTCON.6
#bit    GIEH = INTCON.7
#byte INTCON2 = 0xFF1
#bit    T0IP = INTCON2.2
#byte INTCON2 = 0xFF1
#bit    RBIP = INTCON2.0
#bit    TMR0IP = INTCON2.2
#bit    INTEDG2 = INTCON2.4
#bit    INTEDG1 = INTCON2.5
#bit    INTEDG0 = INTCON2.6
#bit    RBPU = INTCON2.7
#byte INTCON3 = 0xFF0
#bit    INT1F = INTCON3.0
#bit    INT2F = INTCON3.1
#bit    INT1E = INTCON3.3
#bit    INT2E = INTCON3.4
#bit    INT1P = INTCON3.6
#bit    INT2P = INTCON3.7
#byte INTCON3 = 0xFF0
#bit    INT1IF = INTCON3.0
#bit    INT2IF = INTCON3.1
#bit    INT1IE = INTCON3.3
#bit    INT2IE = INTCON3.4
#bit    INT1IP = INTCON3.6
#bit    INT2IP = INTCON3.7
#byte INDF0 = 0xFEF
#byte POSTINC0 = 0xFEE
#byte POSTDEC0 = 0xFED
#byte PREINC0 = 0xFEC
#byte PLUSW0 = 0xFEB
#word FSR0 = 0xFEA
#byte WREG = 0xFE8
#byte INDF1 = 0xFE7
#byte POSTINC1 = 0xFE6
#byte POSTDEC1 = 0xFE5
#byte PREINC1 = 0xFE4
#byte PLUSW1 = 0xFE3
#word FSR1 = 0xFE2
#byte BSR = 0xFE0
#byte INDF2 = 0xFDF
#byte POSTINC2 = 0xFDE
#byte POSTDEC2 = 0xFDD
#byte PREINC2 = 0xFDC
#byte PLUSW2 = 0xFDB
#word FSR2 = 0xFDA
#byte STATUS = 0xFD8
#bit    C = STATUS.0
#bit    DC = STATUS.1
#bit    Z = STATUS.2
#bit    OV = STATUS.3
#bit    N = STATUS.4
#word TMR0 = 0xFD7
#byte T0CON = 0xFD5
#bit    T0PS0 = T0CON.0
#bit    T0PS1 = T0CON.1
#bit    T0PS2 = T0CON.2
#bit    PSA = T0CON.3
#bit    T0SE = T0CON.4
#bit    T0CS = T0CON.5
#bit    T016BIT = T0CON.6
#bit    TMR0ON = T0CON.7
#byte OSCCON = 0xFD3
#bit    FLTS = OSCCON.2
#byte OSCCON = 0xFD3
#bit    SCS0 = OSCCON.0
#bit    SCS1 = OSCCON.1
#bit    IOFS = OSCCON.2
#bit    OSTS = OSCCON.3
#bit    IRCF0 = OSCCON.4
#bit    IRCF1 = OSCCON.5
#bit    IRCF2 = OSCCON.6
#bit    IDLEN = OSCCON.7
#byte LVDCON = 0xFD2
#bit    IVRST = LVDCON.5
#byte LVDCON = 0xFD2
#bit    LVDL0 = LVDCON.0
#bit    LVDL1 = LVDCON.1
#bit    LVDL2 = LVDCON.2
#bit    LVDL3 = LVDCON.3
#bit    LVDEN = LVDCON.4
#bit    IRVST = LVDCON.5
#byte WDTCON = 0xFD1
#bit    SWDTEN = WDTCON.0
#bit    WDTW = WDTCON.7
#byte RCON = 0xFD0
#bit    BOR = RCON.0
#bit    POR = RCON.1
#bit    PD = RCON.2
#bit    TO = RCON.3
#bit    RI = RCON.4
#bit    IPEN = RCON.7
#word TMR1 = 0xFCF
#byte T1CON = 0xFCD
#bit    T1INSYNC = T1CON.2
#byte T1CON = 0xFCD
#bit    TMR1ON = T1CON.0
#bit    TMR1CS = T1CON.1
#bit    T1SYNC = T1CON.2
#bit    T1OSCEN = T1CON.3
#bit    T1CKPS0 = T1CON.4
#bit    T1CKPS1 = T1CON.5
#bit    T1RUN = T1CON.6
#bit    RD16 = T1CON.7
#byte TMR2 = 0xFCC
#byte PR2 = 0xFCB
#byte T2CON = 0xFCA
#bit    T2OUTPS0 = T2CON.3
#bit    T2OUTPS1 = T2CON.4
#bit    T2OUTPS2 = T2CON.5
#bit    T2OUTPS3 = T2CON.6
#byte T2CON = 0xFCA
#bit    T2CKPS0 = T2CON.0
#bit    T2CKPS1 = T2CON.1
#bit    TMR2ON = T2CON.2
#bit    TOUTPS0 = T2CON.3
#bit    TOUTPS1 = T2CON.4
#bit    TOUTPS2 = T2CON.5
#bit    TOUTPS3 = T2CON.6
#byte SSPBUF = 0xFC9
#byte SSPADD = 0xFC8
#byte SSPSTAT = 0xFC7
#bit    READ_WRITE = SSPSTAT.2
#bit    DATA_ADDRESS = SSPSTAT.5
#byte SSPSTAT = 0xFC7
#bit    WRITE = SSPSTAT.2
#bit    ADDRESS = SSPSTAT.5
#byte SSPSTAT = 0xFC7
#bit    BF = SSPSTAT.0
#bit    UA = SSPSTAT.1
#bit    R = SSPSTAT.2
#bit    S = SSPSTAT.3
#bit    P = SSPSTAT.4
#bit    D = SSPSTAT.5
#bit    CKE = SSPSTAT.6
#bit    SMP = SSPSTAT.7
#byte SSPSTAT = 0xFC7
#bit    R_W = SSPSTAT.2
#bit    D_A = SSPSTAT.5
#byte SSPSTAT = 0xFC7
#bit    W = SSPSTAT.2
#bit    A = SSPSTAT.5
#byte SSPCON = 0xFC6
#bit    SSPM0 = SSPCON.0
#bit    SSPM1 = SSPCON.1
#bit    SSPM2 = SSPCON.2
#bit    SSPM3 = SSPCON.3
#bit    CKP = SSPCON.4
#bit    SSPEN = SSPCON.5
#bit    SSPOV = SSPCON.6
#bit    WCOL = SSPCON.7
#word ADRES = 0xFC4
#byte ADCON0 = 0xFC2
#bit    GO_DONE = ADCON0.1
#byte ADCON0 = 0xFC2
#bit    ADON = ADCON0.0
#bit    GO = ADCON0.1
#bit    ACMOD0 = ADCON0.2
#bit    ACMOD1 = ADCON0.3
#bit    ACSCH = ADCON0.4
#bit    ACONV = ADCON0.5
#byte ADCON0 = 0xFC2
#bit    GODONE = ADCON0.1
#byte ADCON0 = 0xFC2
#bit    DONE = ADCON0.1
#byte ADCON1 = 0xFC1
#bit    FFOVFL = ADCON1.2
#byte ADCON1 = 0xFC1
#bit    ADPNT0 = ADCON1.0
#bit    ADPNT1 = ADCON1.1
#bit    BFOVFL = ADCON1.2
#bit    BFEMT = ADCON1.3
#bit    FIFOEN = ADCON1.4
#bit    VCFG0 = ADCON1.6
#bit    VCFG1 = ADCON1.7
#byte ADCON2 = 0xFC0
#bit    ADCS0 = ADCON2.0
#bit    ADCS1 = ADCON2.1
#bit    ADCS2 = ADCON2.2
#bit    ACQT0 = ADCON2.3
#bit    ACQT1 = ADCON2.4
#bit    ACQT2 = ADCON2.5
#bit    ACQT3 = ADCON2.6
#bit    ADFM = ADCON2.7
#word CCPR1 = 0xFBF
#byte CCP1CON = 0xFBD
#bit    CCP1Y = CCP1CON.4
#bit    CCP1X = CCP1CON.5
#byte CCP1CON = 0xFBD
#bit    CCP1M0 = CCP1CON.0
#bit    CCP1M1 = CCP1CON.1
#bit    CCP1M2 = CCP1CON.2
#bit    CCP1M3 = CCP1CON.3
#bit    DC1B0 = CCP1CON.4
#bit    DC1B1 = CCP1CON.5
#word CCPR2 = 0xFBC
#byte CCP2CON = 0xFBA
#bit    CCP2Y = CCP2CON.4
#bit    CCP2X = CCP2CON.5
#byte CCP2CON = 0xFBA
#bit    CCP2M0 = CCP2CON.0
#bit    CCP2M1 = CCP2CON.1
#bit    CCP2M2 = CCP2CON.2
#bit    CCP2M3 = CCP2CON.3
#bit    DC2B0 = CCP2CON.4
#bit    DC2B1 = CCP2CON.5
#byte ANSEL1 = 0xFB9
#bit    ANS8 = ANSEL1.0
#byte ANSEL0 = 0xFB8
#byte T5CON = 0xFB7
#bit    TMR5ON = T5CON.0
#bit    TMR5CS = T5CON.1
#bit    T5SYNC = T5CON.2
#bit    T5PS0 = T5CON.3
#bit    T5PS1 = T5CON.4
#bit    T5MOD = T5CON.5
#bit    RESEN = T5CON.6
#bit    T5SEN = T5CON.7
#byte QEICON = 0xFB6
#bit    UP_DOWN = QEICON.5
#byte QEICON = 0xFB6
#bit    PDEC0 = QEICON.0
#bit    PDEC1 = QEICON.1
#bit    QEIM0 = QEICON.2
#bit    QEIM1 = QEICON.3
#bit    QEIM2 = QEICON.4
#bit    UP = QEICON.5
#bit    QERR = QEICON.6
#bit    VELM = QEICON.7
#byte QEICON = 0xFB6
#bit    UPDOWN = QEICON.5
#byte QEICON = 0xFB6
#bit    DOWN = QEICON.5
#byte SPBRGH = 0xFB0
#byte SPBRG = 0xFAF
#byte RCREG = 0xFAE
#byte TXREG = 0xFAD
#byte TXSTA = 0xFAC
#bit    TX9D = TXSTA.0
#bit    TRMT = TXSTA.1
#bit    BRGH = TXSTA.2
#bit    SENDB = TXSTA.3
#bit    SYNC = TXSTA.4
#bit    TXEN = TXSTA.5
#bit    TX9 = TXSTA.6
#bit    CSRC = TXSTA.7
#byte RCSTA = 0xFAB
#bit    ADEN = RCSTA.3
#byte RCSTA = 0xFAB
#bit    RX9D = RCSTA.0
#bit    OERR = RCSTA.1
#bit    FERR = RCSTA.2
#bit    ADDEN = RCSTA.3
#bit    CREN = RCSTA.4
#bit    SREN = RCSTA.5
#bit    RX9 = RCSTA.6
#bit    SPEN = RCSTA.7
#byte BAUDCON = 0xFAA
#bit    SCKP = BAUDCON.4
#bit    RCMT = BAUDCON.6
#byte BAUDCON = 0xFAA
#bit    ABDEN = BAUDCON.0
#bit    WUE = BAUDCON.1
#bit    BRG16 = BAUDCON.3
#bit    TXCKP = BAUDCON.4
#bit    RXDTP = BAUDCON.5
#bit    RCIDL = BAUDCON.6
#bit    ABDOVF = BAUDCON.7
#byte EEADR = 0xFA9
#byte EEDATA = 0xFA8
#byte EECON2 = 0xFA7
#byte EECON1 = 0xFA6
#bit    RD = EECON1.0
#bit    WR = EECON1.1
#bit    WREN = EECON1.2
#bit    WRERR = EECON1.3
#bit    FREE = EECON1.4
#bit    CFGS = EECON1.6
#bit    EEPGD = EECON1.7
#byte IPR3 = 0xFA5
#bit    TMR5IP = IPR3.0
#bit    IC1IP = IPR3.1
#bit    IC2QEIP = IPR3.2
#bit    IC3DRIP = IPR3.3
#bit    PTIP = IPR3.4
#byte PIR3 = 0xFA4
#bit    TMR5IF = PIR3.0
#bit    IC1IF = PIR3.1
#bit    IC2QEIF = PIR3.2
#bit    IC3DRIF = PIR3.3
#bit    PTIF = PIR3.4
#byte PIE3 = 0xFA3
#bit    TMR5IE = PIE3.0
#bit    IC1IE = PIE3.1
#bit    IC2QEIE = PIE3.2
#bit    IC3DRIE = PIE3.3
#bit    PTIE = PIE3.4
#byte IPR2 = 0xFA2
#bit    CCP2IP = IPR2.0
#bit    LVDIP = IPR2.2
#bit    EEIP = IPR2.4
#bit    OSFIP = IPR2.7
#byte PIR2 = 0xFA1
#bit    CCP2IF = PIR2.0
#bit    LVDIF = PIR2.2
#bit    EEIF = PIR2.4
#bit    OSFIF = PIR2.7
#byte PIE2 = 0xFA0
#bit    CCP2IE = PIE2.0
#bit    LVDIE = PIE2.2
#bit    EEIE = PIE2.4
#bit    OSFIE = PIE2.7
#byte IPR1 = 0xF9F
#bit    TBIP = IPR1.4
#byte IPR1 = 0xF9F
#bit    TMR1IP = IPR1.0
#bit    TMR2IP = IPR1.1
#bit    CCP1IP = IPR1.2
#bit    SSPIP = IPR1.3
#bit    TXIP = IPR1.4
#bit    RCIP = IPR1.5
#bit    ADIP = IPR1.6
#byte PIR1 = 0xF9E
#bit    TBIF = PIR1.4
#byte PIR1 = 0xF9E
#bit    TMR1IF = PIR1.0
#bit    TMR2IF = PIR1.1
#bit    CCP1IF = PIR1.2
#bit    SSPIF = PIR1.3
#bit    TXIF = PIR1.4
#bit    RCIF = PIR1.5
#bit    ADIF = PIR1.6
#byte PIE1 = 0xF9D
#bit    TBIE = PIE1.4
#byte PIE1 = 0xF9D
#bit    TMR1IE = PIE1.0
#bit    TMR2IE = PIE1.1
#bit    CCP1IE = PIE1.2
#bit    SSPIE = PIE1.3
#bit    TXIE = PIE1.4
#bit    RCIE = PIE1.5
#bit    ADIE = PIE1.6
#byte OSCTUNE = 0xF9B
#byte ADCON3 = 0xF9A
#bit    SSRC0 = ADCON3.0
#bit    SSRC1 = ADCON3.1
#bit    SSRC2 = ADCON3.2
#bit    SSRC3 = ADCON3.3
#bit    SSRC4 = ADCON3.4
#bit    ADRS0 = ADCON3.6
#bit    ADRS1 = ADCON3.7
#byte ADCHS = 0xF99
#bit    GASEL0 = ADCHS.0
#bit    GASEL1 = ADCHS.1
#bit    GCSEL0 = ADCHS.2
#bit    GCSEL1 = ADCHS.3
#bit    GBSEL0 = ADCHS.4
#bit    GBSEL1 = ADCHS.5
#bit    GDSEL0 = ADCHS.6
#bit    GDSEL1 = ADCHS.7
#byte ADCHS = 0xF99
#bit    SASEL0 = ADCHS.0
#bit    SASEL1 = ADCHS.1
#bit    SCSEL0 = ADCHS.2
#bit    SCSEL1 = ADCHS.3
#bit    SBSEL0 = ADCHS.4
#bit    SBSEL1 = ADCHS.5
#bit    SDSEL0 = ADCHS.6
#bit    SDSEL1 = ADCHS.7
#byte TRISE = 0xF96
#byte TRISD = 0xF95
#byte TRISC = 0xF94
#byte TRISB = 0xF93
#byte TRISA = 0xF92
#word PR5 = 0xF91
#byte LATE = 0xF8D
#byte LATD = 0xF8C
#byte LATC = 0xF8B
#byte LATB = 0xF8A
#byte LATA = 0xF89
#word TMR5 = 0xF88
#byte PORTE = 0xF84
#byte PORTD = 0xF83
#byte PORTC = 0xF82
#byte PORTB = 0xF81
#byte PORTA = 0xF80
#byte PTCON0 = 0xF7F
#bit    PTMOD0 = PTCON0.0
#bit    PTMOD1 = PTCON0.1
#bit    PTCKPS0 = PTCON0.2
#bit    PTCKPS1 = PTCON0.3
#bit    PTOPS0 = PTCON0.4
#bit    PTOPS1 = PTCON0.5
#bit    PTOPS2 = PTCON0.6
#bit    PTOPS3 = PTCON0.7
#byte PTCON1 = 0xF7E
#bit    PTDIR = PTCON1.6
#bit    PTEN = PTCON1.7
#byte PTMRL = 0xF7D
#byte PTMRH = 0xF7C
#byte PTPERL = 0xF7B
#byte PTPERH = 0xF7A
#byte PDC0L = 0xF79
#byte PDC0H = 0xF78
#byte PDC1L = 0xF77
#byte PDC1H = 0xF76
#byte PDC2L = 0xF75
#byte PDC2H = 0xF74
#byte PDC3L = 0xF73
#byte PDC3H = 0xF72
#byte SEVTCMPL = 0xF71
#byte SEVTCMPH = 0xF70
#byte PWMCON0 = 0xF6F
#bit    PMOD0 = PWMCON0.0
#bit    PMOD1 = PWMCON0.1
#bit    PMOD2 = PWMCON0.2
#bit    PMOD3 = PWMCON0.3
#bit    PWMEN0 = PWMCON0.4
#bit    PWMEN1 = PWMCON0.5
#bit    PWMEN2 = PWMCON0.6
#byte PWMCON1 = 0xF6E
#bit    OSYNC = PWMCON1.0
#bit    UDIS = PWMCON1.1
#bit    SEVTDIR = PWMCON1.3
#bit    SEVOPS0 = PWMCON1.4
#bit    SEVOPS1 = PWMCON1.5
#bit    SEVOPS2 = PWMCON1.6
#bit    SEVOPS3 = PWMCON1.7
#byte DTCON = 0xF6D
#bit    DT0 = DTCON.0
#bit    DT1 = DTCON.1
#bit    DT2 = DTCON.2
#bit    DT3 = DTCON.3
#bit    DT4 = DTCON.4
#bit    DT5 = DTCON.5
#bit    DTPS0 = DTCON.6
#bit    DTPS1 = DTCON.7
#byte DTCON = 0xF6D
#bit    DTA0 = DTCON.0
#bit    DTA1 = DTCON.1
#bit    DTA2 = DTCON.2
#bit    DTA3 = DTCON.3
#bit    DTA4 = DTCON.4
#bit    DTA5 = DTCON.5
#bit    DTAPS0 = DTCON.6
#bit    DTAPS1 = DTCON.7
#byte FLTCONFIG = 0xF6C
#bit    FLTAEN = FLTCONFIG.0
#bit    FLTAMOD = FLTCONFIG.1
#bit    FLTAS = FLTCONFIG.2
#bit    FLTCON = FLTCONFIG.3
#bit    FLTBEN = FLTCONFIG.4
#bit    FLTBMOD = FLTCONFIG.5
#bit    FLTBS = FLTCONFIG.6
#bit    BRFEN = FLTCONFIG.7
#byte OVDCOND = 0xF6B
#byte OVDCONS = 0xF6A
#word CAP1BUF = 0xF69
#word CAP2BUF = 0xF67
#word CAP3BUF = 0xF65
#byte CAP1CON = 0xF63
#bit    CAP1M0 = CAP1CON.0
#bit    CAP1M1 = CAP1CON.1
#bit    CAP1M2 = CAP1CON.2
#bit    CAP1M3 = CAP1CON.3
#bit    CAP1TMR = CAP1CON.5
#bit    CAP1REN = CAP1CON.6
#byte CAP2CON = 0xF62
#bit    CAP2M0 = CAP2CON.0
#bit    CAP2M1 = CAP2CON.1
#bit    CAP2M2 = CAP2CON.2
#bit    CAP2M3 = CAP2CON.3
#bit    CAP2TMR = CAP2CON.5
#bit    CAP2REN = CAP2CON.6
#byte CAP3CON = 0xF61
#bit    CAP3M0 = CAP3CON.0
#bit    CAP3M1 = CAP3CON.1
#bit    CAP3M2 = CAP3CON.2
#bit    CAP3M3 = CAP3CON.3
#bit    CAP3TMR = CAP3CON.5
#bit    CAP3REN = CAP3CON.6
#byte DFLTCON = 0xF60
#bit    FLTCK0 = DFLTCON.0
#bit    FLTCK1 = DFLTCON.1
#bit    FLTCK2 = DFLTCON.2
#bit    FLT1EN = DFLTCON.3
#bit    FLT2EN = DFLTCON.4
#bit    FLT3EN = DFLTCON.5
#bit    FLT4EN = DFLTCON.6
