//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface BLSHDefaultsObserver : NSObject
{
    NSUserDefaults *_observedDefaults;	// 8 = 0x8
    NSMapTable *_handlers;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000045360
@property _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000045209
- (void)invalidate;	// IMP=0x00000000000450c7
- (void)dealloc;	// IMP=0x0000000000044f31
- (void)addHandlerForKey:(id)arg1 attribute:(id)arg2;	// IMP=0x0000000000044e89
- (id)init;	// IMP=0x0000000000044cbc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
