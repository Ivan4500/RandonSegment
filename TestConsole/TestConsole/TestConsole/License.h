#include "pch.h"
_Const _MY_STRING_(dd) = "<%s\r\nCopyright(C) %zd %s\r\n\r\nThis program is free software : you can redistribute it and /or modify\r\nit under the terms of the %s as\r\npublished by the Free Software Foundation, either version %zd of the\r\nLicense, or (at your option) any later version.\r\n\r\nThis program is distributed in the hope that it will be useful,\r\nbut WITHOUT ANY WARRANTY; without even the implied warranty of\r\nMERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.See the\r\n%s for more details.\r\n\r\nYou should have received a copy of the %s\r\nalong with this program. If not, see %s.\r\n";

#define OutPutLicence(year, prog_name_and_what_it_does, name_of_author, name_of_license, version, url) Print_F(dd, prog_name_and_what_it_does, year, name_of_author, name_of_license, version, name_of_license, name_of_license, url)

DefaultIntType _PrintLicence();