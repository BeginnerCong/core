#pragma once

#include <string>
#include <deque>
#include <fstream>
#include <vector>
#include <list>

#if defined(_WIN32) || defined (_WIN64)
	#include <direct.h>
#endif

#include "OfficeUtilsCommon.h"
#include "../../DesktopEditor/common/Types.h"
using namespace std;

//#define ZLIB_WINAPI
//#define CODEPAGE_ISSUE_FIX

//#pragma comment(lib, "zlibstat.lib")

//#if defined(_WIN32) || defined (_WIN64)
    #include "zlib-1.2.3/contrib/minizip/unzip.h"
    #include "zlib-1.2.3/contrib/minizip/zip.h"
//#else
   #include <zlib.h>
//#endif
namespace ZLibZipUtils
{
  int ZipDir( const WCHAR* dir, const WCHAR* outputFile, const OnProgressCallback* progress, int compressionLevel = -1 );
  int ZipFile( const WCHAR* inputFile, const WCHAR* outputFile, int compressionLevel = -1 );
  bool ClearDirectory( const WCHAR* dir, bool delDir = false );
  int UnzipToDir( const WCHAR* zipFile, const WCHAR* unzipDir, const OnProgressCallback* progress, const WCHAR* password = NULL, bool opt_extract_without_path = false, bool clearOutputDirectory = false );
  int UncompressBytes( BYTE* destBuf, ULONG* destSize, const BYTE* sourceBuf, ULONG sourceSize );
  int CompressBytes( BYTE* destBuf, ULONG* destSize, const BYTE* sourceBuf, ULONG sourceSize, SHORT level );
  
  bool IsArchive(const WCHAR* filename);
  bool IsFileExistInArchive(const WCHAR* zipFile, const WCHAR* filePathInZip);
  bool LoadFileFromArchive(const WCHAR* zipFile, const WCHAR* filePathInZip, BYTE** fileInBytes, ULONG& nFileSize);
  bool ExtractFiles(const WCHAR* zip_file_path, const ExtractedFileCallback& callback, void* pParam);
  bool CompressFiles(const WCHAR* zip_file_path, const RequestFileCallback& callback, void* pParam, int compression_level);
}