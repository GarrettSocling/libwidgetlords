#include "pi_spi_din.h"

#include <unistd.h>

int main(void) 
{	
  	pi_spi_din_init();
  	pi_spi_din_4ao_init();
  	
  	while(1)
  	{
		pi_spi_din_4ao_write_single(0, 800);
		pi_spi_din_4ao_write_single(2, 800);
		pi_spi_din_4ao_write_single(1, 4000);
		pi_spi_din_4ao_write_single(3, 4000);
		usleep(2000000);
		
		pi_spi_din_4ao_write_single(0, 4000);
		pi_spi_din_4ao_write_single(2, 4000);
		pi_spi_din_4ao_write_single(1, 800);
		pi_spi_din_4ao_write_single(3, 800);
		usleep(2000000);
  	}

	return 0;
}
