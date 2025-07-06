/*--------------------------------------------------------------
 *  tdc_driver ? read a 24bit TDC delay value
 *  See <GH link> for mor information
 *------------------------------------------------------------*/

#ifndef TDC_DRIVER_H
#define	TDC_DRIVER_H

#include "mcc_generated_files/system/system.h"
#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

// Disable for speed    
#define TDC_DBG

#define TDC_U24_LSB_NS   0.125f

inline uint32_t tdc_u24_to_ps(uint24_t code);

inline float tdc_u24_to_ns(uint24_t code);

uint24_t tdc_read(void);

#ifdef	__cplusplus
}
#endif

#endif	/* TDC_DRIVER_H */

