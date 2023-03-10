//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (Compression)
+ (id)dataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x0020000000701cfb
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x0020000000701c63
@property(readonly, copy) NSData *hmd_uncompressedData;
@property(readonly, copy) NSData *hmd_compressedData;
- (id)hm_generateSHA256;	// IMP=0x00100000005fe89b
- (id)hm_generateSHA1;	// IMP=0x00100000005fe7db
- (id)hm_stringInHexFormat;	// IMP=0x00100000005fe6f0
@end

