#ifndef DEFINE_H
#define DEFINE_H

#define SERVER "powdertoy.co.uk"

#undef PLOSS

#ifdef MENUV3
#define MENUSIZE 40
#else
#define MENUSIZE 20
#endif
#define BARSIZE 14
#define XRES	612
#define YRES	384
#define NPART XRES*YRES

#define ZSIZE_D	16
#define ZFACTOR_D	8
static unsigned char ZFACTOR = 256/ZSIZE_D;
static unsigned char ZSIZE = ZSIZE_D;

#define CELL    4
#define ISTP    (CELL/2)
#define CFDS	(4.0f/CELL)

#define TSTEPP 0.3f
#define TSTEPV 0.4f
#define VADV 0.3f
#define VLOSS 0.999f
#define PLOSS 0.9999f

typedef unsigned char uint8;

#endif