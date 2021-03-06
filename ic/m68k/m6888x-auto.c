/* automatically generated by m6888x-auto.sh, do not edit! */
_TME_RCSID("$Id: m6888x-auto.sh,v 1.2 2007/08/25 20:41:10 fredette Exp $");


/* the m6888x FPgen opmode bitmap: */
const tme_uint8_t _tme_m6888x_fpgen_opmode_bitmap[128 / 8] = {
  95, 247, 119, 247, 255, 1, 255, 5, 0, 0, 0, 0, 0, 0, 0, 0
};

/* the m6888x FPgen opmode table: */
static const struct tme_m6888x_fpgen _tme_m6888x_fpgen_opmode_table[128] = {

  /* opmode 0: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_move), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 1: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_rint), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 2: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sinh), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 3: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_rint), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_TO_ZERO, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 4: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sqrt), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 5: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 6: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_log1p), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 7: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 8: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_expm1), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 9: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_tanh), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 10: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_atan), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 11: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 12: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_asin), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 13: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_atanh), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 14: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sin), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 15: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_tan), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 16: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_exp), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 17: */
  { _tme_m6888x_ftwotox, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 18: */
  { _tme_m6888x_ftentox, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 19: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 20: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_log), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 21: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_log10), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 22: */
  { _tme_m6888x_flog2, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 23: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 24: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_abs), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 25: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_cosh), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 26: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_neg), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 27: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 28: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_acos), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 29: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_cos), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 30: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_getexp), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 31: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_getman), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 32: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_div), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 33: */
  { _tme_m6888x_fmod, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 34: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_add), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 35: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_mul), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 36: */
  { _tme_m6888x_fsgldiv, 0, TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 37: */
  { _tme_m6888x_frem, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 38: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_scale), TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 39: */
  { _tme_m6888x_fsglmul, 0, TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 40: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sub), TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 41: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 42: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 43: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 44: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 45: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 46: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 47: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 48: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 49: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 50: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 51: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 52: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 53: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 54: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 55: */
  { _tme_m6888x_fsincos, 0, TME_M68K_FPU_M6888X, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 56: */
  { _tme_m6888x_fcmp, 0, TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 57: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 58: */
  { _tme_m6888x_ftst, 0, TME_M68K_FPU_ANY, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 59: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 60: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 61: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 62: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 63: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 64: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_move), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 65: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sqrt), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 66: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 67: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 68: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_move), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 69: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sqrt), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 70: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 71: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 72: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 73: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 74: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 75: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 76: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 77: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 78: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 79: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 80: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 81: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 82: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 83: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 84: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 85: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 86: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 87: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 88: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_abs), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 89: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 90: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_neg), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 91: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 92: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_abs), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 93: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 94: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_neg), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 95: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 96: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_div), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 97: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 98: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_add), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 99: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_mul), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 100: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_div), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 101: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 102: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_add), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 103: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_mul), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_SRC_DST, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 104: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sub), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_SINGLE },

  /* opmode 105: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 106: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 107: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 108: */
  { NULL, TME_M6888X_IEEE754_OP(tme_ieee754_ops_extended80_sub), TME_M68K_FPU_M68040, TME_M6888X_OPTYPE_DYADIC_DST_SRC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_DOUBLE },

  /* opmode 109: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 110: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 111: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 112: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 113: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 114: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 115: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 116: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 117: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 118: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 119: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 120: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 121: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 122: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 123: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 124: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 125: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 126: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },

  /* opmode 127: */
  { NULL, 0, TME_M68K_FPU_NONE, TME_M6888X_OPTYPE_MONADIC, TME_FLOAT_ROUND_NULL, TME_M6888X_ROUNDING_PRECISION_CTL },
};
