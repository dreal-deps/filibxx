size_t intsHullTestSetSize[2] = {2, 11};
unsigned int intsHullTestSet1[][2][4] = {

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x000, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x80000, 0x00000000 },
  { 0x0, 0x7fe, 0xfffff, 0xffffffff }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x3ff, 0x19999, 0x9999999a },
  { 0x0, 0x000, 0x00000, 0x00000000 }
},

#endif
};


unsigned int intsHullTestSet2[][2][4] = {

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x400, 0x40000, 0x00000000 }
},

{
  { 0x1, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x404, 0x50000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x19999, 0x9999999a },
  { 0x0, 0x404, 0x535c2, 0x8f5c28f6 }
},

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x400, 0x00000, 0x00000000 }
},

#endif
};


unsigned int intersectExpected[][2][4] = {

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x000, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x80000, 0x00000000 },
  { 0x0, 0x404, 0x50000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x19999, 0x9999999a },
  { 0x0, 0x404, 0x535c2, 0x8f5c28f6 }
},

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

#endif
};



unsigned int hullExpected[][2][4] = {

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x400, 0x40000, 0x00000000 }
},

{
  { 0x1, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7fe, 0xfffff, 0xffffffff }
},

#if defined(FILIB_EXTENDED)
{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x3ff, 0x19999, 0x9999999a },
  { 0x0, 0x400, 0x00000, 0x00000000 }
},

#endif
};



size_t hullIDTestSetSize[2] = {3, 11};
unsigned int hullIDTestSet1[][2][4] = {

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x404, 0x535c2, 0x8f5c28f6 }
},

