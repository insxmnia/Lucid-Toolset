// Library imports/includes
#include <iostream>
#include <string>
#include "Variables.h"
using namespace std;

string pvariables::helpMenu = R"""(Lucid Toolset - 2021

Usage:
	lucid [OPTION] ...

Utility:
	-u -md5 <filepath>    | Returns the MD5 hash of specified file
	-u -crc32 <filepath>  | Returns the CRC32 value of specified file
	-u -sha256 <filepath> | Returns the SHA256 hash of a specified file
	-u -fsize <filepath>  | Returns the total size of specified file in KB
	-u -dfile <filepath>  | Deletes the specified file (If command fails, run CMD as admin)

Encryption:
	-e -sha256 <data> <key> | Encrypts specified data with SHA256 (key is an optional argument)
	-e -aes256 <data> <key> | Encrypts specified data with AES256 (key is an optional argument)
	-e -xor <data> <key>    | Encrypts specified data using XOR (key is an optional argument)

Encoding:
	-en -base64 <data>      | Encodes the specified data into BASE64 format
	-en -hex <data>         | Encodes the specified data into HEX format (BASE16)
	-en -oct <data>         | Encodes the specified data into OCTO format (BASE8)
	-en -utf <type> <data>  | Encodes the specified data into specified UTF format

Network:
	-n -tcp <ip> <port>   | Attempts to connect to the specified IP through a TCP socket on given port
	-n -portscan <ip>     | Scans the IP through a list of set ports to find which ones are opened
	-n -resolve <url>     | Gets the host IP of the specified web url
	-n -cfresolve <url>   | Attempts to get the origin host IP of a cloudflare protected site
	-n -get <url>         | Sends a Http::Get request to the specified URL
	
)""";
string pvariables::utilMenu = R"""(Lucid Toolset - 2021

Usage:
	lucid -u [OPTION]

Utility:
	-u -md5 <filepath>    | Returns the MD5 hash of specified file
	-u -crc32 <filepath>  | Returns the CRC32 value of specified file
	-u -sha256 <filepath> | Returns the SHA256 hash of a specified file
	-u -fsize <filepath>  | Returns the total size of specified file in KB
	-u -dfile <filepath>  | Deletes the specified file (If command fails, run CMD as admin)
)""";
string pvariables::encMenu = R"""(Lucid Toolset - 2021

Usage:
	lucid -e [OPTION]

Encryption:
	-e -sha256 <data> <key> | Encrypts specified data with SHA256 (key is an optional argument)
	-e -aes256 <data> <key> | Encrypts specified data with AES256 (key is an optional argument)
	-e -xor <data> <key>    | Encrypts specified data using XOR (key is an optional argument)
)""";
string pvariables::encoMenu = R"""(Lucid Toolset - 2021

Usage:
	lucid -en [OPTION]

Encoding:
	-en -base64 <data>      | Encodes the specified data into BASE64 format
	-en -hex <data>         | Encodes the specified data into HEX format (BASE16)
	-en -oct <data>         | Encodes the specified data into OCTO format (BASE8)
	-en -utf <type> <data>  | Encodes the specified data into specified UTF format
)""";
string pvariables::netMenu = R"""(Lucid Toolset - 2021

Usage:
	lucid -n [OPTION]

Network:
	-n -tcp <ip> <port>   | Attempts to connect to the specified IP through a TCP socket on given port
	-n -portscan <ip>     | Scans the IP through a list of set ports to find which ones are opened
	-n -resolve <url>     | Gets the host IP of the specified web url
	-n -cfresolve <url>   | Attempts to get the origin host ip of a cloudflare protected site
	-n -get <url>         | Sends a Http::Get request to the specified URL
)""";



