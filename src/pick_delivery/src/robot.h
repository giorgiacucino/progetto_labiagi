#include <stdlib.h>
#include <string>
using namespace std;

class robot
{
	public:
		string	status;
		float	distance;
		int		free;
		int		arrived;
	robot(string s, int f)
	{
		status = s;
		free = f;
		distance = 0;
		arrived = 0;
	}
};