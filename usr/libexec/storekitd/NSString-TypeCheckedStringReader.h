//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSNumber, NSURL;

@interface NSString (TypeCheckedStringReader)
@property(readonly) NSURL *tcr_url;
@property(readonly) unsigned long long tcr_unsignedLongLong;
- (_Bool)lib_skanIsVersionMultiAware;	// IMP=0x00100000000247ec
- (_Bool)lib_skanIsVersionFidelityAware;	// IMP=0x00100000000247c6
- (id)lib_volumePath;	// IMP=0x0010000000024618
- (id)lib_stringSantiziedAndTruncatedToLength:(unsigned long long)arg1;	// IMP=0x00100000000244fb
- (id)lib_stringByLimitingToLength:(unsigned long long)arg1 addElipsis:(_Bool)arg2;	// IMP=0x001000000002443f
- (id)lib_stringByCopyingUTF8StringWithLength:(unsigned long long)arg1;	// IMP=0x001000000002436e
- (id)lib_stringByAppendingPathComponents:(id)arg1;	// IMP=0x00100000000241cd
- (id)lib_digestMD5;	// IMP=0x0010000000024178
- (id)lib_accountDSIDValue;	// IMP=0x001000000002412f
@property(readonly) NSNumber *lib_numberValue;
@end

