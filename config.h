/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#363636",     /* after initialization */
	[INPUT] =  "#76715e",   /* during input */
	[FAILED] = "#fa2727",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
