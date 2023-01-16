//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _GCAgentConnectionRegistration : NSObject
{
    unsigned int _userIdentifier;	// 8 = 0x8
    id _connectionInvalidationRegistration;	// 16 = 0x10
    id _connectionInterruptedRegistration;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000078d2
@property(retain, nonatomic) id connectionInterruptedRegistration; // @synthesize connectionInterruptedRegistration=_connectionInterruptedRegistration;
@property(retain, nonatomic) id connectionInvalidationRegistration; // @synthesize connectionInvalidationRegistration=_connectionInvalidationRegistration;
@property(readonly, nonatomic) unsigned int userIdentifier; // @synthesize userIdentifier=_userIdentifier;
- (void)invalidate;	// IMP=0x001000000000785a
- (id)initWithUserIdentifier:(unsigned int)arg1;	// IMP=0x001000000000781f

@end
