/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Sat Jul 30 16:37:28 EDT 2016 */

#include "codelet-dft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_twiddle.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -twiddle-log3 -precompute-twiddles -n 10 -name t2_10 -include t.h */

/*
 * This function contains 114 FP additions, 94 FP multiplications,
 * (or, 48 additions, 28 multiplications, 66 fused multiply/add),
 * 85 stack variables, 4 constants, and 40 memory accesses
 */
#include "t.h"

static void t2_10(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     {
	  INT m;
	  for (m = mb, W = W + (mb * 6); m < me; m = m + 1, ri = ri + ms, ii = ii + ms, W = W + 6, MAKE_VOLATILE_STRIDE(20, rs)) {
	       E T27, T2b, T2a, T2c;
	       {
		    E T2, T3, T8, Tc, T5, T4, TX, T11, TE, T6, TB, TA;
		    T2 = W[0];
		    T3 = W[2];
		    T8 = W[4];
		    Tc = W[5];
		    T5 = W[1];
		    T4 = T2 * T3;
		    TX = T3 * T8;
		    TA = T2 * T8;
		    T11 = T3 * Tc;
		    TE = T2 * Tc;
		    T6 = W[3];
		    TB = FMA(T5, Tc, TA);
		    {
			 E T2d, T24, T1c, Tk, T1i, T28, T2l, T1a, T2f, T1I, T1R, T1Z, TL, T1v, T1d;
			 E Tz, T1S, T1r, TH, T1t;
			 {
			      E T1, TF, TY, T12, Tl, T7, T23, To, Tb, Te, Ti, Th, Td, Tw, Ts;
			      E Ta;
			      T1 = ri[0];
			      TF = FNMS(T5, T8, TE);
			      TY = FMA(T6, Tc, TX);
			      T12 = FNMS(T6, T8, T11);
			      Tl = FMA(T5, T6, T4);
			      T7 = FNMS(T5, T6, T4);
			      Ta = T2 * T6;
			      T23 = ii[0];
			      {
				   E Tg, T9, Tv, Tr;
				   Tg = T7 * Tc;
				   T9 = T7 * T8;
				   Tv = Tl * Tc;
				   Tr = Tl * T8;
				   To = FNMS(T5, T3, Ta);
				   Tb = FMA(T5, T3, Ta);
				   Te = ri[WS(rs, 5)];
				   Ti = ii[WS(rs, 5)];
				   Th = FNMS(Tb, T8, Tg);
				   Td = FMA(Tb, Tc, T9);
				   Tw = FNMS(To, T8, Tv);
				   Ts = FMA(To, Tc, Tr);
			      }
			      {
				   E T18, T1G, T1g, TW, T1P, T1C, T14, T1E;
				   {
					E TR, T1z, TV, T1B, TZ, T13, T15, T17, T10, T1D;
					{
					     E TO, TQ, TP, T22, Tj, T1y, T21, Tf;
					     TO = ri[WS(rs, 4)];
					     T21 = Td * Ti;
					     Tf = Td * Te;
					     TQ = ii[WS(rs, 4)];
					     TP = T7 * TO;
					     T22 = FNMS(Th, Te, T21);
					     Tj = FMA(Th, Ti, Tf);
					     T1y = T7 * TQ;
					     TR = FMA(Tb, TQ, TP);
					     T2d = T23 - T22;
					     T24 = T22 + T23;
					     T1c = T1 + Tj;
					     Tk = T1 - Tj;
					     T1z = FNMS(Tb, TO, T1y);
					}
					T15 = ri[WS(rs, 1)];
					T17 = ii[WS(rs, 1)];
					{
					     E TS, TU, T16, T1F, TT, T1A;
					     TS = ri[WS(rs, 9)];
					     TU = ii[WS(rs, 9)];
					     T16 = T2 * T15;
					     T1F = T2 * T17;
					     TT = T8 * TS;
					     T1A = T8 * TU;
					     T18 = FMA(T5, T17, T16);
					     T1G = FNMS(T5, T15, T1F);
					     TV = FMA(Tc, TU, TT);
					     T1B = FNMS(Tc, TS, T1A);
					}
					TZ = ri[WS(rs, 6)];
					T13 = ii[WS(rs, 6)];
					T1g = TR + TV;
					TW = TR - TV;
					T1P = T1z + T1B;
					T1C = T1z - T1B;
					T10 = TY * TZ;
					T1D = TY * T13;
					T14 = FMA(T12, T13, T10);
					T1E = FNMS(T12, TZ, T1D);
				   }
				   {
					E Tq, T1o, Ty, TC, TG, T1q, TD, T1s;
					{
					     E TI, TK, Tt, T1p;
					     {
						  E Tm, T1n, Tp, Tn;
						  Tm = ri[WS(rs, 2)];
						  Tp = ii[WS(rs, 2)];
						  {
						       E T19, T1h, T1Q, T1H;
						       T19 = T14 - T18;
						       T1h = T14 + T18;
						       T1Q = T1E + T1G;
						       T1H = T1E - T1G;
						       Tn = Tl * Tm;
						       T1i = T1g + T1h;
						       T28 = T1g - T1h;
						       T2l = TW - T19;
						       T1a = TW + T19;
						       T2f = T1C + T1H;
						       T1I = T1C - T1H;
						       T1R = T1P - T1Q;
						       T1Z = T1P + T1Q;
						       T1n = Tl * Tp;
						  }
						  Tq = FMA(To, Tp, Tn);
						  TI = ri[WS(rs, 3)];
						  TK = ii[WS(rs, 3)];
						  T1o = FNMS(To, Tm, T1n);
					     }
					     {
						  E Tx, Tu, TJ, T1u;
						  Tt = ri[WS(rs, 7)];
						  TJ = T3 * TI;
						  T1u = T3 * TK;
						  Tx = ii[WS(rs, 7)];
						  Tu = Ts * Tt;
						  TL = FMA(T6, TK, TJ);
						  T1v = FNMS(T6, TI, T1u);
						  T1p = Ts * Tx;
						  Ty = FMA(Tw, Tx, Tu);
					     }
					     TC = ri[WS(rs, 8)];
					     TG = ii[WS(rs, 8)];
					     T1q = FNMS(Tw, Tt, T1p);
					}
					T1d = Tq + Ty;
					Tz = Tq - Ty;
					TD = TB * TC;
					T1s = TB * TG;
					T1S = T1o + T1q;
					T1r = T1o - T1q;
					TH = FMA(TF, TG, TD);
					T1t = FNMS(TF, TC, T1s);
				   }
			      }
			 }
			 {
			      E T1f, T29, T1Y, T1U, T2j, T2n, T2m, T2o;
			      {
				   E T2k, T2e, T1l, T1L, T1J, T1k, T1b, T1e, TM;
				   T1e = TH + TL;
				   TM = TH - TL;
				   {
					E T1w, T1T, TN, T1x;
					T1w = T1t - T1v;
					T1T = T1t + T1v;
					T1f = T1d + T1e;
					T29 = T1d - T1e;
					T2k = Tz - TM;
					TN = Tz + TM;
					T1x = T1r - T1w;
					T2e = T1r + T1w;
					T1Y = T1S + T1T;
					T1U = T1S - T1T;
					T1l = TN - T1a;
					T1b = TN + T1a;
					T1L = FNMS(KP618033988, T1x, T1I);
					T1J = FMA(KP618033988, T1I, T1x);
				   }
				   T1k = FNMS(KP250000000, T1b, Tk);
				   ri[WS(rs, 5)] = Tk + T1b;
				   {
					E T2g, T2i, T2h, T1K, T1m;
					T2g = T2e + T2f;
					T2i = T2e - T2f;
					T1K = FNMS(KP559016994, T1l, T1k);
					T1m = FMA(KP559016994, T1l, T1k);
					T2h = FNMS(KP250000000, T2g, T2d);
					ri[WS(rs, 1)] = FMA(KP951056516, T1J, T1m);
					ri[WS(rs, 9)] = FNMS(KP951056516, T1J, T1m);
					ri[WS(rs, 3)] = FMA(KP951056516, T1L, T1K);
					ri[WS(rs, 7)] = FNMS(KP951056516, T1L, T1K);
					ii[WS(rs, 5)] = T2g + T2d;
					T2j = FMA(KP559016994, T2i, T2h);
					T2n = FNMS(KP559016994, T2i, T2h);
					T2m = FMA(KP618033988, T2l, T2k);
					T2o = FNMS(KP618033988, T2k, T2l);
				   }
			      }
			      {
				   E T1O, T1W, T1V, T1X, T1j, T1N, T1M, T20, T26, T25;
				   T1j = T1f + T1i;
				   T1N = T1f - T1i;
				   ii[WS(rs, 7)] = FMA(KP951056516, T2o, T2n);
				   ii[WS(rs, 3)] = FNMS(KP951056516, T2o, T2n);
				   ii[WS(rs, 9)] = FMA(KP951056516, T2m, T2j);
				   ii[WS(rs, 1)] = FNMS(KP951056516, T2m, T2j);
				   T1M = FNMS(KP250000000, T1j, T1c);
				   ri[0] = T1c + T1j;
				   T1O = FNMS(KP559016994, T1N, T1M);
				   T1W = FMA(KP559016994, T1N, T1M);
				   T1V = FNMS(KP618033988, T1U, T1R);
				   T1X = FMA(KP618033988, T1R, T1U);
				   T20 = T1Y + T1Z;
				   T26 = T1Y - T1Z;
				   ri[WS(rs, 6)] = FMA(KP951056516, T1X, T1W);
				   ri[WS(rs, 4)] = FNMS(KP951056516, T1X, T1W);
				   ri[WS(rs, 8)] = FMA(KP951056516, T1V, T1O);
				   ri[WS(rs, 2)] = FNMS(KP951056516, T1V, T1O);
				   T25 = FNMS(KP250000000, T20, T24);
				   ii[0] = T20 + T24;
				   T27 = FNMS(KP559016994, T26, T25);
				   T2b = FMA(KP559016994, T26, T25);
				   T2a = FNMS(KP618033988, T29, T28);
				   T2c = FMA(KP618033988, T28, T29);
			      }
			 }
		    }
	       }
	       ii[WS(rs, 6)] = FNMS(KP951056516, T2c, T2b);
	       ii[WS(rs, 4)] = FMA(KP951056516, T2c, T2b);
	       ii[WS(rs, 8)] = FNMS(KP951056516, T2a, T27);
	       ii[WS(rs, 2)] = FMA(KP951056516, T2a, T27);
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_CEXP, 0, 1},
     {TW_CEXP, 0, 3},
     {TW_CEXP, 0, 9},
     {TW_NEXT, 1, 0}
};

static const ct_desc desc = { 10, "t2_10", twinstr, &GENUS, {48, 28, 66, 0}, 0, 0, 0 };

void X(codelet_t2_10) (planner *p) {
     X(kdft_dit_register) (p, t2_10, &desc);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_twiddle.native -compact -variables 4 -pipeline-latency 4 -twiddle-log3 -precompute-twiddles -n 10 -name t2_10 -include t.h */

/*
 * This function contains 114 FP additions, 80 FP multiplications,
 * (or, 76 additions, 42 multiplications, 38 fused multiply/add),
 * 63 stack variables, 4 constants, and 40 memory accesses
 */
#include "t.h"

static void t2_10(R *ri, R *ii, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP587785252, +0.587785252292473129168705954639072768597652438);
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     {
	  INT m;
	  for (m = mb, W = W + (mb * 6); m < me; m = m + 1, ri = ri + ms, ii = ii + ms, W = W + 6, MAKE_VOLATILE_STRIDE(20, rs)) {
	       E T2, T5, T3, T6, T8, Tm, Tc, Tk, T9, Td, Te, TM, TO, Tg, Tp;
	       E Tv, Tx, Tr;
	       {
		    E T4, Tb, T7, Ta;
		    T2 = W[0];
		    T5 = W[1];
		    T3 = W[2];
		    T6 = W[3];
		    T4 = T2 * T3;
		    Tb = T5 * T3;
		    T7 = T5 * T6;
		    Ta = T2 * T6;
		    T8 = T4 - T7;
		    Tm = Ta - Tb;
		    Tc = Ta + Tb;
		    Tk = T4 + T7;
		    T9 = W[4];
		    Td = W[5];
		    Te = FMA(T8, T9, Tc * Td);
		    TM = FMA(T3, T9, T6 * Td);
		    TO = FNMS(T6, T9, T3 * Td);
		    Tg = FNMS(Tc, T9, T8 * Td);
		    Tp = FMA(Tk, T9, Tm * Td);
		    Tv = FMA(T2, T9, T5 * Td);
		    Tx = FNMS(T5, T9, T2 * Td);
		    Tr = FNMS(Tm, T9, Tk * Td);
	       }
	       {
		    E Tj, T1S, TX, T1G, TL, TU, TV, T1s, T1t, T1C, T11, T12, T13, T1h, T1k;
		    E T1Q, Tu, TD, TE, T1v, T1w, T1B, TY, TZ, T10, T1a, T1d, T1P;
		    {
			 E T1, T1F, Ti, T1E, Tf, Th;
			 T1 = ri[0];
			 T1F = ii[0];
			 Tf = ri[WS(rs, 5)];
			 Th = ii[WS(rs, 5)];
			 Ti = FMA(Te, Tf, Tg * Th);
			 T1E = FNMS(Tg, Tf, Te * Th);
			 Tj = T1 - Ti;
			 T1S = T1F - T1E;
			 TX = T1 + Ti;
			 T1G = T1E + T1F;
		    }
		    {
			 E TH, T1f, TT, T1j, TK, T1g, TQ, T1i;
			 {
			      E TF, TG, TR, TS;
			      TF = ri[WS(rs, 4)];
			      TG = ii[WS(rs, 4)];
			      TH = FMA(T8, TF, Tc * TG);
			      T1f = FNMS(Tc, TF, T8 * TG);
			      TR = ri[WS(rs, 1)];
			      TS = ii[WS(rs, 1)];
			      TT = FMA(T2, TR, T5 * TS);
			      T1j = FNMS(T5, TR, T2 * TS);
			 }
			 {
			      E TI, TJ, TN, TP;
			      TI = ri[WS(rs, 9)];
			      TJ = ii[WS(rs, 9)];
			      TK = FMA(T9, TI, Td * TJ);
			      T1g = FNMS(Td, TI, T9 * TJ);
			      TN = ri[WS(rs, 6)];
			      TP = ii[WS(rs, 6)];
			      TQ = FMA(TM, TN, TO * TP);
			      T1i = FNMS(TO, TN, TM * TP);
			 }
			 TL = TH - TK;
			 TU = TQ - TT;
			 TV = TL + TU;
			 T1s = T1f + T1g;
			 T1t = T1i + T1j;
			 T1C = T1s + T1t;
			 T11 = TH + TK;
			 T12 = TQ + TT;
			 T13 = T11 + T12;
			 T1h = T1f - T1g;
			 T1k = T1i - T1j;
			 T1Q = T1h + T1k;
		    }
		    {
			 E To, T18, TC, T1c, Tt, T19, Tz, T1b;
			 {
			      E Tl, Tn, TA, TB;
			      Tl = ri[WS(rs, 2)];
			      Tn = ii[WS(rs, 2)];
			      To = FMA(Tk, Tl, Tm * Tn);
			      T18 = FNMS(Tm, Tl, Tk * Tn);
			      TA = ri[WS(rs, 3)];
			      TB = ii[WS(rs, 3)];
			      TC = FMA(T3, TA, T6 * TB);
			      T1c = FNMS(T6, TA, T3 * TB);
			 }
			 {
			      E Tq, Ts, Tw, Ty;
			      Tq = ri[WS(rs, 7)];
			      Ts = ii[WS(rs, 7)];
			      Tt = FMA(Tp, Tq, Tr * Ts);
			      T19 = FNMS(Tr, Tq, Tp * Ts);
			      Tw = ri[WS(rs, 8)];
			      Ty = ii[WS(rs, 8)];
			      Tz = FMA(Tv, Tw, Tx * Ty);
			      T1b = FNMS(Tx, Tw, Tv * Ty);
			 }
			 Tu = To - Tt;
			 TD = Tz - TC;
			 TE = Tu + TD;
			 T1v = T18 + T19;
			 T1w = T1b + T1c;
			 T1B = T1v + T1w;
			 TY = To + Tt;
			 TZ = Tz + TC;
			 T10 = TY + TZ;
			 T1a = T18 - T19;
			 T1d = T1b - T1c;
			 T1P = T1a + T1d;
		    }
		    {
			 E T15, TW, T16, T1m, T1o, T1e, T1l, T1n, T17;
			 T15 = KP559016994 * (TE - TV);
			 TW = TE + TV;
			 T16 = FNMS(KP250000000, TW, Tj);
			 T1e = T1a - T1d;
			 T1l = T1h - T1k;
			 T1m = FMA(KP951056516, T1e, KP587785252 * T1l);
			 T1o = FNMS(KP587785252, T1e, KP951056516 * T1l);
			 ri[WS(rs, 5)] = Tj + TW;
			 T1n = T16 - T15;
			 ri[WS(rs, 7)] = T1n - T1o;
			 ri[WS(rs, 3)] = T1n + T1o;
			 T17 = T15 + T16;
			 ri[WS(rs, 9)] = T17 - T1m;
			 ri[WS(rs, 1)] = T17 + T1m;
		    }
		    {
			 E T1R, T1T, T1U, T1Y, T20, T1W, T1X, T1Z, T1V;
			 T1R = KP559016994 * (T1P - T1Q);
			 T1T = T1P + T1Q;
			 T1U = FNMS(KP250000000, T1T, T1S);
			 T1W = Tu - TD;
			 T1X = TL - TU;
			 T1Y = FMA(KP951056516, T1W, KP587785252 * T1X);
			 T20 = FNMS(KP587785252, T1W, KP951056516 * T1X);
			 ii[WS(rs, 5)] = T1T + T1S;
			 T1Z = T1U - T1R;
			 ii[WS(rs, 3)] = T1Z - T20;
			 ii[WS(rs, 7)] = T20 + T1Z;
			 T1V = T1R + T1U;
			 ii[WS(rs, 1)] = T1V - T1Y;
			 ii[WS(rs, 9)] = T1Y + T1V;
		    }
		    {
			 E T1q, T14, T1p, T1y, T1A, T1u, T1x, T1z, T1r;
			 T1q = KP559016994 * (T10 - T13);
			 T14 = T10 + T13;
			 T1p = FNMS(KP250000000, T14, TX);
			 T1u = T1s - T1t;
			 T1x = T1v - T1w;
			 T1y = FNMS(KP587785252, T1x, KP951056516 * T1u);
			 T1A = FMA(KP951056516, T1x, KP587785252 * T1u);
			 ri[0] = TX + T14;
			 T1z = T1q + T1p;
			 ri[WS(rs, 4)] = T1z - T1A;
			 ri[WS(rs, 6)] = T1z + T1A;
			 T1r = T1p - T1q;
			 ri[WS(rs, 2)] = T1r - T1y;
			 ri[WS(rs, 8)] = T1r + T1y;
		    }
		    {
			 E T1L, T1D, T1K, T1J, T1N, T1H, T1I, T1O, T1M;
			 T1L = KP559016994 * (T1B - T1C);
			 T1D = T1B + T1C;
			 T1K = FNMS(KP250000000, T1D, T1G);
			 T1H = T11 - T12;
			 T1I = TY - TZ;
			 T1J = FNMS(KP587785252, T1I, KP951056516 * T1H);
			 T1N = FMA(KP951056516, T1I, KP587785252 * T1H);
			 ii[0] = T1D + T1G;
			 T1O = T1L + T1K;
			 ii[WS(rs, 4)] = T1N + T1O;
			 ii[WS(rs, 6)] = T1O - T1N;
			 T1M = T1K - T1L;
			 ii[WS(rs, 2)] = T1J + T1M;
			 ii[WS(rs, 8)] = T1M - T1J;
		    }
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_CEXP, 0, 1},
     {TW_CEXP, 0, 3},
     {TW_CEXP, 0, 9},
     {TW_NEXT, 1, 0}
};

static const ct_desc desc = { 10, "t2_10", twinstr, &GENUS, {76, 42, 38, 0}, 0, 0, 0 };

void X(codelet_t2_10) (planner *p) {
     X(kdft_dit_register) (p, t2_10, &desc);
}
#endif				/* HAVE_FMA */
