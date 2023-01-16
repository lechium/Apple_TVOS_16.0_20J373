//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface TIKeyboardInputManagerServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedKeyboardInputManagerServer;	// IMP=0x0020000000005297
- (void).cxx_destruct;	// IMP=0x0020000000005e23
- (void)prepareForActivity;	// IMP=0x0010000000005d58
- (void)prepareForInactivity;	// IMP=0x0010000000005c50
- (void)handleMemoryPressureLevel:(unsigned long long)arg1 excessMemoryInBytes:(unsigned long long)arg2;	// IMP=0x0010000000005b92
- (void)keyboardActivityDidTransition:(id)arg1;	// IMP=0x0010000000005b27
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000579c
- (void)reduceCacheToSize:(unsigned long long)arg1;	// IMP=0x00100000000056ae
- (void)releaseAllInputManagers:(_Bool)arg1;	// IMP=0x001000000000565b
- (void)appleKeyboardsSettingsChanged:(id)arg1;	// IMP=0x00100000000055b6
- (id)init;	// IMP=0x00100000000053e9
- (void)dealloc;	// IMP=0x001000000000531c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

