class label
{
private:
	string fname;
	string lname;
	int zip;
public:
	label();
	label(string, string, int);
	~label();
	string getFname();
	string getLname();
	int getZip();
	//set functions Mutator function
	void setFname(string);
	void setLname(string);
	void setZip(int);
	//extra functions
	void print();
	void getInput();
};

