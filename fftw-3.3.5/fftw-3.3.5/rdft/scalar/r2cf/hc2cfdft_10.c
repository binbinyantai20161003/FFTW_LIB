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
/* Generated on Sat Jul 30 16:48:41 EDT 2016 */

#include "codelet-rdft.h"

#ifdef HAVE_FMA

/* Generated by: ../../../genfft/gen_hc2cdft.native -fma -reorder-insns -schedule-for-pipeline -compact -variables 4 -pipeline-latency 4 -n 10 -dit -name hc2cfdft_10 -include hc2cf.h */

/*
 * This function contains 122 FP additions, 92 FP multiplications,
 * (or, 68 additions, 38 multiplications, 54 fused multiply/add),
 * 94 stack variables, 5 constants, and 40 memory accesses
 */
#include "hc2cf.h"

static void hc2cfdft_10(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP951056516, +0.951056516295153572116439333379382143405698634);
     DK(KP559016994, +0.559016994374947424102293417182819058860154590);
     DK(KP250000000, +0.250000000000000000000000000000000000000000000);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DK(KP618033988, +0.618033988749894848204586834365638117720309180);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 18); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 18, MAKE_VOLATILE_STRIDE(40, rs)) {
	       E T1x, T1I, T1T, T22, T20;
	       {
		    E T3, T1u, T1S, T2f, Td, T1w, T14, T1p, T1j, T1q, T1N, T2e, T1z, To, T2i;
		    E T1H, TQ, T1n, Ty, T1B;
		    {
			 E T1h, TW, Tc, T1b, T1g, T1f, T1Q, TV, T7, TS, T1J, TU, Ts, T19, T18;
			 E T15, Tx, T17, T1O, T1A, Tt, TD, Ti, TE, Tn, TA, T1F, TC, T1y, Tj;
			 E T11, T12, TJ, TZ, TO, TY, TG, T1L, T1e, T1, T2;
			 T1 = Ip[0];
			 T2 = Im[0];
			 {
			      E Ta, Tb, T1c, T1d;
			      Ta = Rp[WS(rs, 2)];
			      Tb = Rm[WS(rs, 2)];
			      T1c = Rm[0];
			      T1h = T1 + T2;
			      T3 = T1 - T2;
			      T1d = Rp[0];
			      TW = Ta + Tb;
			      Tc = Ta - Tb;
			      T1b = W[0];
			      T1u = T1d + T1c;
			      T1e = T1c - T1d;
			      T1g = W[1];
			 }
			 {
			      E T16, Tp, TT, T5, T6, TB, Tf;
			      T5 = Ip[WS(rs, 2)];
			      T6 = Im[WS(rs, 2)];
			      T1f = T1b * T1e;
			      T1Q = T1g * T1e;
			      TV = W[7];
			      T7 = T5 + T6;
			      TT = T5 - T6;
			      TS = W[6];
			      {
				   E Tv, Tw, Tq, Tr;
				   Tq = Rm[WS(rs, 3)];
				   Tr = Rp[WS(rs, 3)];
				   T1J = TV * TT;
				   TU = TS * TT;
				   Tv = Ip[WS(rs, 3)];
				   Ts = Tq - Tr;
				   T19 = Tr + Tq;
				   Tw = Im[WS(rs, 3)];
				   T18 = W[11];
				   T15 = W[10];
				   Tx = Tv + Tw;
				   T16 = Tv - Tw;
				   Tp = W[12];
			      }
			      {
				   E Tg, Th, Tl, Tm;
				   Tg = Ip[WS(rs, 1)];
				   T17 = T15 * T16;
				   T1O = T18 * T16;
				   T1A = Tp * Tx;
				   Tt = Tp * Ts;
				   Th = Im[WS(rs, 1)];
				   Tl = Rp[WS(rs, 1)];
				   Tm = Rm[WS(rs, 1)];
				   TD = W[5];
				   Ti = Tg - Th;
				   TE = Tg + Th;
				   Tn = Tl + Tm;
				   TB = Tm - Tl;
				   TA = W[4];
				   Tf = W[2];
				   T1F = TD * TB;
			      }
			      {
				   E TH, TI, TM, TN;
				   TH = Ip[WS(rs, 4)];
				   TC = TA * TB;
				   T1y = Tf * Tn;
				   Tj = Tf * Ti;
				   TI = Im[WS(rs, 4)];
				   TM = Rp[WS(rs, 4)];
				   TN = Rm[WS(rs, 4)];
				   T11 = W[17];
				   T12 = TH + TI;
				   TJ = TH - TI;
				   TZ = TN - TM;
				   TO = TM + TN;
				   TY = W[16];
				   TG = W[14];
				   T1L = T11 * TZ;
			      }
			 }
			 {
			      E T10, T1D, TK, T4, T9, T1P, T1R, T8, T1v;
			      T10 = TY * TZ;
			      T1D = TG * TO;
			      TK = TG * TJ;
			      T4 = W[9];
			      T9 = W[8];
			      T1P = FMA(T15, T19, T1O);
			      T1R = FMA(T1b, T1h, T1Q);
			      T8 = T4 * T7;
			      T1v = T9 * T7;
			      {
				   E TX, T13, T1a, T1i;
				   TX = FNMS(TV, TW, TU);
				   T1S = T1P - T1R;
				   T2f = T1P + T1R;
				   Td = FMA(T9, Tc, T8);
				   T1w = FNMS(T4, Tc, T1v);
				   T13 = FNMS(T11, T12, T10);
				   T1a = FNMS(T18, T19, T17);
				   T1i = FNMS(T1g, T1h, T1f);
				   {
					E T1K, T1M, TF, T1G, TL;
					T1K = FMA(TS, TW, T1J);
					T14 = TX + T13;
					T1p = T13 - TX;
					T1j = T1a + T1i;
					T1q = T1i - T1a;
					T1M = FMA(TY, T12, T1L);
					TF = FNMS(TD, TE, TC);
					T1G = FMA(TA, TE, T1F);
					TL = W[15];
					T1N = T1K - T1M;
					T2e = T1K + T1M;
					{
					     E Tk, T1E, TP, Tu;
					     Tk = W[3];
					     T1E = FMA(TL, TJ, T1D);
					     TP = FNMS(TL, TO, TK);
					     Tu = W[13];
					     T1z = FMA(Tk, Ti, T1y);
					     To = FNMS(Tk, Tn, Tj);
					     T2i = T1G + T1E;
					     T1H = T1E - T1G;
					     TQ = TF + TP;
					     T1n = TF - TP;
					     Ty = FNMS(Tu, Tx, Tt);
					     T1B = FMA(Tu, Ts, T1A);
					}
				   }
			      }
			 }
		    }
		    {
			 E T2p, T1t, T1m, T1C, T2o, T2m, T2k, T2w, T2y, T2n, T2d, T2l;
			 {
			      E T2g, Te, T2h, T2u, T1k, TR, T2v, Tz;
			      T2p = T2e + T2f;
			      T2g = T2e - T2f;
			      Te = T3 - Td;
			      T1t = Td + T3;
			      Tz = To + Ty;
			      T1m = Ty - To;
			      T2h = T1z + T1B;
			      T1C = T1z - T1B;
			      T2u = T14 - T1j;
			      T1k = T14 + T1j;
			      TR = Tz + TQ;
			      T2v = Tz - TQ;
			      {
				   E T2c, T2b, T2j, T1l;
				   T2j = T2h - T2i;
				   T2o = T2h + T2i;
				   T2c = TR - T1k;
				   T1l = TR + T1k;
				   T2m = FMA(KP618033988, T2g, T2j);
				   T2k = FNMS(KP618033988, T2j, T2g);
				   T2w = FNMS(KP618033988, T2v, T2u);
				   T2y = FMA(KP618033988, T2u, T2v);
				   Ip[0] = KP500000000 * (Te + T1l);
				   T2b = FNMS(KP250000000, T1l, Te);
				   T2n = T1u + T1w;
				   T1x = T1u - T1w;
				   T2d = FNMS(KP559016994, T2c, T2b);
				   T2l = FMA(KP559016994, T2c, T2b);
			      }
			 }
			 {
			      E T1o, T1Y, T28, T2a, T1Z, T1r, T2t, T2x;
			      {
				   E T26, T2s, T2q, T27, T2r;
				   T1I = T1C + T1H;
				   T26 = T1H - T1C;
				   Im[WS(rs, 1)] = -(KP500000000 * (FNMS(KP951056516, T2k, T2d)));
				   Ip[WS(rs, 2)] = KP500000000 * (FMA(KP951056516, T2k, T2d));
				   Im[WS(rs, 3)] = -(KP500000000 * (FNMS(KP951056516, T2m, T2l)));
				   Ip[WS(rs, 4)] = KP500000000 * (FMA(KP951056516, T2m, T2l));
				   T2s = T2o - T2p;
				   T2q = T2o + T2p;
				   T27 = T1S - T1N;
				   T1T = T1N + T1S;
				   T1o = T1m + T1n;
				   T1Y = T1n - T1m;
				   Rp[0] = KP500000000 * (T2n + T2q);
				   T2r = FNMS(KP250000000, T2q, T2n);
				   T28 = FMA(KP618033988, T27, T26);
				   T2a = FNMS(KP618033988, T26, T27);
				   T1Z = T1q - T1p;
				   T1r = T1p + T1q;
				   T2t = FNMS(KP559016994, T2s, T2r);
				   T2x = FMA(KP559016994, T2s, T2r);
			      }
			      {
				   E T24, T23, T1s, T25, T29;
				   T1s = T1o + T1r;
				   T24 = T1r - T1o;
				   Rm[WS(rs, 1)] = KP500000000 * (FMA(KP951056516, T2w, T2t));
				   Rp[WS(rs, 2)] = KP500000000 * (FNMS(KP951056516, T2w, T2t));
				   Rm[WS(rs, 3)] = KP500000000 * (FMA(KP951056516, T2y, T2x));
				   Rp[WS(rs, 4)] = KP500000000 * (FNMS(KP951056516, T2y, T2x));
				   Im[WS(rs, 4)] = KP500000000 * (T1s - T1t);
				   T23 = FMA(KP250000000, T1s, T1t);
				   T25 = FMA(KP559016994, T24, T23);
				   T29 = FNMS(KP559016994, T24, T23);
				   T22 = FNMS(KP618033988, T1Y, T1Z);
				   T20 = FMA(KP618033988, T1Z, T1Y);
				   Im[0] = -(KP500000000 * (FNMS(KP951056516, T28, T25)));
				   Ip[WS(rs, 1)] = KP500000000 * (FMA(KP951056516, T28, T25));
				   Im[WS(rs, 2)] = -(KP500000000 * (FNMS(KP951056516, T2a, T29)));
				   Ip[WS(rs, 3)] = KP500000000 * (FMA(KP951056516, T2a, T29));
			      }
			 }
		    }
	       }
	       {
		    E T1U, T1W, T1V, T21, T1X;
		    T1U = T1I + T1T;
		    T1W = T1I - T1T;
		    Rm[WS(rs, 4)] = KP500000000 * (T1x + T1U);
		    T1V = FNMS(KP250000000, T1U, T1x);
		    T21 = FNMS(KP559016994, T1W, T1V);
		    T1X = FMA(KP559016994, T1W, T1V);
		    Rm[0] = KP500000000 * (FNMS(KP951056516, T20, T1X));
		    Rp[WS(rs, 1)] = KP500000000 * (FMA(KP951056516, T20, T1X));
		    Rm[WS(rs, 2)] = KP500000000 * (FNMS(KP951056516, T22, T21));
		    Rp[WS(rs, 3)] = KP500000000 * (FMA(KP951056516, T22, T21));
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 10},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 10, "hc2cfdft_10", twinstr, &GENUS, {68, 38, 54, 0} };

