#ifndef __GCD_H
#define __GCD_H


class GCD 
{

private:

	GCD() {}

public:

	static int Calculate(int m, int n)
	{
		int register m1 = 0;
		int register n1 = 0;
		int register r = 0;

		if (m > n) {
			m1 = m;
			n1 = n; 
		}
		else {
			m1 = n;
			n1 = m;
		}

		do {
			r = m1 % n1;

			if (r > 0)
			{
				m1 = n1;
				n1 = r;
			}
			else {
				return n1;
			}

		} while (r > 0);


	}



};


#endif


