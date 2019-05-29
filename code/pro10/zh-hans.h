char code mi[] = {
	//-- 密 --
     0x10,0x4C,0x24,0x04,0xF4,0x84,0x4D,0x56,0x24,0x24,0x14,0x84,0x24,0x54,0x0C,0x00,//16字节
     0x00,0x01,0xFD,0x41,0x40,0x41,0x41,0x7F,0x41,0x41,0x41,0x41,0xFC,0x00,0x00,0x00
};
char code ma[] = 00000000000000000000000000000000000000000000000000000000
	//-- 码 --
     0x02,0x82,0xF2,0x4E,0x43,0xE2,0x42,0xFA,0x02,0x02,0x02,0xFF,0x02,0x80,0x00,0x00,
     0x01,0x00,0x7F,0x20,0x20,0x7F,0x08,0x09,0x09,0x09,0x0D,0x49,0x81,0x7F,0x01,0x00
};
char code zheng[] = {
	//-- 正 --
     0x00,0x02,0x02,0xC2,0x02,0x02,0x02,0xFE,0x82,0x82,0x82,0xC2,0x83,0x02,0x00,0x00,
     0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x7F,0x40,0x40,0x40,0x40,0x40,0x60,0x40,0x00
};
char code que[] = {
	//-- 确 --
     0x04,0x84,0xE4,0x9C,0x84,0xC6,0x24,0xF0,0x28,0x27,0xF4,0x2C,0x24,0xF0,0x20,0x00,
     0x01,0x00,0x7F,0x20,0x20,0xBF,0x40,0x3F,0x09,0x09,0x7F,0x09,0x89,0xFF,0x00,0x00
};
char code cuo[] = {
	//-- 错 --
	 0x40,0x30,0xef,0x24,0x64,0x48,0x48,0x7f,0x48,0x48,0x48,0x7f,0x48,0x48,0x40,0x00,
	 0x01,0x01,0x7f,0x21,0x11,0x00,0xff,0x49,0x49,0x49,0x49,0x49,0xff,0x00,0x00,0x00
};
char code wu[] = {
	//-- 误 --
	 0x40,0x42,0xcc,0x00,0x00,0x80,0x9e,0x92,0x92,0x92,0x92,0x92,0x9e,0x80,0x00,0x00,
	 0x00,0x00,0x7f,0x20,0x94,0x84,0x44,0x24,0x14,0x0f,0x14,0x24,0x44,0x84,0x84,0x00
};
/*
128x64  

16x16

8 4
......................................
......................................
......................................
......................................
......................................
......................................
......................................
......................................
......................................
*/
char code huan[] = {
	//-- 欢 --
     0x04, 0x34, 0xC4, 0x04, 0xC4, 0x3C, 0x20, 0x10, 0x0F, 0xE8, 0x08, 0x08, 0x28, 0x18, 0x00, 0x00,
     0x10, 0x08, 0x06, 0x01, 0x82, 0x8C, 0x40, 0x30, 0x0C, 0x03, 0x0C, 0x10, 0x60, 0xC0, 0x40, 0x00
};
char code ying[] = {
	//-- 迎 --
     0x40, 0x42, 0x44, 0xC8, 0x00, 0xFC, 0x04, 0x02, 0x82, 0xFC, 0x04, 0x04, 0x04, 0xFE, 0x04, 0x00,
     0x00, 0x40, 0x20, 0x1F, 0x20, 0x47, 0x42, 0x41, 0x40, 0x7F, 0x40, 0x42, 0x44, 0x63, 0x20, 0x00
};
char code guang[] = {
	//-- 光 --
     0x40, 0x40, 0x42, 0x44, 0x58, 0xC0, 0x40, 0x7F, 0x40, 0xC0, 0x50, 0x48, 0x46, 0x64, 0x40, 0x00,
     0x00, 0x80, 0x40, 0x20, 0x18, 0x07, 0x00, 0x00, 0x00, 0x3F, 0x40, 0x40, 0x40, 0x40, 0x70, 0x00
};
char code lin[] = {
	//-- 临 --
     0x00, 0xFC, 0x00, 0xFF, 0x40, 0x20, 0x10, 0x0C, 0x2B, 0x48, 0xC8, 0x08, 0x08, 0x8C, 0x08, 0x00,
     0x00, 0x1F, 0x00, 0xFF, 0x00, 0xFF, 0x41, 0x41, 0x41, 0x7F, 0x41, 0x41, 0x41, 0xFF, 0x01, 0x00
};
char code qing[] = {
	//-- 请 --
	 0x40,0x42,0xcc,0x00,0x00,0x44,0x54,0x54,0x54,0x7f,0x54,0x54,0x54,0x44,0x40,0x00,0x00,0x00,0x7f,
	 0x20,0x10,0x00,0xff,0x15,0x15,0x15,0x55,0x95,0x7f,0x00,0x00,0x00
}; 
char code shu[] = {
	//-- 输 --
	 0x88,0x68,0x1f,0xc8,0x08,0x10,0xc8,0x54,0x52,0xd1,0x12,0x94,0x08,0xd0,0x10,0x00,0x09,0x19,0x09,
	 0xff,0x05,0x00,0xff,0x12,0x92,0xff,0x00,0x5f,0x80,0x7f,0x00,0x00
};
char code ru[] = {
	//-- 入 --
	 0x00,0x00,0x00,0x00,0x00,0x01,0xe2,0x1c,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x20,
	 0x10,0x0c,0x03,0x00,0x00,0x00,0x03,0x0c,0x30,0x40,0x80,0x80,0x00
};
char code si[] = {
	//-- 四 --
	 0x00,0xfc,0x04,0x04,0x04,0xfc,0x04,0x04,0x04,0xfc,0x04,0x04,0x04,0xfc,0x00,0x00,0x00,0x7f,0x28,
	 0x24,0x23,0x20,0x20,0x20,0x20,0x21,0x22,0x22,0x22,0x7f,0x00,0x00
};
char code wei[] = {
	//-- 位 --
	 0x00,0x80,0x60,0xf8,0x07,0x10,0x90,0x10,0x11,0x16,0x10,0x10,0xd0,0x10,0x00,0x00,0x01,0x00,0x00,
	 0xff,0x40,0x40,0x41,0x5e,0x40,0x40,0x70,0x4e,0x41,0x40,0x40,0x00
};
char code yi[] = {
	//-- 一 --
	 0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
char code er[] = {
	//-- 二 --
	 0x00,0x00,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x08,0x00,0x00,0x00,0x10,0x10,0x10,
	 0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x10,0x00
};
char code san[] = {
	//-- 三 --
	 0x00,0x04,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x84,0x04,0x00,0x00,0x20,0x20,0x20,
	 0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x20,0x00
};
char code wu1[] = {
	//-- 五 --
	 0x00,0x02,0x42,0x42,0x42,0xc2,0x7e,0x42,0x42,0x42,0x42,0xc2,0x02,0x02,0x00,0x00,0x40,0x40,0x40,
	 0x40,0x78,0x47,0x40,0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x00
};
char code liu[] = {
	//-- 六 --
	 0x20,0x20,0x20,0x20,0x20,0x20,0x21,0x22,0x2c,0x20,0x20,0x20,0x20,0x20,0x20,0x00,0x00,0x40,0x20,
	 0x10,0x0c,0x03,0x00,0x00,0x00,0x01,0x02,0x04,0x18,0x60,0x00,0x00
};
char code qi[] = {
	//-- 七 --
	 0x80,0x80,0x80,0x80,0x80,0x40,0xff,0x40,0x40,0x40,0x20,0x20,0x20,0x20,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x3f,0x40,0x40,0x40,0x40,0x40,0x40,0x78,0x00,0x00
};
char code ba[] = {
	//-- 八 --
	 0x00,0x00,0x00,0x00,0x00,0xfc,0x00,0x00,0x00,0x7e,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x60,
	 0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x03,0x0c,0x30,0x40,0x80,0x00
};
char code jiu[] = {
	//-- 九 --
	 0x00,0x10,0x10,0x10,0x10,0xff,0x10,0x10,0x10,0x10,0xf0,0x00,0x00,0x00,0x00,0x00,0x80,0x40,0x20,
	 0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x3f,0x40,0x40,0x40,0x78,0x00
};
char code ling[] = {
	//-- 零 --
	 0x10,0x0c,0x05,0x55,0x55,0x55,0x85,0x7f,0x85,0x55,0x55,0x55,0x05,0x14,0x0c,0x00,0x04,0x04,0x02,
	 0x0a,0x09,0x29,0x2a,0x4c,0x48,0xa9,0x19,0x02,0x02,0x04,0x04,0x00
};
char code maohao[] = {
	//-- ： --
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x36,
	 0x36,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
char code shuxian[] = {
	//-- | --
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
char code kongbai[] = {
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
char code zuokuohao[] = {
	//-- （ --
	 0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x18,0x04,0x02,0x00,0x00,0x00,0x00,0x00,0x00,
	 0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x18,0x20,0x40,0x00,0x00,0x00
};
char code youkuohao[] = {
	//-- ） --
	 0x00,0x00,0x02,0x04,0x18,0xe0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,
	 0x20,0x18,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
};
char code chao[] = {
	//-- 超 --
	 0x40,0x48,0x48,0x48,0xff,0x48,0x48,0x42,0xa2,0x9e,0x82,0xa2,0xc2,0xbe,0x00,0x00,0x80,0x60,0x1f,
	 0x20,0x7f,0x44,0x44,0x40,0x4f,0x48,0x48,0x48,0x48,0x4f,0x40,0x00
};
char code chu[] = {
	//-- 出 --
	 0x00,0x00,0x7c,0x40,0x40,0x40,0x40,0xff,0x40,0x40,0x40,0x40,0xfc,0x00,0x00,0x00,0x00,0x7c,0x40,
	 0x40,0x40,0x40,0x40,0x7f,0x40,0x40,0x40,0x40,0x40,0xfc,0x00,0x00
};
char code chang[] = {
	//-- 长 --
	 0x80,0x80,0x80,0x80,0xff,0x80,0x80,0xa0,0x90,0x88,0x84,0x82,0x80,0x80,0x80,0x00,0x00,0x00,0x00,
	 0x00,0xff,0x40,0x21,0x12,0x04,0x08,0x10,0x20,0x20,0x40,0x40,0x00
};
char code du[] = {
	//-- 度 --
	 0x00,0x00,0xfc,0x24,0x24,0x24,0xfc,0x25,0x26,0x24,0xfc,0x24,0x24,0x24,0x04,0x00,0x40,0x30,0x8f,
	 0x80,0x84,0x4c,0x55,0x25,0x25,0x25,0x55,0x4c,0x80,0x80,0x80,0x00
};