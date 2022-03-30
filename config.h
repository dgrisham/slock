/* user and group to drop privileges to */
static const char *user  = "grish";
static const char *group = "grish";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#000000", /* after initialization */
	[INPUT] =  "#333333", /* during input */
	[FAILED] = "#000000", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
