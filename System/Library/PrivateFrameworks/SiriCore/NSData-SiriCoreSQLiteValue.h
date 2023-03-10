//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (SiriCoreSQLiteValue)
- (const void *)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long *)arg1;	// IMP=0x002000000001fc68
- (long long)siriCoreSQLiteValue_type;	// IMP=0x002000000001fc5d
- (id)siriCoreSQLiteValue_toData;	// IMP=0x002000000001fc54
- (id)siriCoreSQLiteValue_toNumber;	// IMP=0x002000000001fc04
- (id)siriCoreSQLiteValue_toString;	// IMP=0x002000000001fbc9
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;	// IMP=0x002000000001fb21

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

