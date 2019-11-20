	AREA    exponent,CODE,READONLY
        EXPORT __main
        ENTRY
__main    FUNCTION
		VLDR.F32 S0, =5			;VALUE OF X
		VNEG.F32 S0,S0
		VMOV.F32 S2, #1		;STORING FACTORIAL VALUE
		VMOV.F32 S5, #1		;STORING EACH TERM
		VMOV.F32 S6, #1		;STORING THE SUM
		MOV R1, #30			;NUMBER OF TERMS IN SERIES TO BE CALCULATED(n)
		MOV R10, #0
		MOV R5, #0
		MOV R4, #10
		MOV R6, #1			;REGISTER THAT STORES WHAT LOGIC IS TO BE IMPLEMENTED
		B LOOP_SIG


LOOP_SIG	CMP R5, R4
			BLE LOOP1
			BGT STOP


;THIS LOOP IS USED TO GENERATE DIFFERENT TERMS IN THE EXPONENTIAL SERIES.
LOOP1	BL POWER			;TO GENERATE DIFFERENT POWERS OF X.
		ADD R10, R10, #1	;INCREMENTING FOR LOOP
		MOV R3, R10			;LET R3 IS STORING n'
		VMOV.F32 S2, #1		;INITIALING THE FACTORIAL REGISTER
		CMP R10, R1			;COMPARISON FOR THE NO. OF TERMS(n'<n).
		BLT FACT			;BRANCHING TO FACT
		B SIGMOID


;THIS FUNCTION IS TO CALCULATE THE FACTORIAL OF A NUMBER.
;THE NUMBER WHOSE FACTORIAL IS TO BE CALCULATED WILL BE STORED IN R3.
;THE FACTORIAL VALUE WILL BE STORED IN S2.
FACT 	VMOV S3, R3			;MOVING THE VALUE OF R3 TO FPREGISTER S3.
		VCVT.F32.U32 S3, S3	;CONVERTING THE FLOATING POINT VALUE TO INTEGER.
		VMUL.F32 S2, S2, S3	;CALCULATING FACTORIAL BY MULTIPLYING S3.
		SUB R3, R3, #1		;DECREMENTING n'
		CMP R3, #1			;S7 IS USED TO STORE VALUE OF 1
		BGT FACT
		BLE SUM


;THIS FUNCTION CALCULATES THE SUM OF THE SERIES.
SUM		VDIV.F32 S7, S5, S2	;THIS CALCULATES EACH TERM BY DIVING THE POWER OF X BY FACTORIAL VALUE.
		VADD.F32 S6, S6, S7	;THE NEW TERM IS ADDED TO SUM.
		B LOOP1


;THIS IS USED TO CALCULATE DIFFERENT POWERS OF X
POWER	VMUL.F32 S5, S5, S0	;INCREASING POWER EACH TIME.
		BLX LR
	

SIGMOID		VMOV.F32 S8, #1
			VADD.F32 S9, S8, S6
			VDIV.F32 S8, S8, S9
			VMOV.F32 S10, #1
			VADD.F32 S0, S0, S10
			;VNEG.F32 S0, S0
			VMOV.F32 S2, #1		;STORING FACTORIAL VALUE
			VMOV.F32 S5, #1		;STORING EACH TERM
			VMOV.F32 S6, #1		;STORING THE SUM
			ADD R5, R5, #1
			MOV R1, #30
			MOV R10, #0
			B LOOP_SIG
			
STOP	B STOP
        ENDFUNC
        END
			