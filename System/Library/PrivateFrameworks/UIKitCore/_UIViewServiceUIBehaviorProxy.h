//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, _UIViewServiceFencingControlProxy;

__attribute__((visibility("hidden")))
@interface _UIViewServiceUIBehaviorProxy
{
    int _remotePID;	// 8 = 0x8
    _UIViewServiceFencingControlProxy *_fencingControlProxy;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x00100000010623c8
+ (id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3;	// IMP=0x0010000001062314
- (void)dealloc;	// IMP=0x0000000001062476
- (void)_objc_initiateDealloc;	// IMP=0x00000000010623f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
