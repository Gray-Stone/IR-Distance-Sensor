EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:switches
LIBS:relays
LIBS:motors
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:Vishay
LIBS:Board Design-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L PN2222A Q1
U 1 1 5BCEC41B
P 3900 2250
F 0 "Q1" H 4100 2325 50  0000 L CNN
F 1 "PN2222A" H 4100 2250 50  0000 L CNN
F 2 "TO_SOT_Packages_THT:TO-92_Molded_Narrow" H 4100 2175 50  0001 L CIN
F 3 "" H 3900 2250 50  0001 L CNN
	1    3900 2250
	1    0    0    -1  
$EndComp
$Comp
L LED_ALT D1
U 1 1 5BCEC47C
P 4000 1750
F 0 "D1" H 4000 1850 50  0000 C CNN
F 1 "IR 940nm" H 4100 1650 50  0000 C CNN
F 2 "" H 4000 1750 50  0001 C CNN
F 3 "" H 4000 1750 50  0001 C CNN
	1    4000 1750
	0    -1   -1   0   
$EndComp
$Comp
L Conn_01x04 J1
U 1 1 5BCEC578
P 2300 1650
F 0 "J1" H 2300 1850 50  0000 C CNN
F 1 "Conn_01x04" H 2300 1350 50  0000 C CNN
F 2 "" H 2300 1650 50  0001 C CNN
F 3 "" H 2300 1650 50  0001 C CNN
	1    2300 1650
	-1   0    0    -1  
$EndComp
$Comp
L VCC #PWR01
U 1 1 5BCEC665
P 2550 1400
F 0 "#PWR01" H 2550 1250 50  0001 C CNN
F 1 "VCC" H 2550 1550 50  0000 C CNN
F 2 "" H 2550 1400 50  0001 C CNN
F 3 "" H 2550 1400 50  0001 C CNN
	1    2550 1400
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR02
U 1 1 5BCEC67F
P 2800 1450
F 0 "#PWR02" H 2800 1200 50  0001 C CNN
F 1 "GND" H 2800 1300 50  0000 C CNN
F 2 "" H 2800 1450 50  0001 C CNN
F 3 "" H 2800 1450 50  0001 C CNN
	1    2800 1450
	1    0    0    -1  
$EndComp
Text Label 2600 1750 0    60   ~ 0
IN
Text Label 2550 1850 0    60   ~ 0
OUT
$Comp
L VCC #PWR03
U 1 1 5BCEC915
P 3300 1400
F 0 "#PWR03" H 3300 1250 50  0001 C CNN
F 1 "VCC" H 3300 1550 50  0000 C CNN
F 2 "" H 3300 1400 50  0001 C CNN
F 3 "" H 3300 1400 50  0001 C CNN
	1    3300 1400
	1    0    0    -1  
$EndComp
$Comp
L R R1
U 1 1 5BCEC9A0
P 3650 1450
F 0 "R1" V 3730 1450 50  0000 C CNN
F 1 "980R" V 3650 1450 50  0000 C CNN
F 2 "" V 3580 1450 50  0001 C CNN
F 3 "" H 3650 1450 50  0001 C CNN
	1    3650 1450
	0    1    1    0   
$EndComp
$Comp
L GND #PWR04
U 1 1 5BCECC29
P 4000 2550
F 0 "#PWR04" H 4000 2300 50  0001 C CNN
F 1 "GND" H 4000 2400 50  0000 C CNN
F 2 "" H 4000 2550 50  0001 C CNN
F 3 "" H 4000 2550 50  0001 C CNN
	1    4000 2550
	1    0    0    -1  
$EndComp
Text Label 3600 2250 0    60   ~ 0
IN
$Comp
L TSSP4056 U1
U 1 1 5BCECDDA
P 5100 1800
F 0 "U1" H 4700 2100 50  0000 L CNN
F 1 "TSSP4056" H 4700 1500 50  0000 L CNN
F 2 "Opto-Devices:IRReceiver_Vishay_MINICAST-3pin" H 5050 1425 50  0001 C CNN
F 3 "" H 5750 2100 50  0001 C CNN
	1    5100 1800
	1    0    0    -1  
$EndComp
$Comp
L VCC #PWR05
U 1 1 5BCED030
P 5700 1500
F 0 "#PWR05" H 5700 1350 50  0001 C CNN
F 1 "VCC" H 5700 1650 50  0000 C CNN
F 2 "" H 5700 1500 50  0001 C CNN
F 3 "" H 5700 1500 50  0001 C CNN
	1    5700 1500
	1    0    0    -1  
$EndComp
$Comp
L GND #PWR06
U 1 1 5BCED04A
P 5700 2200
F 0 "#PWR06" H 5700 1950 50  0001 C CNN
F 1 "GND" H 5700 2050 50  0000 C CNN
F 2 "" H 5700 2200 50  0001 C CNN
F 3 "" H 5700 2200 50  0001 C CNN
	1    5700 2200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2500 1550 2550 1550
Wire Wire Line
	2550 1550 2550 1400
Wire Wire Line
	2500 1750 2700 1750
Wire Wire Line
	2500 1850 2700 1850
Wire Wire Line
	2500 1650 2650 1650
Wire Wire Line
	2650 1650 2650 1400
Wire Wire Line
	2650 1400 2800 1400
Wire Wire Line
	2800 1400 2800 1450
Wire Wire Line
	3300 1400 3300 1450
Wire Wire Line
	3300 1450 3500 1450
Wire Wire Line
	3800 1450 4000 1450
Wire Wire Line
	4000 1450 4000 1600
Wire Wire Line
	4000 1900 4000 2050
Wire Wire Line
	3600 2250 3700 2250
Wire Wire Line
	4000 2450 4000 2550
Wire Wire Line
	5500 2000 5700 2000
Wire Wire Line
	5700 2000 5700 2200
Wire Wire Line
	5700 1500 5700 1600
Wire Wire Line
	5700 1600 5500 1600
Text Label 5550 1800 0    60   ~ 0
OUT
Wire Wire Line
	5500 1800 5700 1800
$EndSCHEMATC
