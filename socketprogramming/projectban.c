//........................struct.h................................//
	
//.....structure definition for registration form.............................//

struct registration
{
	signed int balance;
	char arr_name[20];
	unsigned int u_id;
	char arr_gender[10];
	char arr_password[10];
	unsigned long int acc_no;
	unsigned long int adhar_no;
	unsigned long int mobile_no;
	struct dob dt;
	struct address add;
	struct nominee name;
	struct reg_time_date reg;
};


//.......structure definition for dob......................//

struct dob
{
        char date;
        char month;
        int year;
};

//............structure definition for nomineee..........//

struct nomine
{
        char name[20];
        short int adhaar[10];
        short int mobile[10];
};

//.............structure definition for address details.................//

struct address
{
        char house_no[10];
        char area[10];
        char location[10];
        char district[10];
        char state[10];
        char pincode[10];
};



