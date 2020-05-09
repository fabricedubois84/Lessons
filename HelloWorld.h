#ifndef HELLOWORLD_H
#define HELLOWORLD_H

class HelloWorld
{
private:
	char *m_data{};
 
public:
	HelloWorld();
 
	~HelloWorld();
 
	void print() const;
 
};

#endif // HELLOWORLD_H