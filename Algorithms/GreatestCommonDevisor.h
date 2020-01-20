#ifndef __GCD_H
#define __GCD_H


class GCD 
{

private:

	GCD() {}

public:

	/*
		Algorithm calculates Greatest Common Devisor according to Euclids Algorithm
	*/
	static int Calculate(int m, int n)
	{
		int register m1 = 0;
		int register n1 = 0;
		int register r = 0;

		// If n > m we want to swap the values
		if (m >= n) {
			m1 = m;
			n1 = n; 
		}
		else {
			m1 = n;
			n1 = m;
		}

		do {
			// find the remainder of m / n for this iteration
			r = m1 % n1;

			// if the remainder is non-zero we shift n to m and r to n then recalculate
			if (r > 0)
			{
				m1 = n1;
				n1 = r;
			}
			else {
				// n1 contains the greates common devisor of m and n
				return n1;
			}

		} while (r > 0);


	}



};


#endif


