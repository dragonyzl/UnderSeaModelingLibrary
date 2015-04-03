/**
 *  @file xmitRcvModeType.h
 *  Definition of the enum xmitRcvModeType
 *  Created on: 10-Feb-2015 12:49:09 PM
 */

#pragma once

namespace usml {
namespace sensors {

enum xmitRcvMode
{
	NONE = 0,
    RECEIVER = 1,
	SOURCE = 2,
	BOTH = 3
};

typedef xmitRcvMode xmitRcvModeType;

} // end of namespace sensors
} // end of namespace usml
