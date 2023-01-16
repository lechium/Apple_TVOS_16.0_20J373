//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (HomeKit)
+ (id)stringWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;	// IMP=0x002000000070179e
- (_Bool)hm_containsAnyTextCheckingTypeInTypes:(unsigned long long)arg1;	// IMP=0x00100000005fdf90
@property(readonly, copy) NSString *hm_truncatedNameString;
@property(readonly, copy) NSString *stringByCapitalizingFirstWord;
- (id)stringByTransformingFirstWordUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000005fdcc5
- (id)hm_generateSHA1;	// IMP=0x00100000005fdc70
@end

