//
// The developer of the original code and/or files is Tripwire, Inc.
// Portions created by Tripwire, Inc. are copyright (C) 2000 Tripwire,
// Inc. Tripwire is a registered trademark of Tripwire, Inc.  All rights
// reserved.
// 
// This program is free software.  The contents of this file are subject
// to the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version.  You may redistribute it and/or modify it
// only in compliance with the GNU General Public License.
// 
// This program is distributed in the hope that it will be useful.
// However, this program is distributed AS-IS WITHOUT ANY
// WARRANTY; INCLUDING THE IMPLIED WARRANTY OF MERCHANTABILITY OR FITNESS
// FOR A PARTICULAR PURPOSE.  Please see the GNU General Public License
// for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307,
// USA.
// 
// Nothing in the GNU General Public License or any other license to use
// the code or files shall permit you to use Tripwire's trademarks,
// service marks, or other intellectual property without Tripwire's
// prior written consent.
// 
// If you have any questions, please contact Tripwire, Inc. at either
// info@tripwire.org or www.tripwire.org.
//
///////////////////////////////////////////////////////////////////////////////
// timeconvert.h

#ifndef __TIMECONVERT_H
#define __TIMECONVERT_H

//=========================================================================
// INCLUDES
//=========================================================================

#ifndef __TYPES_H
#include "types.h"
#endif

#ifndef __TCHAR_H
#include "core/tchar.h"
#endif

//=========================================================================
// STANDARD LIBRARY INCLUDES
//=========================================================================


//=========================================================================
// DECLARATION OF CLASSES
//=========================================================================

// wrapper for time.h functions
//
// NOTE:BAM -- this only works with a time_t that is less than 64 bits long.
class cTimeUtil
{
public:
    static int64        DateToTime( struct tm* ptm );
        // simple conversion.  ptm is considered to be in localtime.
    static struct tm*   TimeToDateGMT( const int64& seconds );
        // simple conversion
    static struct tm*   TimeToDateLocal( const int64& seconds );
        // conversion with timezone and daylight
    static int64        GetTime();
        // returns current time in UTC
};

#endif//__TIMECONVERT_H