{
  { 0x1, 0x403, 0x30000, 0x00000000 },
  { 0x1, 0x400, 0x80000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

#endif
};


unsigned int hullIDTestSet2[][4] = {

  { 0x1, 0x400, 0x00000, 0x00000000 },

  { 0x0, 0x402, 0xe51eb, 0x851eb852 },

  { 0x0, 0x000, 0x00000, 0x00000000 },

#if defined(FILIB_EXTENDED)
  { 0x0, 0x3fe, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x404, 0x50000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x3ff, 0x00000, 0x00000000 },

  { 0x1, 0x7fe, 0xfffff, 0xffffffff },

#endif
};


unsigned int hullIDExpected[][2][4] = {

{
  { 0x1, 0x400, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x404, 0x535c2, 0x8f5c28f6 }
},

{
  { 0x1, 0x403, 0x30000, 0x00000000 },
  { 0x0, 0x000, 0x00000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x3fe, 0x00000, 0x00000000 },
  { 0x0, 0x3fe, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

#endif
};



size_t hullDDTestSetSize[2] = {3, 10};
unsigned int hullDDTestSet1[][4] = {

  { 0x0, 0x3ff, 0x3be76, 0xc8b43958 },

  { 0x0, 0x400, 0x19999, 0x9999999a },

  { 0x1, 0x402, 0x00000, 0x00000000 },

#if defined(FILIB_EXTENDED)
  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x1, 0x3ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

#endif
};


unsigned int hullDDTestSet2[][4] = {

  { 0x0, 0x404, 0x50000, 0x00000000 },

  { 0x0, 0x400, 0x19999, 0x9999999a },

  { 0x1, 0x402, 0x40000, 0x00000000 },

#if defined(FILIB_EXTENDED)
  { 0x0, 0x3ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

#endif
};


unsigned int hullDDExpected[][2][4] = {

{
  { 0x0, 0x3ff, 0x3be76, 0xc8b43958 },
  { 0x0, 0x404, 0x50000, 0x00000000 }
},

{
  { 0x0, 0x400, 0x19999, 0x9999999a },
  { 0x0, 0x400, 0x19999, 0x9999999a }
},

{
  { 0x1, 0x402, 0x40000, 0x00000000 },
  { 0x1, 0x402, 0x00000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x1, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

#endif
};



bool disjointExpected[] = {

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

false,

#if defined(FILIB_EXTENDED)
true,

true,

true,

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



size_t inTestSetSize[2] = {5, 18};
unsigned int inTestSet1[][4] = {

  { 0x1, 0x3ff, 0x00000, 0x00000000 },

  { 0x0, 0x000, 0x00000, 0x00000000 },

  { 0x0, 0x400, 0x40000, 0x00000000 },

  { 0x0, 0x402, 0x40000, 0x00000000 },

  { 0x1, 0x3ff, 0x19999, 0x9999999a },

#if defined(FILIB_EXTENDED)
  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x000, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x80000, 0x00000000 },

  { 0x0, 0x404, 0x50000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7fe, 0xfffff, 0xffffffff },

  { 0x1, 0x3ff, 0x19999, 0x9999999a },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7fe, 0xfffff, 0xffffffff },

  { 0x0, 0x404, 0xc0ccc, 0xcccccccd },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

#endif
};


unsigned int inTestSet2[][2][4] = {

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x3ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x000, 0x00000, 0x00000000 },
  { 0x0, 0x402, 0x40000, 0x00000000 }
},

{
  { 0x1, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x400, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x3ff, 0x33333, 0x33333333 },
  { 0x0, 0x402, 0x40000, 0x00000000 }
},

{
  { 0x1, 0x400, 0x00000, 0x00000000 },
  { 0x1, 0x3ff, 0x00000, 0x00000000 }
},

#if defined(FILIB_EXTENDED)
{
  { 0x0, 0x3ff, 0x00000, 0x00000000 },
  { 0x0, 0x400, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x0, 0x7ff, 0x80000, 0x00000000 },
  { 0x0, 0x7ff, 0x80000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x1, 0x7fe, 0xfffff, 0xffffffff }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x0, 0x7fe, 0xfffff, 0xffffffff },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

{
  { 0x1, 0x7ff, 0x00000, 0x00000000 },
  { 0x0, 0x7ff, 0x00000, 0x00000000 }
},

#endif
};


bool inExpected[] = {

false,

true,

true,

true,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

true,

false,

false,

true,

true,

true,

true,

true,

#endif
};



bool interiorExpected[] = {

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

false,

false,

false,

false,

#if defined(FILIB_EXTENDED)
true,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool proper_subsetExpected[] = {

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

true,

false,

false,

false,

false,

#if defined(FILIB_EXTENDED)
true,

false,

false,

false,

false,

false,

false,

true,

false,

false,

false,

true,

false,

false,

false,

#endif
};



bool subsetExpected[] = {

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

true,

true,

false,

false,

true,

#if defined(FILIB_EXTENDED)
true,

false,

true,

false,

false,

false,

false,

true,

false,

false,

false,

true,

true,

true,

true,

#endif
};



bool proper_supersetExpected[] = {

false,

false,

false,

false,

false,

false,

true,

true,

true,

false,

false,

false,

false,

false,

false,

false,

#if defined(FILIB_EXTENDED)
false,

true,

false,

false,

false,

false,

false,

false,

true,

true,

true,

false,

false,

false,

false,

#endif
};



bool supersetExpected[] = {

false,

false,

false,

false,

false,

false,

true,

true,

true,

false,

false,

false,

true,

false,

false,

true,

#if defined(FILIB_EXTENDED)
false,

true,

true,

false,

false,

false,

false,

false,

true,

true,

true,

false,

true,

true,

true,

#endif
};



bool seqExpected[] = {

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

true,

#endif
};



bool sneExpected[] = {

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

true,

true,

false,

#if defined(FILIB_EXTENDED)
true,

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

false,

false,

#endif
};



bool sgeExpected[] = {

false,

true,

false,

true,

false,

true,

true,

false,

false,

false,

false,

true,

true,

false,

true,

true,

#if defined(FILIB_EXTENDED)
false,

false,

true,

false,

true,

false,

false,

false,

false,

true,

false,

true,

true,

true,

true,

#endif
};



bool sgtExpected[] = {

false,

true,

false,

true,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool sleExpected[] = {

true,

false,

true,

false,

true,

false,

false,

false,

true,

true,

false,

false,

true,

true,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

true,

true,

false,

true,

true,

true,

true,

false,

false,

false,

true,

true,

true,

#endif
};



bool sltExpected[] = {

true,

false,

true,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

true,

false,

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool ceqExpected[] = {

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool cneExpected[] = {

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

false,

#if defined(FILIB_EXTENDED)
true,

true,

true,

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool cgeExpected[] = {

false,

true,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool cgtExpected[] = {

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool cleExpected[] = {

true,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

true,

false,

true,

true,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool cltExpected[] = {

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

true,

false,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

true,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

false,

#endif
};



bool peqExpected[] = {

false,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



bool pneExpected[] = {

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

#if defined(FILIB_EXTENDED)
true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



bool pgeExpected[] = {

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

true,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



bool pgtExpected[] = {

false,

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

true,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

false,

true,

false,

false,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



bool pleExpected[] = {

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

true,

#if defined(FILIB_EXTENDED)
false,

false,

false,

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



bool pltExpected[] = {

true,

false,

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

false,

false,

#if defined(FILIB_EXTENDED)
false,

false,

false,

true,

false,

true,

true,

true,

true,

true,

true,

true,

true,

true,

true,

#endif
};



