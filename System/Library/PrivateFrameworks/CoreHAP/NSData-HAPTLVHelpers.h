//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (HAPTLVHelpers)
+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000e4672
- (id)serializeWithError:(id *)arg1;	// IMP=0x00100000000e4570

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

