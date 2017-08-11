#ifndef CH7_Sales_h
#define CH7_Salles_h
#include<iostream>
#include<string>
using namespace std;


//7.1
class Sales_data {
	string bookNO;
	double price;
	unsigned units_sold = 0;
	double revenue;
public:
	string isbn() const { return bookNO; }
	Sales_data& combine(const Sales_data &);
	//Sales_data() = default;
	Sales_data(istream &is);
	Sales_data(const string& bn, unsigned so,double pr):bookNO(bn),units_sold(so),revenue(pr*so)
	{
		std::cout << "Sales_data(const std::string&, unsigned, double)" << std::endl;
	}
	explicit Sales_data():Sales_data("",0,0){ std::cout << "Sales_data()" << std::endl; }
	explicit Sales_data(const string& s):Sales_data(s,0,0)
	{
		std::cout << "Sales_data(const std::string&)" << std::endl;
	}
	friend istream& read(istream &is, Sales_data &item);
	friend ostream& print(ostream &os, const Sales_data &item);
	//friend Sales_data add(const Sales_data &lef, const Sales_data &rig);
	inline double  avg_price() const;
};

//7.2
Sales_data& Sales_data::combine(const Sales_data &sd) {
	revenue += sd.revenue;
	units_sold += sd.units_sold;
	return *this;
}
//7.6
istream& read(istream &is, Sales_data &item) {
	double price = 0;
	is >> item.bookNO >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}
ostream& print(ostream &os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << endl;
	return os;
}
Sales_data add(const Sales_data &lef, const Sales_data &rig) {
	Sales_data sum = lef;
	sum.combine(rig);
	return sum;
}

inline
Sales_data::Sales_data(istream& is):Sales_data()
{
	std::cout << "Sales_data(istream &is)" << std::endl;
	read(is, *this);
}



double Sales_data::avg_price() const
{

	return units_sold ? revenue / units_sold : 0;
}


#endif