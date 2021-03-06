/*************************************
 * Tests.h - Testes unitários
 * -----------------------------------
 * 
 * autor: jpaulovf@gmail.com
 * 
 *************************************/

#ifndef TESTS_H_
#define TESTS_H_

/* ------------------------------------- *
 * Defines                               *
 * ------------------------------------- */

#define DEBUG_LED 2
#define PIN_LED_R   32 //25  // LED RGB
#define PIN_LED_G   25 //32 // LED RGB
#define PIN_LED_B   33 //33 // LED RGB

/* ------------------------------------- *
 * Protótipos                            *
 * ------------------------------------- */

/*
 * Testa o LED RGB
 *  param
 *    void
 *  return
 *    void
 */
void testRGBLed();

/*
 * Testa o armazenamento na EEPROM
 *  param
 *    void
 *  return
 *    void
 */
void testStorage();

/*
 * Testa a comunicação com o AD7758
 *  param
 *    void
 *  return
 *    void
 */
void testADE7758();

/*
 * Testa a medição de VRMS com interrupção de ZX
 *  param
 *      void
 *  return
 *      void 
 */
void testVRMS(); 

/*
 *  Calibra a constante de W.h
 *  param
 *      void
 *  return
 *      void
 */ 
void whCal();

/* Testa se a placa está viva */
void checkIfAlive();

/*
 *  Testa a comunicação com a plataforma Blynk
 *  param
 *      void
 *  return
 *      void
 */ 
void testBlynk();

#endif
