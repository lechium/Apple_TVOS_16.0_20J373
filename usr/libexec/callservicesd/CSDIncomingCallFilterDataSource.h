//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSDIncomingCallFilterDataSource : NSObject
{
}

@property(readonly, copy, nonatomic) NSString *networkCountryCode;
- (void)setFilterBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000776a0
- (id)_callFilterIdentifier;	// IMP=0x001000000007764d
- (void)dealloc;	// IMP=0x001000000007761e
- (id)init;	// IMP=0x00100000000775ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