void X(codelet_hc2cfdft_10) (planner *p) {
     X(khc2c_register) (p, hc2cfdft_10, &desc, HC2C_VIA_DFT);
}
#else				/* HAVE_FMA */

/* Generated by: ../../../genfft/gen_hc2cdft.native -compact -variables 4 -pipeline-latency 4 -n 10 -dit -name hc2cfdft_10 -include hc2cf.h */

/*
 * This function contains 122 FP additions, 68 FP multiplications,
 * (or, 92 additions, 38 multiplications, 30 fused multiply/add),
 * 62 stack variables, 5 constants, and 40 memory accesses
 */
#include "hc2cf.h"

static void hc2cfdft_10(R *Rp, R *Ip, R *Rm, R *Im, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP293892626, +0.293892626146236564584352977319536384298826219);
     DK(KP475528258, +0.475528258147576786058219666689691071702849317);
     DK(KP125000000, +0.125000000000000000000000000000000000000000000);
     DK(KP500000000, +0.500000000000000000000000000000000000000000000);
     DK(KP279508497, +0.279508497187473712051146708591409529430077295);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 18); m < me; m = m + 1, Rp = Rp + ms, Ip = Ip + ms, Rm = Rm - ms, Im = Im - ms, W = W + 18, MAKE_VOLATILE_STRIDE(40, rs)) {
	       E Tw, TL, TM, T1W, T1X, T27, T1Z, T20, T26, TX, T1a, T1b, T1d, T1e, T1f;
	       E T1q, T1t, T1u, T1x, T1A, T1B, T1g, T1h, T1i, Td, T25, T1k, T1F;
	       {
		    E T3, T1D, T19, T1z, T7, Tb, TR, T1v, Tm, T1o, TK, T1s, Tv, T1p, T12;
		    E T1y, TF, T1r, TW, T1w;
		    {
			 E T1, T2, T18, T14, T15, T16, T13, T17;
			 T1 = Ip[0];
			 T2 = Im[0];
			 T18 = T1 + T2;
			 T14 = Rm[0];
			 T15 = Rp[0];
			 T16 = T14 - T15;
			 T3 = T1 - T2;
			 T1D = T15 + T14;
			 T13 = W[0];
			 T17 = W[1];
			 T19 = FNMS(T17, T18, T13 * T16);
			 T1z = FMA(T17, T16, T13 * T18);
		    }
		    {
			 E T5, T6, TO, T9, Ta, TQ, TN, TP;
			 T5 = Ip[WS(rs, 2)];
			 T6 = Im[WS(rs, 2)];
			 TO = T5 - T6;
			 T9 = Rp[WS(rs, 2)];
			 Ta = Rm[WS(rs, 2)];
			 TQ = T9 + Ta;
			 T7 = T5 + T6;
			 Tb = T9 - Ta;
			 TN = W[6];
			 TP = W[7];
			 TR = FNMS(TP, TQ, TN * TO);
			 T1v = FMA(TP, TO, TN * TQ);
		    }
		    {
			 E Th, TJ, Tl, TH;
			 {
			      E Tf, Tg, Tj, Tk;
			      Tf = Ip[WS(rs, 1)];
			      Tg = Im[WS(rs, 1)];
			      Th = Tf - Tg;
			      TJ = Tf + Tg;
			      Tj = Rp[WS(rs, 1)];
			      Tk = Rm[WS(rs, 1)];
			      Tl = Tj + Tk;
			      TH = Tj - Tk;
			 }
			 {
			      E Te, Ti, TG, TI;
			      Te = W[2];
			      Ti = W[3];
			      Tm = FNMS(Ti, Tl, Te * Th);
			      T1o = FMA(Te, Tl, Ti * Th);
			      TG = W[4];
			      TI = W[5];
			      TK = FMA(TG, TH, TI * TJ);
			      T1s = FNMS(TI, TH, TG * TJ);
			 }
		    }
		    {
			 E Tq, TZ, Tu, T11;
			 {
			      E To, Tp, Ts, Tt;
			      To = Ip[WS(rs, 3)];
			      Tp = Im[WS(rs, 3)];
			      Tq = To + Tp;
			      TZ = To - Tp;
			      Ts = Rp[WS(rs, 3)];
			      Tt = Rm[WS(rs, 3)];
			      Tu = Ts - Tt;
			      T11 = Ts + Tt;
			 }
			 {
			      E Tn, Tr, TY, T10;
			      Tn = W[13];
			      Tr = W[12];
			      Tv = FMA(Tn, Tq, Tr * Tu);
			      T1p = FNMS(Tn, Tu, Tr * Tq);
			      TY = W[10];
			      T10 = W[11];
			      T12 = FNMS(T10, T11, TY * TZ);
			      T1y = FMA(T10, TZ, TY * T11);
			 }
		    }
		    {
			 E TA, TV, TE, TT;
			 {
			      E Ty, Tz, TC, TD;
			      Ty = Ip[WS(rs, 4)];
			      Tz = Im[WS(rs, 4)];
			      TA = Ty - Tz;
			      TV = Ty + Tz;
			      TC = Rp[WS(rs, 4)];
			      TD = Rm[WS(rs, 4)];
			      TE = TC + TD;
			      TT = TC - TD;
			 }
			 {
			      E Tx, TB, TS, TU;
			      Tx = W[14];
			      TB = W[15];
			      TF = FNMS(TB, TE, Tx * TA);
			      T1r = FMA(Tx, TE, TB * TA);
			      TS = W[16];
			      TU = W[17];
			      TW = FMA(TS, TT, TU * TV);
			      T1w = FNMS(TU, TT, TS * TV);
			 }
		    }
		    Tw = Tm - Tv;
		    TL = TF - TK;
		    TM = Tw + TL;
		    T1W = T1v + T1w;
		    T1X = T1y + T1z;
		    T27 = T1W + T1X;
		    T1Z = T1o + T1p;
		    T20 = T1s + T1r;
		    T26 = T1Z + T20;
		    TX = TR - TW;
		    T1a = T12 + T19;
		    T1b = TX + T1a;
		    T1d = T19 - T12;
		    T1e = TR + TW;
		    T1f = T1d - T1e;
		    T1q = T1o - T1p;
		    T1t = T1r - T1s;
		    T1u = T1q + T1t;
		    T1x = T1v - T1w;
		    T1A = T1y - T1z;
		    T1B = T1x + T1A;
		    T1g = Tm + Tv;
		    T1h = TK + TF;
		    T1i = T1g + T1h;
		    {
			 E Tc, T1E, T4, T8;
			 T4 = W[9];
			 T8 = W[8];
			 Tc = FMA(T4, T7, T8 * Tb);
			 T1E = FNMS(T4, Tb, T8 * T7);
			 Td = T3 - Tc;
			 T25 = T1D + T1E;
			 T1k = Tc + T3;
			 T1F = T1D - T1E;
		    }
	       }
	       {
		    E T1U, T1c, T1T, T22, T24, T1Y, T21, T23, T1V;
		    T1U = KP279508497 * (TM - T1b);
		    T1c = TM + T1b;
		    T1T = FNMS(KP125000000, T1c, KP500000000 * Td);
		    T1Y = T1W - T1X;
		    T21 = T1Z - T20;
		    T22 = FNMS(KP293892626, T21, KP475528258 * T1Y);
		    T24 = FMA(KP475528258, T21, KP293892626 * T1Y);
		    Ip[0] = KP500000000 * (Td + T1c);
		    T23 = T1U + T1T;
		    Ip[WS(rs, 4)] = T23 + T24;
		    Im[WS(rs, 3)] = T24 - T23;
		    T1V = T1T - T1U;
		    Ip[WS(rs, 2)] = T1V + T22;
		    Im[WS(rs, 1)] = T22 - T1V;
	       }
	       {
		    E T2a, T28, T29, T2e, T2g, T2c, T2d, T2f, T2b;
		    T2a = KP279508497 * (T26 - T27);
		    T28 = T26 + T27;
		    T29 = FNMS(KP125000000, T28, KP500000000 * T25);
		    T2c = TX - T1a;
		    T2d = Tw - TL;
		    T2e = FNMS(KP293892626, T2d, KP475528258 * T2c);
		    T2g = FMA(KP475528258, T2d, KP293892626 * T2c);
		    Rp[0] = KP500000000 * (T25 + T28);
		    T2f = T2a + T29;
		    Rp[WS(rs, 4)] = T2f - T2g;
		    Rm[WS(rs, 3)] = T2g + T2f;
		    T2b = T29 - T2a;
		    Rp[WS(rs, 2)] = T2b - T2e;
		    Rm[WS(rs, 1)] = T2e + T2b;
	       }
	       {
		    E T1M, T1j, T1L, T1Q, T1S, T1O, T1P, T1R, T1N;
		    T1M = KP279508497 * (T1i + T1f);
		    T1j = T1f - T1i;
		    T1L = FMA(KP500000000, T1k, KP125000000 * T1j);
		    T1O = T1A - T1x;
		    T1P = T1q - T1t;
		    T1Q = FNMS(KP475528258, T1P, KP293892626 * T1O);
		    T1S = FMA(KP293892626, T1P, KP475528258 * T1O);
		    Im[WS(rs, 4)] = KP500000000 * (T1j - T1k);
		    T1R = T1L - T1M;
		    Ip[WS(rs, 3)] = T1R + T1S;
		    Im[WS(rs, 2)] = T1S - T1R;
		    T1N = T1L + T1M;
		    Ip[WS(rs, 1)] = T1N + T1Q;
		    Im[0] = T1Q - T1N;
	       }
	       {
		    E T1C, T1G, T1H, T1n, T1J, T1l, T1m, T1K, T1I;
		    T1C = KP279508497 * (T1u - T1B);
		    T1G = T1u + T1B;
		    T1H = FNMS(KP125000000, T1G, KP500000000 * T1F);
		    T1l = T1g - T1h;
		    T1m = T1e + T1d;
		    T1n = FMA(KP475528258, T1l, KP293892626 * T1m);
		    T1J = FNMS(KP293892626, T1l, KP475528258 * T1m);
		    Rm[WS(rs, 4)] = KP500000000 * (T1F + T1G);
		    T1K = T1H - T1C;
		    Rp[WS(rs, 3)] = T1J + T1K;
		    Rm[WS(rs, 2)] = T1K - T1J;
		    T1I = T1C + T1H;
		    Rp[WS(rs, 1)] = T1n + T1I;
		    Rm[0] = T1I - T1n;
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     {TW_FULL, 1, 10},
     {TW_NEXT, 1, 0}
};

static const hc2c_desc desc = { 10, "hc2cfdft_10", twinstr, &GENUS, {92, 38, 30, 0} };

void X(codelet_hc2cfdft_10) (planner *p) {
     X(khc2c_register) (p, hc2cfdft_10, &desc, HC2C_VIA_DFT);
}
#endif				/* HAVE_FMA */
