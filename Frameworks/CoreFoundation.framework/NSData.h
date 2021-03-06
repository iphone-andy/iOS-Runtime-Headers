/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSData, NSString;

@interface NSData : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, CKRecordValue, PQLBindable, PQLResultSetInitializer, TSPSplitableData> {
}

@property(readonly) NSData * SHA1Data;
@property(readonly) NSString * SHA1HexString;
@property(readonly) unsigned int br_qtnFlags;
@property(readonly) NSString * brc_hexadecimalString;
@property(readonly) NSData * brc_signature;
@property(readonly) bool brc_signatureIsPackage;
@property(readonly) bool brc_signatureIsPendingPlaceHolder;
@property(readonly) bool brc_signatureIsValid;
@property(readonly) const void* bytes;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long length;
@property(readonly) Class superclass;
@property(readonly) Class superclass;
@property(readonly) Class superclass;

+ (id)CKDataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;
+ (id)CKDataWithHexString:(id)arg1;
+ (id)MCDataWithCFData:(struct __CFData { }*)arg1;
+ (id)MCDataWithHexString:(id)arg1;
+ (id)SBKStringByMD5HashingString:(id)arg1;
+ (id)SBKStringFromDigestData:(id)arg1;
+ (id)__imDataWithHexString:(id)arg1;
+ (id)__imDataWithRandomBytes:(unsigned long long)arg1;
+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 queue:(id)arg2 handler:(id)arg3;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)brc_pendingPlaceholderForPackage:(bool)arg1;
+ (id)data;
+ (id)dataForRadioRequestParameters:(id)arg1 isAsynchronousBackgroundRequest:(bool)arg2 error:(id*)arg3;
+ (id)dataForRadioRequestParameters:(id)arg1 protocolVersion:(int)arg2 isAsynchronousBackgroundRequest:(bool)arg3 error:(id*)arg4;
+ (id)dataWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
+ (id)dataWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
+ (id)dataWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfFile:(id)arg1;
+ (id)dataWithContentsOfMappedFile:(id)arg1;
+ (id)dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)dataWithContentsOfURL:(id)arg1;
+ (id)dataWithData:(id)arg1;
+ (id)dataWithHexString:(id)arg1 stringIsUppercase:(bool)arg2;
+ (id)dataWithHexString:(id)arg1;
+ (id)dataWithSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)makeArchive:(const void*)arg1 length:(unsigned long long)arg2 level:(float)arg3;
+ (id)mappedDataWithContentsOfTemporaryFile:(id)arg1 error:(id*)arg2;
+ (id)nsDataWithOcBinaryData:(const struct OcBinaryData { int (**x1)(); unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; char *x6; boolx7; struct SsrwOOStream {} *x8; }*)arg1;
+ (id)pl_dataWithMappedContentsOfFileDescriptor:(int)arg1;
+ (id)pl_dataWithMappedContentsOfFileHandle:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)tsp_dataFromDispatchData:(id)arg1;
+ (id)tsp_dataWithContentsOfURL:(id)arg1 decryptionKey:(id)arg2;

