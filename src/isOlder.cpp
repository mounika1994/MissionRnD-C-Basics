/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
		char *removespace(char *str)
		{
			int c = 0; 
			for (inti = 0; str[i]; i++)
			{
				if (str[i] != '-')
					str[c++] = str[i];
				str[c] = '\0';
				return str;
			}
			int strlen(char *str)
			{
				len = 0;
				while (str[len] != '\0')
					len++;
				return len;
			}
			int	validdate(dob)
			{
				char *db;
				int dec,len,year,mon,day;
				db=removespace(dob);
				len = strlen(db);
				for ( int i = 0; i<len; i++){
					dec = dec * 10 + (db[i] - '0');
					year = dec / 10000;
					date %= 10000;
					mon = dec / 100;
					day = dec % 100;

				}
			}

		}
	

	return 0;
}
