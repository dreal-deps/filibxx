size_t predSuccTestSetSize[2] = {32, 32};
unsigned int predSuccTestSet[][4] = {

  { 0x1, 0x000, 0x00000, 0x00000000 },

  { 0x1, 0x001, 0x00000, 0x00000000 },

  { 0x1, 0x5f1, 0x00000, 0x00000000 },

  { 0x1, 0x7fe, 0x00000, 0x00000000 },

  { 0x1, 0x421, 0x00001, 0x00000000 },

  { 0x1, 0x123, 0x11111, 0x00000000 },

  { 0x1, 0x0ff, 0xfe123, 0x12345678 },

  { 0x1, 0x000, 0xfffff, 0xffffffff },

  { 0x1, 0x3ff, 0xfffff, 0xffffffff },

  { 0x1, 0x7fe, 0xfffff, 0xffffffff },

  { 0x1, 0x000, 0x00000, 0xffffffff },

  { 0x1, 0x000, 0xffffe, 0xffffffff },

  { 0x1, 0x000, 0x00000, 0x00000001 },

  { 0x1, 0x7fe, 0xfffff, 0xfffffffe },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00100, 0x000a0009 },

  { 0x0, 0x000, 0x00000, 0x00000000 },

  { 0x0, 0x3ff, 0x00000, 0x00000000 },

  { 0x0, 0x555, 0x00000, 0x00000000 },

  { 0x0, 0x401, 0x00001, 0x00000000 },

  { 0x0, 0x111, 0x11111, 0x00000000 },

  { 0x0, 0x0ff, 0xfe123, 0x12345678 },

  { 0x0, 0x123, 0xfffff, 0xffffffff },

  { 0x0, 0x3ff, 0xfffff, 0xffffffff },

  { 0x0, 0x50a, 0xfffff, 0xffffffff },

  { 0x0, 0x7fe, 0xfffff, 0xffffffff },

  { 0x0, 0x000, 0x00000, 0xffffffff },

  { 0x0, 0x000, 0xffffe, 0xffffffff },

  { 0x0, 0x000, 0x00000, 0x00000001 },

  { 0x0, 0x7fe, 0xfffff, 0xfffffffe },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x10000, 0x00000000 },

};


unsigned int predExpected[][4] = {

  { 0x1, 0x000, 0x00000, 0x00000001 },

  { 0x1, 0x001, 0x00000, 0x00000001 },

  { 0x1, 0x5f1, 0x00000, 0x00000001 },

  { 0x1, 0x7fe, 0x00000, 0x00000001 },

  { 0x1, 0x421, 0x00001, 0x00000001 },

  { 0x1, 0x123, 0x11111, 0x00000001 },

  { 0x1, 0x0ff, 0xfe123, 0x12345679 },

  { 0x1, 0x001, 0x00000, 0x00000000 },

  { 0x1, 0x400, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x000, 0x00001, 0x00000000 },

  { 0x1, 0x000, 0xfffff, 0x00000000 },

  { 0x1, 0x000, 0x00000, 0x00000002 },

  { 0x1, 0x7fe, 0xfffff, 0xffffffff },

  { 0x1, 0x7ff, 0x00000, 0x00000000 },

  { 0x1, 0x7ff, 0x80100, 0x000a0009 },

  { 0x1, 0x000, 0x00000, 0x00000001 },

  { 0x0, 0x3fe, 0xfffff, 0xffffffff },

  { 0x0, 0x554, 0xfffff, 0xffffffff },

  { 0x0, 0x401, 0x00000, 0xffffffff },

  { 0x0, 0x111, 0x11110, 0xffffffff },

  { 0x0, 0x0ff, 0xfe123, 0x12345677 },

  { 0x0, 0x123, 0xfffff, 0xfffffffe },

  { 0x0, 0x3ff, 0xfffff, 0xfffffffe },

  { 0x0, 0x50a, 0xfffff, 0xfffffffe },

  { 0x0, 0x7fe, 0xfffff, 0xfffffffe },

  { 0x0, 0x000, 0x00000, 0xfffffffe },

  { 0x0, 0x000, 0xffffe, 0xfffffffe },

  { 0x0, 0x000, 0x00000, 0x00000000 },

  { 0x0, 0x7fe, 0xfffff, 0xfffffffd },

  { 0x0, 0x7fe, 0xfffff, 0xffffffff },

  { 0x0, 0x7ff, 0x90000, 0x00000000 },

};



unsigned int succExpected[][4] = {

  { 0x0, 0x000, 0x00000, 0x00000001 },

  { 0x1, 0x000, 0xfffff, 0xffffffff },

  { 0x1, 0x5f0, 0xfffff, 0xffffffff },

  { 0x1, 0x7fd, 0xfffff, 0xffffffff },

  { 0x1, 0x421, 0x00000, 0xffffffff },

  { 0x1, 0x123, 0x11110, 0xffffffff },

  { 0x1, 0x0ff, 0xfe123, 0x12345677 },

  { 0x1, 0x000, 0xfffff, 0xfffffffe },

  { 0x1, 0x3ff, 0xfffff, 0xfffffffe },

  { 0x1, 0x7fe, 0xfffff, 0xfffffffe },

  { 0x1, 0x000, 0x00000, 0xfffffffe },

  { 0x1, 0x000, 0xffffe, 0xfffffffe },

  { 0x0, 0x000, 0x00000, 0x00000000 },

  { 0x1, 0x7fe, 0xfffff, 0xfffffffd },

  { 0x1, 0x7fe, 0xfffff, 0xffffffff },

  { 0x1, 0x7ff, 0x80100, 0x000a0009 },

  { 0x0, 0x000, 0x00000, 0x00000001 },

  { 0x0, 0x3ff, 0x00000, 0x00000001 },

  { 0x0, 0x555, 0x00000, 0x00000001 },

  { 0x0, 0x401, 0x00001, 0x00000001 },

  { 0x0, 0x111, 0x11111, 0x00000001 },

  { 0x0, 0x0ff, 0xfe123, 0x12345679 },

  { 0x0, 0x124, 0x00000, 0x00000000 },

  { 0x0, 0x400, 0x00000, 0x00000000 },

  { 0x0, 0x50b, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x000, 0x00001, 0x00000000 },

  { 0x0, 0x000, 0xfffff, 0x00000000 },

  { 0x0, 0x000, 0x00000, 0x00000002 },

  { 0x0, 0x7fe, 0xfffff, 0xffffffff },

  { 0x0, 0x7ff, 0x00000, 0x00000000 },

  { 0x0, 0x7ff, 0x90000, 0x00000000 },

};