- (const struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)CDXTicket;
- (id)CDXTicketExpirationDate;
- (bool)CDXTicketIsHolePunch;
- (bool)CDXTicketIsReflected;
- (bool)CDXTicketIsRelatedToTicket:(id)arg1;
- (bool)CDXTicketIsStub;
- (long long)CDXTicketPCNT;
- (long long)CDXTicketPID;
- (unsigned long long)CDXTicketRevision;
- (unsigned long long)CDXTicketSID;
- (id)CDXTicketTrimmed;
- (bool)CDXTicketWellFormed;
- (id)CKBase64URLSafeString;
- (id)CKHexString;
- (id)CKLowercaseHexStringWithoutSpaces;
- (id)CKUppercaseHexStringWithoutSpaces;
- (id)MCBase64String;
- (id)MCHexString;
- (id)MCInitWithBase64String:(id)arg1;
- (id)MCSHA1Hash;
- (id)MSBase64Encoding;
- (id)MSHexString;
- (id)MSInitWithBase64Encoding:(id)arg1;
- (id)SBKDataByDeflatingWithGZip;
- (id)SBKDataByDeflatingWithNoZipHeader;
- (id)SBKDataByInflatingWithGZip;
- (id)SBKDataByInflatingWithNoZipHeader;
- (id)SHA1Data;
- (id)SHA1Hash;
- (id)SHA1HexString;
- (id)SHA256Hash;
- (id)TR_compressedGzipData;
- (id)TR_decompressedGzipData;
- (id)_CUTCopyGzippedData;
- (id)_CUTDecompressData;
- (id)_CUTOptionallyDecompressData;
- (id)_CUTStringFromBaseData;
- (id)_FTCopyGzippedData;
- (id)_FTDecompressData;
- (id)_FTOptionallyDecompressData;
- (id)_FTStringFromBaseData;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)_SBKDataByDeflatingWithNoZipHeaderWithCompression:(unsigned long long)arg1;
- (id)_SBKDataByInflatingWithNoZipHeader;
- (id)__imHexString;
- (id)__imHexStringOfBytes:(char *)arg1 withLength:(unsigned long long)arg2;
- (bool)_allowsDirectEncoding;
- (id)_asciiDescription;
- (id)_base64EncodingAsString:(bool)arg1 withOptions:(unsigned long long)arg2;
- (bool)_canReplaceWithDispatchDataForXPCCoder;
- (unsigned long long)_cfTypeID;
- (bool)_copyWillRetain;
- (bool)_decodeBase64EncodedCharacterBuffer:(const char *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 buffer:(char *)arg4 bufferLength:(unsigned long long)arg5 state:(struct { boolx1; boolx2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg6;
- (id)_geo_newXPCData;
- (id)_geo_uppercaseMD5HashString;
- (id)_gkBase64EncodedString;
- (id)_gkMD5HashData;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkSHA1HashString;
- (id)_initWithBase64EncodedObject:(id)arg1 options:(unsigned long long)arg2;
- (bool)_isCompact;
- (bool)_isDispatchData;
- (bool)_isSafeResumeDataForBackgroundDownload:(int)arg1;
- (id)_replaceCString:(const char *)arg1 withCString:(const char *)arg2;
- (id)_web_guessedMIMEType;
- (id)_web_guessedMIMETypeForExtension:(id)arg1;
- (id)_web_guessedMIMETypeForXML;
- (bool)_web_isCaseInsensitiveEqualToCString:(const char *)arg1;
- (long long)_web_locationAfterFirstBlankLine;
- (id)_web_parseRFC822HeaderFields;
- (bool)_web_startsWithBlankLine;
- (id)_webkit_guessedMIMEType;
- (id)_webkit_guessedMIMETypeForXML;
- (id)_webkit_parseRFC822HeaderFields;
- (id)aa_hexString;
- (id)abDecodeVCardBase64;
- (id)abDecodedUTF7;
- (id)abEncodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;
- (bool)abIsUTF16EntourageVCard;
- (id)abStringAtRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inEncoding:(unsigned long long)arg2;
- (id)afui_dataByCompressingWithGzip;
- (id)base64Decoded;
- (id)base64Encoded;
- (id)base64EncodedDataWithOptions:(unsigned long long)arg1;
- (id)base64EncodedStringWithOptions:(unsigned long long)arg1;
- (id)base64Encoding;
- (unsigned int)br_qtnFlags;
- (id)brc_SHA256WithSalt:(id)arg1;
- (id)brc_hexadecimalString;
- (id)brc_signature;
- (bool)brc_signatureIsPackage;
- (bool)brc_signatureIsPendingPlaceHolder;
- (bool)brc_signatureIsValid;
- (const void*)bytes;
- (Class)classForCoder;
- (id)copyDeflatedData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cplSyncAnchorDescription;
- (id)cplSyncAnchorSimpleDescription;
- (id)cr_md5DigestHexString;
- (id)decompressedGzipData;
- (id)decompressedGzipDataUsingTemporaryFile;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateByteRangesUsingBlock:(id)arg1;
- (id)fileSafeBase64Encoding;
- (void)getBytes:(void*)arg1 length:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)getBytes:(void*)arg1;
- (id)gzipDeflate:(float)arg1;
- (id)gzipInflate;
- (unsigned long long)hash;
- (id)hexEncoding;
- (id)hexString;
- (id)hexString;
- (id)hexStringValue;
- (id)initFromPQLResultSet:(id)arg1 error:(id*)arg2;
- (id)initWithBase64EncodedData:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithBase64EncodedString_gk:(id)arg1;
- (id)initWithBase64Encoding:(id)arg1;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 deallocator:(id)arg4;
- (id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 copy:(bool)arg3 freeWhenDone:(bool)arg4 bytesAreVM:(bool)arg5;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(id)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(bool)arg3;
- (id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2;
- (id)initWithCPLArchiver:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfMappedFile:(id)arg1 error:(id*)arg2;
- (id)initWithContentsOfMappedFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToData:(id)arg1;
- (bool)isNSData__;
- (unsigned long long)length;
- (id)lowercaseHexStringWithoutSpaces;
- (id)md5Digest;
- (id)mf_MD5Digest;
- (id)mf_attachmentWithFilename:(id)arg1 UTIType:(id)arg2 fromManager:(id)arg3 contextID:(id)arg4;
- (id)mf_copyHexString;
- (id)mf_dataByConvertingUnixNewlinesToNetwork;
- (id)mf_decodeBase64;
- (id)mf_decodeBase64InRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1;
- (id)mf_decodeModifiedBase64;
- (id)mf_decodeQuotedPrintableForText:(bool)arg1;
- (id)mf_decodeUuencoded;
- (id)mf_encodeBase64;
- (id)mf_encodeBase64HeaderData;
- (id)mf_encodeBase64WithoutLineBreaks;
- (id)mf_encodeModifiedBase64;
- (bool)mf_immutable;
- (id)mf_locationsOfUnixNewlinesNeedingConversion;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfByteFromSet:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1 options:(unsigned long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfCString:(const char *)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mf_rangeOfRFC822HeaderData;
- (id)mf_subdataFromIndex:(unsigned long long)arg1;
- (id)mf_subdataToIndex:(unsigned long long)arg1;
- (id)mf_subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt { }*)arg1 atPosition:(int)arg2;
- (id)ml_stringValueForSQL;
- (struct CDXTicket { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; struct { unsigned char x_5_1_1[6]; unsigned short x_5_1_2; } x5; unsigned int x6; unsigned char x7[0]; }*)mutableCDXTicket;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)pl_adviceDoNotNeed;
- (void)pl_adviceWillNeed;
- (unsigned long long)pl_advisoryLength;
- (id)plistArchiveWithCPLArchiver:(id)arg1;
- (id)propertyListForRadioResponseReturningError:(id*)arg1 unparsedResponseDictionary:(id*)arg2;
- (id)propertyListForRadioResponseReturningError:(id*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfData:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (bool)safari_dataAppearsToBeCompressed;
- (id)safari_dataByCompressingData;
- (id)safari_dataByDecompressingData;
- (id)sha1Digest;
- (id)shortDescription;
- (id)shortDescription;
- (id)shortDescription;
- (struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)sockAddr;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tsp_dispatchData;
- (id)tsp_dispatchDataWithApplier:(id)arg1;
- (void)tsp_splitDataWithMaxSize:(unsigned long long)arg1 subdataHandlerBlock:(id)arg2;
- (bool)tsp_writeToURL:(id)arg1 encryptionKey:(id)arg2;
- (id)uppercaseHexStringWithoutSpaces;
- (id)webSafeBase64Data;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2 error:(id*)arg3;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

@end
