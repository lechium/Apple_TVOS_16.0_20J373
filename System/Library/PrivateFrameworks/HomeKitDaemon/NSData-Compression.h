//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (Compression)
+ (id)dataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x0010000000792c9f
+ (id)dataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x0010000000792c07
@property(readonly, copy) NSData *hmd_uncompressedData;
@property(readonly, copy) NSData *hmd_compressedData;
- (id)hm_generateSHA256;	// IMP=0x001000000068505a
- (id)hm_generateSHA1;	// IMP=0x0010000000684f9a
- (id)hm_stringInHexFormat;	// IMP=0x0010000000684eaf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

