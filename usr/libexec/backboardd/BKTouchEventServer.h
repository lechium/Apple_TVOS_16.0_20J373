//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BKHIDDomainServiceServer, NSString;

@interface BKTouchEventServer : NSObject
{
    BKHIDDomainServiceServer *_server;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000237f9
- (void)_updateSceneHostSettings;	// IMP=0x0010000000023728
- (oneway void)setSceneHostSettings:(id)arg1 forContextID:(id)arg2;	// IMP=0x00100000000232fc
- (id)init;	// IMP=0x001000000002321f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
