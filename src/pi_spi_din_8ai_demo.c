#include <stdio.h>
#include <unistd.h>
#include <widgetlords.h>

int main(void) 
{	
  	pi_spi_din_init();
  	
  	while(1)
  	{
		printf("\nCH 1\tCH 2\tCH 3\tCH 4\tCH 5\tCH 6\tCH 7\tCH 8\n");
		for(int i = 0; i < 8; ++i)
		{
			printf("%i\t", pi_spi_din_8ai_read_single(CE1, i));
		}
		usleep(500000);
	}

	return 0;
}
